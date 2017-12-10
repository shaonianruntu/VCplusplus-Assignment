// Line.cpp: implementation of the CLine class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyDraw.h"
#include "Line.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CLine, CObject, 1)  

CLine::CLine()
{

}

CLine::~CLine()
{

}

CLine::CLine(CPoint  pt1, CPoint  pt2)
{
	m_pt1 = pt1;
	m_pt2 = pt2;
}

void CLine::DrawLine(CDC*  pDC)
{
	pDC->MoveTo(m_pt1);
	pDC->LineTo(m_pt2);
}

void  CLine::Serialize(CArchive &ar)
{
    if(ar.IsStoring())
	   ar<<m_pt1<<m_pt2; 	// 保存对象的数据
    else
	   ar>>m_pt1>>m_pt2; 	// 读出对象的数据
}
