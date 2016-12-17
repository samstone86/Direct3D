// Direct3DTestDlg.h : header file
//

#pragma once
#include "Direct3D.h"
#include "Direct3DObject.h"
#include "DirectInput.h"

// CDirect3DTestDlg dialog
class CDirect3DTestDlg : public CDialog
{
// Construction
public:
	CDirect3DTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_DIRECT3DTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	CDirect3D m_d3d;
	CDirect3DObject o[5];
	bool m_run;
	CPoint m_p;

	CKeyInput m_key;	
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedDirect3d();
	afx_msg void OnBnClickedKomplex();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnClose();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedLight();
	afx_msg void OnBnClickedTransparenttexture();
	afx_msg void OnBnClickedTransform3();
	void DisableButtons();
	afx_msg void OnBnClickedExit();
	afx_msg void OnBnClicked3dobject();
	afx_msg void OnBnClickedFish();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
};
