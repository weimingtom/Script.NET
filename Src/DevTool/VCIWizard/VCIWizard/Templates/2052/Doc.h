#ifndef __[!output PROJECT_NAME]DOC_H__
#define __[!output PROJECT_NAME]DOC_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// [!output PROJECT_NAME]Doc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// C[!output PROJECT_NAME]Doc document

class C[!output PROJECT_NAME]Doc : public CDocument
{
	DECLARE_DYNCREATE(C[!output PROJECT_NAME]Doc)

// Attributes
public:
	C[!output PROJECT_NAME]Doc();
	virtual ~C[!output PROJECT_NAME]Doc();

	CMenu* m_pMenu;

// Operations
public:
	void RefreshDocProperty();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C[!output PROJECT_NAME]Doc)
	public:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	virtual void SetTitle(LPCTSTR lpszTitle);
	virtual void OnCloseDocument();
	protected:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:	
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(C[!output PROJECT_NAME]Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(__[!output PROJECT_NAME]DOC_H__)
