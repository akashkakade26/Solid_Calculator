
// Solid_CalculatorDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "Solid_Calculator.h"
#include "Solid_CalculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include <stdexcept>

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CSolidCalculatorDlg dialog



CSolidCalculatorDlg::CSolidCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SOLID_CALCULATOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSolidCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, ID_EB_RESULT_DISPLAY, m_eb_ResultDisplay);
	DDX_Text(pDX, ID_EB_RESULT_DISPLAY, m_StrResultDisplay);

	DDX_Control(pDX, ID_BT_0, m_Bt_0);
	DDX_Control(pDX, ID_BT_1, m_Bt_1);
	DDX_Control(pDX, ID_BT_2, m_Bt_2);
	DDX_Control(pDX, ID_BT_3, m_Bt_3);
	DDX_Control(pDX, ID_BT_4, m_Bt_4);
	DDX_Control(pDX, ID_BT_5, m_Bt_5);
	DDX_Control(pDX, ID_BT_6, m_Bt_6);
	DDX_Control(pDX, ID_BT_7, m_Bt_7);
	DDX_Control(pDX, ID_BT_8, m_Bt_8);
	DDX_Control(pDX, ID_BT_9, m_Bt_9);

	DDX_Control(pDX, ID_BT_DOT, m_Bt_Dot);
	DDX_Control(pDX, ID_BT_RESULT, m_Bt_Result);
	DDX_Control(pDX, ID_BT_ADD, m_Bt_Add);
	DDX_Control(pDX, ID_BT_SUBSTRACT, m_Bt_Sub);
	DDX_Control(pDX, ID_BT_MULTIPLY, m_Bt_Mul);
	DDX_Control(pDX, ID_BT_DIVIDE, m_Bt_Div);

	DDX_Control(pDX, ID_BT_CLEAR, m_Bt_Clear);

	DDX_Control(pDX, IDC_MFC_BT_0, m_Mfc_bt_0);
	DDX_Control(pDX, IDC_MFC_BT_1, m_Mfc_bt_1);
	DDX_Control(pDX, IDC_MFC_BT_2, m_Mfc_bt_2);
	DDX_Control(pDX, IDC_MFC_BT_3, m_Mfc_bt_3);
	DDX_Control(pDX, IDC_MFC_BT_4, m_Mfc_bt_4);
	DDX_Control(pDX, IDC_MFC_BT_5, m_Mfc_bt_5);
	DDX_Control(pDX, IDC_MFC_BT_6, m_Mfc_bt_6);
	DDX_Control(pDX, IDC_MFC_BT_7, m_Mfc_bt_7);
	DDX_Control(pDX, IDC_MFC_BT_8, m_Mfc_bt_8);
	DDX_Control(pDX, IDC_MFC_BT_9, m_Mfc_bt_9);

	DDX_Control(pDX, IDC_MFC_BT_DOT, m_Mfc_bt_Dot);
	DDX_Control(pDX, IDC_MFC_BT_RESULT, m_Mfc_bt_Result);
	DDX_Control(pDX, IDC_MFC_BT_ADD, m_Mfc_bt_Add);
	DDX_Control(pDX, IDC_MFC_BT_SUBSTRACT, m_Mfc_bt_Sub);
	DDX_Control(pDX, IDC_MFC_BT_MULTIPLY, m_Mfc_bt_Mul);
	DDX_Control(pDX, IDC_MFC_BT_DIVIDE, m_Mfc_bt_Div);

	DDX_Control(pDX, IDC_MFC_BT_CLEAR, m_Mfc_bt_Clear);
}

BEGIN_MESSAGE_MAP(CSolidCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()

	ON_BN_CLICKED(IDC_MFC_BT_1, &CSolidCalculatorDlg::OnBnClickedBt1)
	ON_BN_CLICKED(IDC_MFC_BT_2, &CSolidCalculatorDlg::OnBnClickedBt2)
	ON_BN_CLICKED(IDC_MFC_BT_3, &CSolidCalculatorDlg::OnBnClickedBt3)
	ON_BN_CLICKED(IDC_MFC_BT_4, &CSolidCalculatorDlg::OnBnClickedBt4)
	ON_BN_CLICKED(IDC_MFC_BT_5, &CSolidCalculatorDlg::OnBnClickedBt5)
	ON_BN_CLICKED(IDC_MFC_BT_6, &CSolidCalculatorDlg::OnBnClickedBt6)
	ON_BN_CLICKED(IDC_MFC_BT_7, &CSolidCalculatorDlg::OnBnClickedBt7)
	ON_BN_CLICKED(IDC_MFC_BT_8, &CSolidCalculatorDlg::OnBnClickedBt8)
	ON_BN_CLICKED(IDC_MFC_BT_9, &CSolidCalculatorDlg::OnBnClickedBt9)
	ON_BN_CLICKED(IDC_MFC_BT_0, &CSolidCalculatorDlg::OnBnClickedBt0)
	ON_BN_CLICKED(IDC_MFC_BT_DOT, &CSolidCalculatorDlg::OnBnClickedBtDot)
	ON_BN_CLICKED(IDC_MFC_BT_RESULT, &CSolidCalculatorDlg::OnBnClickedBtResult)
	ON_BN_CLICKED(IDC_MFC_BT_ADD, &CSolidCalculatorDlg::OnBnClickedBtAdd)
	ON_BN_CLICKED(IDC_MFC_BT_SUBSTRACT, &CSolidCalculatorDlg::OnBnClickedBtSubstract)
	ON_BN_CLICKED(IDC_MFC_BT_MULTIPLY, &CSolidCalculatorDlg::OnBnClickedBtMultiply)
	ON_BN_CLICKED(IDC_MFC_BT_DIVIDE, &CSolidCalculatorDlg::OnBnClickedBtDivide)
	ON_BN_CLICKED(IDC_MFC_BT_CLEAR, &CSolidCalculatorDlg::OnBnClickedBtClear)

	ON_BN_CLICKED(ID_BT_1, &CSolidCalculatorDlg::OnBnClickedBt1)
	ON_BN_CLICKED(ID_BT_2, &CSolidCalculatorDlg::OnBnClickedBt2)
	ON_BN_CLICKED(ID_BT_3, &CSolidCalculatorDlg::OnBnClickedBt3)
	ON_BN_CLICKED(ID_BT_4, &CSolidCalculatorDlg::OnBnClickedBt4)
	ON_BN_CLICKED(ID_BT_5, &CSolidCalculatorDlg::OnBnClickedBt5)
	ON_BN_CLICKED(ID_BT_6, &CSolidCalculatorDlg::OnBnClickedBt6)
	ON_BN_CLICKED(ID_BT_7, &CSolidCalculatorDlg::OnBnClickedBt7)
	ON_BN_CLICKED(ID_BT_8, &CSolidCalculatorDlg::OnBnClickedBt8)
	ON_BN_CLICKED(ID_BT_9, &CSolidCalculatorDlg::OnBnClickedBt9)
	ON_BN_CLICKED(ID_BT_0, &CSolidCalculatorDlg::OnBnClickedBt0)
	ON_BN_CLICKED(ID_BT_DOT, &CSolidCalculatorDlg::OnBnClickedBtDot)
	ON_BN_CLICKED(ID_BT_RESULT, &CSolidCalculatorDlg::OnBnClickedBtResult)
	ON_BN_CLICKED(ID_BT_ADD, &CSolidCalculatorDlg::OnBnClickedBtAdd)
	ON_BN_CLICKED(ID_BT_SUBSTRACT, &CSolidCalculatorDlg::OnBnClickedBtSubstract)
	ON_BN_CLICKED(ID_BT_MULTIPLY, &CSolidCalculatorDlg::OnBnClickedBtMultiply)
	ON_BN_CLICKED(ID_BT_DIVIDE, &CSolidCalculatorDlg::OnBnClickedBtDivide)
	ON_BN_CLICKED(ID_BT_CLEAR, &CSolidCalculatorDlg::OnBnClickedBtClear)

	//ON_EN_CHANGE(ID_EB_RESULT_DISPLAY, &CSolidCalculatorDlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CSolidCalculatorDlg message handlers

BOOL CSolidCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	m_Font_EditBox.CreateFont(30, 0, 0, 0, FW_BOLD, 0, 0, 0, ANSI_CHARSET,
		0, 0, 0, 0, _T("Vardana"));


	m_Font_CButton.CreateFont(20, 0, 0, 0, FW_BOLD, 0, 0, 0, ANSI_CHARSET,
		0, 0, 0, 0, _T("Vardana"));

	m_Font_MFCButton.CreateFont(20, 0, 0, 0, FW_BOLD, 0, 0, 0, ANSI_CHARSET,
		0, 0, 0, 0, _T("Times New Roman"));

	ReadRegistry();

	HideButtons(m_dwRegValue);

	m_eb_ResultDisplay.EnableWindow(FALSE);
	m_eb_ResultDisplay.SetFont(&m_Font_EditBox);

	m_bDotClicked = FALSE;

	m_StrResultDisplay = _T("0");
	m_fResult = 0;
	m_result = _T("0");
	UpdateData(FALSE);

	hdll = AfxLoadLibrary(_T("Opeartions.dll"));

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSolidCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSolidCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSolidCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSolidCalculatorDlg::HideButtons(BOOL bFlag)
{
	if (bFlag == 0)
	{
		m_Bt_Clear.ShowWindow(TRUE);
		m_Bt_0.ShowWindow(TRUE);
		m_Bt_1.ShowWindow(TRUE);
		m_Bt_2.ShowWindow(TRUE);
		m_Bt_3.ShowWindow(TRUE);
		m_Bt_4.ShowWindow(TRUE);
		m_Bt_5.ShowWindow(TRUE);
		m_Bt_6.ShowWindow(TRUE);
		m_Bt_7.ShowWindow(TRUE);
		m_Bt_8.ShowWindow(TRUE);
		m_Bt_9.ShowWindow(TRUE);
		m_Bt_Dot.ShowWindow(TRUE);
		m_Bt_Result.ShowWindow(TRUE);
		m_Bt_Add.ShowWindow(TRUE);
		m_Bt_Sub.ShowWindow(TRUE);
		m_Bt_Mul.ShowWindow(TRUE);

		m_Bt_Clear.SetFont(&m_Font_CButton);
		m_Bt_0.SetFont(&m_Font_CButton);
		m_Bt_1.SetFont(&m_Font_CButton);
		m_Bt_2.SetFont(&m_Font_CButton);
		m_Bt_3.SetFont(&m_Font_CButton);
		m_Bt_4.SetFont(&m_Font_CButton);
		m_Bt_5.SetFont(&m_Font_CButton);
		m_Bt_6.SetFont(&m_Font_CButton);
		m_Bt_7.SetFont(&m_Font_CButton);
		m_Bt_8.SetFont(&m_Font_CButton);
		m_Bt_9.SetFont(&m_Font_CButton);
		m_Bt_Dot.SetFont(&m_Font_CButton);
		m_Bt_Result.SetFont(&m_Font_CButton);
		m_Bt_Add.SetFont(&m_Font_CButton);
		m_Bt_Sub.SetFont(&m_Font_CButton);
		m_Bt_Mul.SetFont(&m_Font_CButton);

		m_Mfc_bt_Clear.ShowWindow(FALSE);
		m_Mfc_bt_0.ShowWindow(FALSE);
		m_Mfc_bt_1.ShowWindow(FALSE);
		m_Mfc_bt_2.ShowWindow(FALSE);
		m_Mfc_bt_3.ShowWindow(FALSE);
		m_Mfc_bt_4.ShowWindow(FALSE);
		m_Mfc_bt_5.ShowWindow(FALSE);
		m_Mfc_bt_6.ShowWindow(FALSE);
		m_Mfc_bt_7.ShowWindow(FALSE);
		m_Mfc_bt_8.ShowWindow(FALSE);
		m_Mfc_bt_9.ShowWindow(FALSE);
		m_Mfc_bt_Dot.ShowWindow(FALSE);
		m_Mfc_bt_Result.ShowWindow(FALSE);
		m_Mfc_bt_Add.ShowWindow(FALSE);
		m_Mfc_bt_Sub.ShowWindow(FALSE);
		m_Mfc_bt_Mul.ShowWindow(FALSE);
	}
	if (bFlag == 1)
	{
		m_Mfc_bt_Clear.ShowWindow(TRUE);
		m_Mfc_bt_0.ShowWindow(TRUE);
		m_Mfc_bt_1.ShowWindow(TRUE);
		m_Mfc_bt_2.ShowWindow(TRUE);
		m_Mfc_bt_3.ShowWindow(TRUE);
		m_Mfc_bt_4.ShowWindow(TRUE);
		m_Mfc_bt_5.ShowWindow(TRUE);
		m_Mfc_bt_6.ShowWindow(TRUE);
		m_Mfc_bt_7.ShowWindow(TRUE);
		m_Mfc_bt_8.ShowWindow(TRUE);
		m_Mfc_bt_9.ShowWindow(TRUE);
		m_Mfc_bt_Dot.ShowWindow(TRUE);
		m_Mfc_bt_Result.ShowWindow(TRUE);
		m_Mfc_bt_Add.ShowWindow(TRUE);
		m_Mfc_bt_Sub.ShowWindow(TRUE);
		m_Mfc_bt_Mul.ShowWindow(TRUE);

		m_Mfc_bt_Clear.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_0.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_1.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_2.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_3.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_4.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_5.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_6.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_7.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_8.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_9.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_Dot.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_Result.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_Add.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_Sub.SetFont(&m_Font_MFCButton);
		m_Mfc_bt_Mul.SetFont(&m_Font_MFCButton);

		m_Bt_Clear.ShowWindow(FALSE);
		m_Bt_0.ShowWindow(FALSE);
		m_Bt_1.ShowWindow(FALSE);
		m_Bt_2.ShowWindow(FALSE);
		m_Bt_3.ShowWindow(FALSE);
		m_Bt_4.ShowWindow(FALSE);
		m_Bt_5.ShowWindow(FALSE);
		m_Bt_6.ShowWindow(FALSE);
		m_Bt_7.ShowWindow(FALSE);
		m_Bt_8.ShowWindow(FALSE);
		m_Bt_9.ShowWindow(FALSE);
		m_Bt_Dot.ShowWindow(FALSE);
		m_Bt_Result.ShowWindow(FALSE);
		m_Bt_Add.ShowWindow(FALSE);
		m_Bt_Sub.ShowWindow(FALSE);
		m_Bt_Mul.ShowWindow(FALSE);
	}

}


void CSolidCalculatorDlg::OnBnClickedBt1()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("1");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt2()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("2");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt3()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("3");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt4()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("4");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt5()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("5");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt6()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("6");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt7()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("7");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt8()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("8");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt9()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("9");
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBt0()
{
	// TODO: Add your control notification handler code here
	if (m_StrResultDisplay.CompareNoCase(_T("0")) == 0)
	{
		m_StrResultDisplay = _T("");
	}
	m_StrResultDisplay = m_StrResultDisplay + _T("0");
	UpdateData(FALSE);
}

void CSolidCalculatorDlg::OnBnClickedBtDot()
{
	// TODO: Add your control notification handler code here
	if (m_bDotClicked == FALSE)
	{
		if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
		{
			m_StrResultDisplay = _T("0");
		}

		if (m_StrResultDisplay.Right(1) == _T("+") ||
			m_StrResultDisplay.Right(1) == _T("-") ||
			m_StrResultDisplay.Right(1) == _T("*") ||
			m_StrResultDisplay.Right(1) == _T("/"))
		{
			m_StrResultDisplay = m_StrResultDisplay + _T("0");
		}


		m_StrResultDisplay = m_StrResultDisplay + _T(".");
		m_bDotClicked = TRUE;
		UpdateData(FALSE);
	}

}


void CSolidCalculatorDlg::OnBnClickedBtResult()
{
	// TODO: Add your control notification handler code here
	m_bDotClicked = FALSE;
	CheckCalculation();
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBtAdd()
{
	// TODO: Add your control notification handler code here
	m_bDotClicked = FALSE;
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay/* + _T(" ")*/ + _T("+")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBtSubstract()
{
	// TODO: Add your control notification handler code here
	m_bDotClicked = FALSE;
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ") */ + _T("-")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBtMultiply()
{
	// TODO: Add your control notification handler code here
	m_bDotClicked = FALSE;
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ")*/ + _T("*")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBtDivide()
{
	// TODO: Add your control notification handler code here
	m_bDotClicked = FALSE;
	if (m_StrResultDisplay.CompareNoCase(_T("")) == 0)
	{
		m_StrResultDisplay = _T("0");
	}
	CheckCalculation();
	m_StrResultDisplay = m_StrResultDisplay /*+ _T(" ") */ + _T("/")/* + _T(" ")*/;
	UpdateData(FALSE);
}


void CSolidCalculatorDlg::OnBnClickedBtClear()
{
	// TODO: Add your control notification handler code here
	m_bDotClicked = FALSE;
	m_StrResultDisplay = _T("0");
	UpdateData(FALSE);
}

void CSolidCalculatorDlg::CheckCalculation()
{
	m_StrResultDisplay.Trim();

	// Find the position of the '*' character
	int nOperatorIndex = -1, OperationType = 0;
	if (m_StrResultDisplay.Find(_T('+')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('+'));
		OperationType = 1;
	}
	else if (m_StrResultDisplay.Find(_T('-')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('-'));
		OperationType = 2;
	}
	else if (m_StrResultDisplay.Find(_T('*')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('*'));
		OperationType = 3;
	}
	else if (m_StrResultDisplay.Find(_T('/')) != -1) {
		nOperatorIndex = m_StrResultDisplay.Find(_T('/'));
		OperationType = 4;
	}
	//
	if (m_StrResultDisplay.Right(1) == _T("+") ||
		m_StrResultDisplay.Right(1) == _T("-") ||
		m_StrResultDisplay.Right(1) == _T("*") ||
		m_StrResultDisplay.Right(1) == _T("/"))
	{
		m_StrResultDisplay.Delete(m_StrResultDisplay.GetLength() - 1);
		return;
	}

	double dbResult = 0.0;

	if (nOperatorIndex != -1)
	{
		// Extract the numbers before and after the '*'
		CString strNumber1 = m_StrResultDisplay.Left(nOperatorIndex);
		CString strNumber2 = m_StrResultDisplay.Mid(nOperatorIndex + 1);

		strNumber1.Trim();
		strNumber2.Trim();

		// Convert the extracted strings to integers
		double dbnumber1 = _ttof(strNumber1);
		double dbnumber2 = _ttof(strNumber2);

		if (OperationType == 1)
		{
			dbResult = Addition(dbnumber1, dbnumber2);
		}
		else if (OperationType == 2)
		{
			dbResult = SubStract(dbnumber1, dbnumber2);
		}
		else if (OperationType == 3)
		{
			dbResult = Multiply(dbnumber1, dbnumber2);
		}
		else if (OperationType == 4)
		{
			dbResult = Division(dbnumber1, dbnumber2);
		}

		m_StrResultDisplay.Format(_T("%.4f"), dbResult);
		UpdateData(false);
	}
}

double CSolidCalculatorDlg::Addition(double dbVal1, double dbVal2)
{
	double dbResult = 0;

	typedef double (*LPADDITION)(double, double);
	LPADDITION pFunADD;
	pFunADD = (LPADDITION)GetProcAddress(hdll, "Addition");
	if (pFunADD != NULL)	//13032024
	{
		dbResult = pFunADD(dbVal1, dbVal2);
	}

	return dbResult;
}

double CSolidCalculatorDlg::SubStract(double dbVal1, double dbVal2)
{
	double dbResult = 0;

	typedef double (*LPADDITION)(double, double);
	LPADDITION pFunADD;
	pFunADD = (LPADDITION)GetProcAddress(hdll, "Subtraction");
	if (pFunADD != NULL)	//13032024
	{
		dbResult = pFunADD(dbVal1, dbVal2);
	}
	return dbResult;
}

double CSolidCalculatorDlg::Multiply(double dbVal1, double dbVal2)
{
	double dbResult = 0;

	typedef double (*LPADDITION)(double, double);
	LPADDITION pFunADD;
	pFunADD = (LPADDITION)GetProcAddress(hdll, "Multiply");
	if (pFunADD != NULL)	//13032024
	{
		dbResult = pFunADD(dbVal1, dbVal2);
	}

	return dbResult;
}
double CSolidCalculatorDlg::Division(double dbVal1, double dbVal2)
{
	double dbResult = 0.0;

	try
	{
		if (dbVal2 == 0) {
			throw std::exception("Division by zero exception");
		}

		typedef double (*LPADDITION)(double, double);
		LPADDITION pFunADD;
		pFunADD = (LPADDITION)GetProcAddress(hdll, "Divide");
		if (pFunADD != NULL)	//13032024
		{
			dbResult = pFunADD(dbVal1, dbVal2);
		}

		return dbResult;
	}
	catch (const std::exception& e)
	{
		AfxMessageBox(CA2T(e.what()));

		return 0.0;
	}
}

BOOL CSolidCalculatorDlg::PreTranslateMessage(MSG* pMsg)
{
	// Handle WM_KEYDOWN messages
	if (pMsg->message == WM_KEYDOWN)
	{
		// Get the virtual key code
		int nVirtKey = (int)pMsg->wParam;


		// Check for digit keys (0-9)
		if ((nVirtKey >= '0' && nVirtKey <= '9') || (nVirtKey >= VK_NUMPAD0 && nVirtKey <= VK_NUMPAD9))
		{
			// Handle digit input
			int nDigit = (nVirtKey >= '0' && nVirtKey <= '9') ? (nVirtKey - '0') : (nVirtKey - VK_NUMPAD0);
			HandleDigitInput(nDigit);
			return TRUE;
		}

		// Check for arithmetic operator keys (+, -, *, /, =)
		switch (nVirtKey)
		{
		case VK_DECIMAL:
			OnBnClickedBtDot();
			break;
		case VK_ADD:
			OnBnClickedBtAdd();
			break;
		case VK_SUBTRACT:
			OnBnClickedBtSubstract();
			break;
		case VK_MULTIPLY:
			OnBnClickedBtMultiply();
			break;
		case VK_DIVIDE:
			OnBnClickedBtDivide();
			break;
		case VK_RETURN:
			OnBnClickedBtResult();
			break;
		case VK_BACK:
			OnBnClickedBackspaceButton();
			break;
		}
		return TRUE;
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}

void CSolidCalculatorDlg::OnBnClickedBackspaceButton()
{
	// TODO: Add your control notification handler code here
	int length = m_StrResultDisplay.GetLength();

	if (length > 0)
	{
		// Remove the last character
		m_StrResultDisplay = m_StrResultDisplay.Left(length - 1);
		UpdateData(FALSE);
	}
}
void CSolidCalculatorDlg::HandleDigitInput(int iDigit)
{
	if (iDigit == 0)
	{
		OnBnClickedBt0();
	}
	if (iDigit == 1)
	{
		OnBnClickedBt1();
	}
	if (iDigit == 2)
	{
		OnBnClickedBt2();
	}
	if (iDigit == 3)
	{
		OnBnClickedBt3();
	}
	if (iDigit == 4)
	{
		OnBnClickedBt4();
	}
	if (iDigit == 5)
	{
		OnBnClickedBt5();
	}
	if (iDigit == 6)
	{
		OnBnClickedBt6();
	}
	if (iDigit == 7)
	{
		OnBnClickedBt7();
	}
	if (iDigit == 8)
	{
		OnBnClickedBt8();
	}
	if (iDigit == 9)
	{
		OnBnClickedBt9();
	}

}

void CSolidCalculatorDlg::ReadRegistry()
{
	CRegKey regKey;

	// Specify the registry key you want to read
	CString keyPath = _T("SOFTWARE\\CalculatorApplication");

	// Open the registry key for reading under HKEY_CURRENT_USER
	LONG result = regKey.Open(HKEY_CURRENT_USER, keyPath, KEY_READ);

	if (result == ERROR_SUCCESS)
	{
		// Buffer to store the retrieved value
		DWORD value = 0;
		ULONG valueSize = sizeof(DWORD);

		// Specify the value name you want to read
		CString valueName = _T("UseCButton");

		// Read the DWORD registry value
		result = regKey.QueryDWORDValue(valueName, value);

		if (result == ERROR_SUCCESS)
		{
			m_dwRegValue = value;
		}
		else
		{
			AfxMessageBox(_T("Error reading DWORD registry value."));
		}

		// Close the registry key
		regKey.Close();
	}
	else
	{
		result = regKey.Create(HKEY_CURRENT_USER, keyPath);

		if (result == ERROR_SUCCESS)
		{
			// Specify the value name you want to write
			CString valueName = _T("UseCButton");
			
			// Write the DWORD registry value
			result = regKey.SetDWORDValue(valueName, m_dwRegValue);

			if (result != ERROR_SUCCESS)
			{
				AfxMessageBox(_T("Error writing DWORD registry value."));
			}

			// Close the registry key
			regKey.Close();
		}
		else
		{
			AfxMessageBox(_T("Error creating/opening registry key."));
		}

	}
}
