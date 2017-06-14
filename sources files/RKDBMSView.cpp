
// RKDBMSView.cpp : implementation of the CRKDBMSView class 
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
//#include "RKDBMS.h"
#endif

#include "RKDBMS.h"
#include "RKDBMSDoc.h"
#include "RKDBMSView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRKDBMSView

IMPLEMENT_DYNCREATE(CRKDBMSView, CView)

BEGIN_MESSAGE_MAP(CRKDBMSView, CView)
	ON_WM_CREATE()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

// CRKDBMSView construction/destruction

CRKDBMSView::CRKDBMSView()
{
	// TODO: add construction code here

}

CRKDBMSView::~CRKDBMSView()
{
}

BOOL CRKDBMSView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CRKDBMSView drawing

void CRKDBMSView::OnDraw(CDC* /*pDC*/)
{
	CRKDBMSDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CRKDBMSView diagnostics

#ifdef _DEBUG
void CRKDBMSView::AssertValid() const
{
	CView::AssertValid();
}


void CRKDBMSView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRKDBMSDoc* CRKDBMSView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRKDBMSDoc)));
	return (CRKDBMSDoc*)m_pDocument;
}
#endif //_DEBUG


// CRKDBMSView message handlers

void CRKDBMSView::OnInitialUpdate()
{
	CView::OnInitialUpdate();

	/*
	CListCtrl &ctlCarParts = this->GetListCtrl();
	ctlCarParts.ModifyStyle(NULL, LVS_REPORT);
	ctlCarParts.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	*/
}

int CRKDBMSView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	GetDocument()->displayView = this;

	return 0;
}



