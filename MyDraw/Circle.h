// Circle.h: interface for the CCircle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLE_H__5312E4DE_E78B_4914_BD6D_C8A886B71A21__INCLUDED_)
#define AFX_CIRCLE_H__5312E4DE_E78B_4914_BD6D_C8A886B71A21__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCircle : public CObject  
{
private:
	// 定义成员变量
	CPoint   m_pt1;
	int      m_r;
public:
	CCircle();
	virtual ~CCircle();
	CCircle(CPoint pt1, int r);    // 构造函数
	void   DrawCircle(CDC *pDC);  	      // 绘制线段
public:
    void Serialize(CArchive &ar);
    DECLARE_SERIAL(CCircle)
};

#endif // !defined(AFX_CIRCLE_H__5312E4DE_E78B_4914_BD6D_C8A886B71A21__INCLUDED_)
