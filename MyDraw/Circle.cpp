// Circle.cpp: implementation of the CCircle class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MyDraw.h"
#include "Circle.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CCircle, CObject, 1)  

CCircle::CCircle()
{

}

CCircle::~CCircle()
{

}

CCircle::CCircle(CPoint  pt1, int r)
{
	m_pt1 = pt1;
	m_r = r;
}

void CCircle::DrawCircle(CDC*  pDC)
{
	pDC->Ellipse(m_pt1.x-m_r,m_pt1.y-m_r,m_pt1.x+m_r,m_pt1.y+m_r);  
}

void  CCircle::Serialize(CArchive &ar)
{
    if(ar.IsStoring())
	   ar<<m_pt1<<m_r; 	// 保存对象的数据
    else
	   ar>>m_pt1>>m_r; 	// 读出对象的数据
}
