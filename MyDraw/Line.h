// Line.h: interface for the CLine class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LINE_H__64CCB853_68D6_4F1F_A3E7_B099FE699FCE__INCLUDED_)
#define AFX_LINE_H__64CCB853_68D6_4F1F_A3E7_B099FE699FCE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CLine : public CObject  
{
private:
	// �����Ա��������ʾһ��ֱ�������յ������
	CPoint   m_pt1;
	CPoint   m_pt2;
public:
	CLine();
	virtual  ~CLine();
	CLine(CPoint   pt1, CPoint   pt2);    // ���캯��
	void   DrawLine(CDC *pDC);  	      // �����߶�

public:
    void Serialize(CArchive &ar);
    DECLARE_SERIAL(CLine)
};

#endif // !defined(AFX_LINE_H__64CCB853_68D6_4F1F_A3E7_B099FE699FCE__INCLUDED_)
