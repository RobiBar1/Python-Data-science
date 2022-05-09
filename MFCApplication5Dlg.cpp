
// MFCApplication5Dlg.cpp : implementation file


#include "pch.h"
#include"framework.h"
#include "MFCApplication5.h"
#include "MFCApplication5Dlg.h"
#include "afxdialogex.h"
#include"straitLine.h"
#include"Square.h"
#include"rectangle.h"
#include <afxrich.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
myPoint *pointArr[8];
Line *lineArr[7];
straitLine* straitsArr[3];
Square* squareArr[2];
rectangle*  RectangleArr[2];
void makePointArr() {
	for (int i = 0; i <= 8; i++)
	{
		pointArr[i] = NULL;
	}
}
void makeLineArr() {
	for (int i = 0; i <= 7; i++)
	{
		lineArr[i] = NULL;
	}
}
void makestraitLineArr() {
	for (int i = 0; i <= 3; i++)
	{
		straitsArr[i] = NULL;
	}
}
void makeSquareArr() {
	for (int i = 0; i <= 2; i++)
	{
		squareArr[i] = NULL;
	}
}
void makeRectangle() {
	for (int i = 0; i <= 2; i++)
	{
		RectangleArr[i] = NULL;
	}
}
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
// CMFCApplication5Dlg dialog
CMFCApplication5Dlg::CMFCApplication5Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION5_DIALOG, pParent)
	, x(600)
	, y(300)
	, FirstPointX(0)
	, firstPointY(0)
	, secondPointX(0)
	, secondPointY(0)
	, frstLineY(0)
	, firstLineX(0)
	, firstPointIndex(0)
	, secondPointIndex1(0)
	, thirhPointX(0)
	, a_for_roots(0)
	, forthPointX(0)
	, forthPointY(0)
	, fifthPointX(0)
	, fifthPointY(0)
	, sixPointX(0)
	, sixPointY(0)
	, sevenPointX(0)
	, sevenpointY(0)
	, eyithPointX(0)
	, eiythPointY(0)
	, firstPointIndex2(0)
	, secondPointIndex2(0)
	, indexpointleft(0)
	, indexPointRight(0)
	, firstPointIndex4(0)
	, secondPointIndex4(0)
	, firstIndexPoint5(0)
	, secondIndexPoint5(0)
	, firstIndexPoint6(0)
	, secondIndexPoint6(0)
	, firstIndexPoint7(0)
	, secondIndexPoint7(0)
	, firstIndexPoint8(0)
	, secondIndexPoint8(0)
	, ponum1(0)
	, dic1(0)
	, dic2(0)
	, poiNum(0)
	, dic3(0)
	, poNum3(0)
	, dic4(0)
	, poNum4(0)
	, sPoint1(0)
	, sPoint2(0)
	, sPoint3(0)
	, revmoepoi(0)
	, removeline(1)
	, remstraitline(1)
	, remsqueres(1)
	, wichporectangle1(0)
	, wichporectangle2(0)
	, wichporectangle3(0)
	, recremovenumber(1)
	, b_for_roots(0)
	, c_for_roots(0)
	, x1_answer(0)
	, x2_answer(0)
	, m_x(0)
	, m_y(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}
void CMFCApplication5Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT5, FirstPointX);
	DDX_Text(pDX, IDC_EDIT3, firstPointY);
	DDX_Text(pDX, IDC_EDIT7, secondPointX);
	DDX_Text(pDX, IDC_EDIT6, secondPointY);
	DDX_Text(pDX, IDC_EDIT8, frstLineY);
	DDX_Text(pDX, IDC_EDIT9, firstLineX);
	DDX_Text(pDX, IDC_EDIT10, firstPointIndex);
	DDX_Text(pDX, IDC_EDIT11, secondPointIndex1);
	DDX_Text(pDX, IDC_EDIT9, thirhPointX);
	DDX_Text(pDX, IDC_EDIT12, a_for_roots);
	DDX_Text(pDX, IDC_EDIT16, forthPointX);
	DDX_Text(pDX, IDC_EDIT15, forthPointY);
	DDX_Text(pDX, IDC_EDIT24, fifthPointX);
	DDX_Text(pDX, IDC_EDIT25, fifthPointY);
	DDX_Text(pDX, IDC_EDIT27, sixPointX);
	DDX_Text(pDX, IDC_EDIT26, sixPointY);
	DDX_Text(pDX, IDC_EDIT29, sevenPointX);
	DDX_Text(pDX, IDC_EDIT28, sevenpointY);
	DDX_Text(pDX, IDC_EDIT31, eyithPointX);
	DDX_Text(pDX, IDC_EDIT30, eiythPointY);
	DDX_Text(pDX, IDC_EDIT36, firstPointIndex2);
	DDX_Text(pDX, IDC_EDIT35, secondPointIndex2);
	DDX_Text(pDX, IDC_EDIT38, indexpointleft);
	DDX_Text(pDX, IDC_EDIT37, indexPointRight);
	DDX_Text(pDX, IDC_EDIT40, firstPointIndex4);
	DDX_Text(pDX, IDC_EDIT39, secondPointIndex4);
	DDX_Text(pDX, IDC_EDIT42, firstIndexPoint5);
	DDX_Text(pDX, IDC_EDIT41, secondIndexPoint5);
	DDX_Text(pDX, IDC_EDIT44, firstIndexPoint6);
	DDX_Text(pDX, IDC_EDIT43, secondIndexPoint6);
	DDX_Text(pDX, IDC_EDIT46, firstIndexPoint7);
	DDX_Text(pDX, IDC_EDIT45, secondIndexPoint7);
	DDX_Text(pDX, IDC_EDIT48, firstIndexPoint8);
	DDX_Text(pDX, IDC_EDIT47, secondIndexPoint8);
	DDX_Text(pDX, IDC_EDIT50, ponum1);
	DDX_Text(pDX, IDC_EDIT49, dic1);
	DDX_Text(pDX, IDC_EDIT51, dic2);
	DDV_MinMaxInt(pDX, dic2, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT52, poiNum);
	DDV_MinMaxInt(pDX, poiNum, 0, 8);
	DDX_Text(pDX, IDC_EDIT53, dic3);
	DDV_MinMaxInt(pDX, dic3, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT54, poNum3);
	DDV_MinMaxInt(pDX, poNum3, 0, 8);
	DDX_Text(pDX, IDC_EDIT55, dic4);
	DDV_MinMaxInt(pDX, dic4, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT56, poNum4);
	DDV_MinMaxInt(pDX, poNum4, 0, 8);
	DDX_Text(pDX, IDC_EDIT57, sPoint1);
	DDV_MinMaxInt(pDX, sPoint1, 0, 8);
	DDX_Text(pDX, IDC_EDIT58, sPoint2);
	DDV_MinMaxInt(pDX, sPoint2, 0, 8);
	DDX_Text(pDX, IDC_EDIT59, sPoint3);
	DDV_MinMaxInt(pDX, sPoint3, 0, 8);
	DDX_Text(pDX, IDC_EDIT60, revmoepoi);
	DDV_MinMaxInt(pDX, revmoepoi, 0, 8);
	DDX_Text(pDX, IDC_EDIT63, removeline);
	DDV_MinMaxInt(pDX, removeline, 1, 8);
	DDX_Text(pDX, IDC_EDIT61, remstraitline);
	DDV_MinMaxInt(pDX, remstraitline, 1, 4);
	DDX_Text(pDX, IDC_EDIT62, remsqueres);
	DDV_MinMaxInt(pDX, remsqueres, 1, 3);
	DDX_Text(pDX, IDC_EDIT64, wichporectangle1);
	DDV_MinMaxInt(pDX, wichporectangle1, 0, 8);
	DDX_Text(pDX, IDC_EDIT65, wichporectangle2);
	DDV_MinMaxInt(pDX, wichporectangle2, 0, 8);
	DDX_Text(pDX, IDC_EDIT66, wichporectangle3);
	DDV_MinMaxInt(pDX, wichporectangle3, 0, 8);
	DDX_Text(pDX, IDC_EDIT67, recremovenumber);
	DDV_MinMaxInt(pDX, recremovenumber, 1, 3);
	DDX_Text(pDX, IDC_EDIT13, b_for_roots);
	DDX_Text(pDX, IDC_EDIT14, c_for_roots);
	DDX_Text(pDX, IDC_EDIT70, x1_answer);
	DDX_Text(pDX, IDC_EDIT71, x2_answer);
	DDX_Text(pDX, IDC_EDIT_XCordi, m_x);
	DDX_Text(pDX, IDC_EDIT_YCordi, m_y);
}
BEGIN_MESSAGE_MAP(CMFCApplication5Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication5Dlg::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplication5Dlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CMFCApplication5Dlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CMFCApplication5Dlg::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication5Dlg::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT5, &CMFCApplication5Dlg::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT7, &CMFCApplication5Dlg::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT6, &CMFCApplication5Dlg::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT9, &CMFCApplication5Dlg::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT8, &CMFCApplication5Dlg::OnEnChangeEdit8)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication5Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication5Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication5Dlg::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_EDIT10, &CMFCApplication5Dlg::OnEnChangeEdit10)
	ON_EN_CHANGE(IDC_EDIT11, &CMFCApplication5Dlg::OnEnChangeEdit11)
	ON_EN_CHANGE(IDC_EDIT12, &CMFCApplication5Dlg::OnEnChangeEdit12)
	ON_EN_CHANGE(IDC_EDIT16, &CMFCApplication5Dlg::OnEnChangeEdit16)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication5Dlg::OnBnClickedButton7)
	ON_EN_CHANGE(IDC_EDIT15, &CMFCApplication5Dlg::OnEnChangeEdit15)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication5Dlg::OnBnClickedButton8)
	ON_EN_CHANGE(IDC_EDIT24, &CMFCApplication5Dlg::OnEnChangeEdit24)
	ON_EN_CHANGE(IDC_EDIT25, &CMFCApplication5Dlg::OnEnChangeEdit25)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication5Dlg::OnBnClickedButton9)
	ON_EN_CHANGE(IDC_EDIT27, &CMFCApplication5Dlg::OnEnChangeEdit27)
	ON_EN_CHANGE(IDC_EDIT26, &CMFCApplication5Dlg::OnEnChangeEdit26)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication5Dlg::OnBnClickedButton10)
	ON_EN_CHANGE(IDC_EDIT29, &CMFCApplication5Dlg::OnEnChangeEdit29)
	ON_EN_CHANGE(IDC_EDIT28, &CMFCApplication5Dlg::OnEnChangeEdit28)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication5Dlg::OnBnClickedButton11)
	ON_EN_CHANGE(IDC_EDIT31, &CMFCApplication5Dlg::OnEnChangeEdit31)
	ON_EN_CHANGE(IDC_EDIT30, &CMFCApplication5Dlg::OnEnChangeEdit30)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication5Dlg::OnBnClickedButton12)
	ON_EN_CHANGE(IDC_EDIT36, &CMFCApplication5Dlg::OnEnChangeEdit36)
	ON_EN_CHANGE(IDC_EDIT35, &CMFCApplication5Dlg::OnEnChangeEdit35)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication5Dlg::OnBnClickedButton13)
	ON_EN_CHANGE(IDC_EDIT38, &CMFCApplication5Dlg::OnEnChangeEdit38)
	ON_EN_CHANGE(IDC_EDIT37, &CMFCApplication5Dlg::OnEnChangeEdit37)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication5Dlg::OnBnClickedButton14)
	ON_EN_CHANGE(IDC_EDIT40, &CMFCApplication5Dlg::OnEnChangeEdit40)
	ON_EN_CHANGE(IDC_EDIT39, &CMFCApplication5Dlg::OnEnChangeEdit39)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication5Dlg::OnBnClickedButton15)
	ON_EN_CHANGE(IDC_EDIT42, &CMFCApplication5Dlg::OnEnChangeEdit42)
	ON_EN_CHANGE(IDC_EDIT41, &CMFCApplication5Dlg::OnEnChangeEdit41)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication5Dlg::OnBnClickedButton16)
	ON_EN_CHANGE(IDC_EDIT44, &CMFCApplication5Dlg::OnEnChangeEdit44)
	ON_EN_CHANGE(IDC_EDIT43, &CMFCApplication5Dlg::OnEnChangeEdit43)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication5Dlg::OnBnClickedButton17)
	ON_EN_CHANGE(IDC_EDIT46, &CMFCApplication5Dlg::OnEnChangeEdit46)
	ON_EN_CHANGE(IDC_EDIT45, &CMFCApplication5Dlg::OnEnChangeEdit45)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication5Dlg::OnBnClickedButton18)
	ON_EN_CHANGE(IDC_EDIT48, &CMFCApplication5Dlg::OnEnChangeEdit48)
	ON_EN_CHANGE(IDC_EDIT47, &CMFCApplication5Dlg::OnEnChangeEdit47)
	ON_EN_CHANGE(IDC_EDIT50, &CMFCApplication5Dlg::OnEnChangeEdit50)
	ON_EN_CHANGE(IDC_EDIT49, &CMFCApplication5Dlg::OnEnChangeEdit49)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplication5Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFCApplication5Dlg::OnBnClickedButton20)
	ON_EN_CHANGE(IDC_EDIT52, &CMFCApplication5Dlg::OnEnChangeEdit52)
	ON_EN_CHANGE(IDC_EDIT51, &CMFCApplication5Dlg::OnEnChangeEdit51)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFCApplication5Dlg::OnBnClickedButton21)
	ON_EN_CHANGE(IDC_EDIT54, &CMFCApplication5Dlg::OnEnChangeEdit54)
	ON_EN_CHANGE(IDC_EDIT53, &CMFCApplication5Dlg::OnEnChangeEdit53)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFCApplication5Dlg::OnBnClickedButton22)
	ON_EN_CHANGE(IDC_EDIT56, &CMFCApplication5Dlg::OnEnChangeEdit56)
	ON_EN_CHANGE(IDC_EDIT55, &CMFCApplication5Dlg::OnEnChangeEdit55)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFCApplication5Dlg::OnBnClickedButton23)
	ON_EN_CHANGE(IDC_EDIT57, &CMFCApplication5Dlg::OnEnChangeEdit57)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFCApplication5Dlg::OnBnClickedButton24)
	ON_EN_CHANGE(IDC_EDIT58, &CMFCApplication5Dlg::OnEnChangeEdit58)
	ON_BN_CLICKED(IDC_BUTTON25, &CMFCApplication5Dlg::OnBnClickedButton25)
	ON_EN_CHANGE(IDC_EDIT59, &CMFCApplication5Dlg::OnEnChangeEdit59)
	ON_EN_CHANGE(IDC_EDIT60, &CMFCApplication5Dlg::OnEnChangeEdit60)
	ON_BN_CLICKED(IDC_BUTTON27, &CMFCApplication5Dlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON26, &CMFCApplication5Dlg::OnBnClickedButton26)
	ON_EN_CHANGE(IDC_EDIT63, &CMFCApplication5Dlg::OnEnChangeEdit63)
	ON_BN_CLICKED(IDC_BUTTON28, &CMFCApplication5Dlg::OnBnClickedButton28)
	ON_EN_CHANGE(IDC_EDIT61, &CMFCApplication5Dlg::OnEnChangeEdit61)
	ON_BN_CLICKED(IDC_BUTTON29, &CMFCApplication5Dlg::OnBnClickedButton29)
	ON_EN_CHANGE(IDC_EDIT62, &CMFCApplication5Dlg::OnEnChangeEdit62)
	ON_BN_CLICKED(IDC_BUTTON30, &CMFCApplication5Dlg::OnBnClickedButton30)
	ON_EN_CHANGE(IDC_EDIT64, &CMFCApplication5Dlg::OnEnChangeEdit64)
	ON_BN_CLICKED(IDC_BUTTON31, &CMFCApplication5Dlg::OnBnClickedButton31)
	ON_EN_CHANGE(IDC_EDIT65, &CMFCApplication5Dlg::OnEnChangeEdit65)
	ON_BN_CLICKED(IDC_BUTTON32, &CMFCApplication5Dlg::OnBnClickedButton32)
	ON_EN_CHANGE(IDC_EDIT66, &CMFCApplication5Dlg::OnEnChangeEdit66)
	ON_BN_CLICKED(IDC_BUTTON33, &CMFCApplication5Dlg::OnBnClickedButton33)
	ON_EN_CHANGE(IDC_EDIT67, &CMFCApplication5Dlg::OnEnChangeEdit67)
	ON_EN_CHANGE(IDC_EDIT13, &CMFCApplication5Dlg::OnEnChangeEdit13)
	ON_EN_CHANGE(IDC_EDIT14, &CMFCApplication5Dlg::OnEnChangeEdit14)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication5Dlg::OnBnClickedButton6)
	ON_EN_CHANGE(IDC_EDIT71, &CMFCApplication5Dlg::OnEnChangeEdit71)
	ON_EN_CHANGE(IDC_EDIT70, &CMFCApplication5Dlg::OnEnChangeEdit70)
	ON_BN_CLICKED(IDC_BUTTON34_Load, &CMFCApplication5Dlg::OnBnClickedButton34Load)
END_MESSAGE_MAP()
// CMFCApplication5Dlg message handlers
BOOL CMFCApplication5Dlg::OnInitDialog()
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

	return TRUE;  // return TRUE  unless you set the focus to a control
}
void CMFCApplication5Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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
void CMFCApplication5Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting
		SendMessage(WM_ICONERASEBKGND,
			reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);
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
		if (m_DocumentType != DocumentType::None) {
			CPaintDC dc(this);
			//if (m_DocumentType == DocumentType::Text) {
			//	dc.MoveTo(pointArr[0][0].getX(), pointArr[0][0].getY());
			//	//need to complete it.
			//}
		}
		 // device context for painting
		CDialog::OnPaint();	
	}

}
// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication5Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
//cordinate
void CMFCApplication5Dlg::OnBnClickedButton1()//"Draw Cordinate":make the cordiante x,y+reset all arr's to Null;
{
	makePointArr();
	makeLineArr();
	makestraitLineArr();
	makeSquareArr();
	makeRectangle();
	if(pointArr[0]==NULL){
	pointArr[0] = new myPoint;
		pointArr[0][0].setX(x);
		pointArr[0][0].setY(y);
	}
		for (int i = 1; i < 400; i++)
		{
			GetDC()->SetPixel(pointArr[0][0].getX() + i, pointArr[0][0].getY(), RGB(1, 2, 3));
			GetDC()->SetPixel(pointArr[0][0].getX() - i, pointArr[0][0].getY(), RGB(1, 2, 3));
			if (i <=320) {
				GetDC()->SetPixel(pointArr[0][0].getX(), pointArr[0][0].getY() + i, RGB(1, 2, 3));
				GetDC()->SetPixel(pointArr[0][0].getX(), pointArr[0][0].getY() - i, RGB(1, 2, 3));
			}
		}
		
}
void CMFCApplication5Dlg::OnEnChangeEdit1()//hold x cordinate
{
	if (pointArr[0] == NULL) {
		pointArr[0] = new myPoint;
	}
	UpdateData(TRUE);
	pointArr[0][0].setX(x);
	UpdateData(FALSE);
}
void CMFCApplication5Dlg::OnEnChangeEdit2()//hold y cordinate
{
	if (pointArr[0] == NULL) {
		pointArr[0] = new myPoint;
	}
	UpdateData(TRUE);
	pointArr[0][0].setY(y);
	UpdateData(FALSE);
}
//end cordinate
//start of points:
void CMFCApplication5Dlg::OnBnClickedButton2()//make first point.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again"));
	}
	else if (pointArr[1] == NULL) {
		pointArr[1] = new myPoint;
		pointArr[1][0].setX(pointArr[0][0].getX() + FirstPointX);
		pointArr[1][0].setY(pointArr[0][0].getY() - firstPointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[1][0].getX(), pointArr[1][0].getY(), pointArr[1][0].getX() + 8, pointArr[1][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit5()//first point x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[1] == NULL) {
		pointArr[1] = new myPoint;
	}
	if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[1][0].setX(pointArr[0][0].getX() + FirstPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit3()//first point y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[1] == NULL) {
		pointArr[1] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[1][0].setY(pointArr[0][0].getY() - firstPointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton3()//make second point.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[2] == NULL) {
		pointArr[2] = new myPoint;
		pointArr[2][0].setX(pointArr[0][0].getX() + secondPointX);
		pointArr[2][0].setY(pointArr[0][0].getY() - secondPointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[2][0].getX(), pointArr[2][0].getY(), pointArr[2][0].getX() + 8, pointArr[2][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit7()//second point x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[2] == NULL) {
		pointArr[2] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[2][0].setX(pointArr[0][0].getX() + secondPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit6()//second point y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[2] == NULL) {
		pointArr[2] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[2][0].setY(pointArr[0][0].getY() - secondPointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton5()//make third point.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[3] == NULL) {
		pointArr[3] = new myPoint;
		pointArr[3][0].setX(pointArr[0][0].getX() + thirhPointX);
		pointArr[3][0].setY(pointArr[0][0].getY() - frstLineY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[3][0].getX(), pointArr[3][0].getY(), pointArr[3][0].getX() + 8, pointArr[3][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit9()//third point x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[3] == NULL) {
		pointArr[3] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[3][0].setX(pointArr[0][0].getX() + thirhPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit8()//third point y
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[3] == NULL) {
		pointArr[3] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[3][0].setY(pointArr[0][0].getY() - frstLineY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton7()//make point 4
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[4] == NULL) {
		pointArr[4] = new myPoint;
		pointArr[4][0].setX(pointArr[0][0].getX() + forthPointX);
		pointArr[4][0].setY(pointArr[0][0].getY() - forthPointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[4][0].getX(), pointArr[4][0].getY(), pointArr[4][0].getX() + 8, pointArr[4][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit16()//forth point x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[4] == NULL) {
		pointArr[4] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[4][0].setX(pointArr[0][0].getX() + forthPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit15()//forth point y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[4] == NULL) {
		pointArr[4] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[4][0].setY(pointArr[0][0].getY() - forthPointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton8()//make point 5.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[5] == NULL) {
		pointArr[5] = new myPoint;
		pointArr[5][0].setX(pointArr[0][0].getX() + fifthPointX);
		pointArr[5][0].setY(pointArr[0][0].getY() - fifthPointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[5][0].getX(), pointArr[5][0].getY(), pointArr[5][0].getX() + 8, pointArr[5][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit24()//point 5 x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[5] == NULL) {
		pointArr[5] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[5][0].setX(pointArr[0][0].getX() + fifthPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit25()//point 5 y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[5] == NULL) {
		pointArr[5] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[5][0].setY(pointArr[0][0].getY() - fifthPointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton9()//make point 6.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[6] == NULL) {
		pointArr[6] = new myPoint;
		pointArr[6][0].setX(pointArr[0][0].getX() + sixPointX);
		pointArr[6][0].setY(pointArr[0][0].getY() - sixPointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[6][0].getX(), pointArr[6][0].getY(), pointArr[6][0].getX() + 8, pointArr[6][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit27()//point 6 x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[6] == NULL) {
		pointArr[6] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[6][0].setX(pointArr[0][0].getX() + sixPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit26()//point 6 y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[6] == NULL) {
		pointArr[6] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[6][0].setY(pointArr[0][0].getY() - sixPointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton10()//make point 7.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[7] == NULL) {
		pointArr[7] = new myPoint;
		pointArr[7][0].setX(pointArr[0][0].getX() + sevenPointX);
		pointArr[7][0].setY(pointArr[0][0].getY() - sevenpointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[7][0].getX(), pointArr[7][0].getY(), pointArr[7][0].getX() + 8, pointArr[7][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit29()//point 7 x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[7] == NULL) {
		pointArr[7] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[7][0].setX(pointArr[0][0].getX() + sevenPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit28()//point 7 y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[7] == NULL) {
		pointArr[7] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[7][0].setY(pointArr[0][0].getY() - sevenpointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton11()//make point 8.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[8] == NULL) {
		pointArr[8] = new myPoint;
		pointArr[8][0].setX(pointArr[0][0].getX() + eyithPointX);
		pointArr[8][0].setY(pointArr[0][0].getY() - eiythPointY);
	}
	if (pointArr[0] != NULL) {
		CClientDC dc(this);
		dc.Ellipse(pointArr[8][0].getX(), pointArr[8][0].getY(), pointArr[8][0].getX() + 8, pointArr[8][0].getY() + 8);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit31()//point 8 x.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[8] == NULL) {
		pointArr[8] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[8][0].setX(pointArr[0][0].getX() + eyithPointX);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit30()//point 8 y.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
	}
	else if (pointArr[8] == NULL) {
		pointArr[8] = new myPoint;
	}if (pointArr[0] != NULL) {
		UpdateData(TRUE);
		pointArr[8][0].setY(pointArr[0][0].getY() - eiythPointY);
		UpdateData(FALSE);
	}
}
void CMFCApplication5Dlg::OnBnClickedButton26()//delete points.
{
	if (revmoepoi != 0) {
		int i = revmoepoi - 1;
	}
	else { int i = revmoepoi; }
	if (pointArr[revmoepoi] != NULL) {
		delete pointArr[revmoepoi];
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit60()//wich point to remove.
{
	UpdateData(TRUE);
	revmoepoi = revmoepoi;
	UpdateData(FALSE);
}
//end of points.

//start of lines:
void CMFCApplication5Dlg::OnBnClickedButton4()//make first line.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[0] == NULL) {
		lineArr[0] = new Line;
	}
	UpdateData(TRUE);
	firstPointIndex = firstPointIndex;
	UpdateData(FALSE);
	if (firstPointIndex == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstPointIndex == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstPointIndex == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstPointIndex == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstPointIndex == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstPointIndex == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstPointIndex == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstPointIndex == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstPointIndex == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondPointIndex1 = secondPointIndex1;
	UpdateData(FALSE);
	if (secondPointIndex1 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondPointIndex1 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondPointIndex1 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondPointIndex1 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondPointIndex1 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondPointIndex1 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondPointIndex1 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondPointIndex1 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondPointIndex1 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[0][0].getFirstPoint(), right = lineArr[0][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed,max,min, incline;
	try {
		incline = (left.getY()+0.0 - right.getY()+0.0) / (left.getX()+0.0 - right.getX()+0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}
	
	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 *ahed;
		}
		else {
			xahed = i = 0.5 *ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(),lefty = left.getY();leftx+i <= right.getX()||lefty+j<=right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(),i=1,j=1, lefty = left.getY(); i+leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i+= 0.5;
			
		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit10()//first point of the first line.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[0] == NULL) {
		lineArr[0] = new Line;
	}
	UpdateData(TRUE);
	firstPointIndex = firstPointIndex;
	UpdateData(FALSE);
	if (firstPointIndex == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstPointIndex == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstPointIndex == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstPointIndex == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstPointIndex == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstPointIndex == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstPointIndex == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstPointIndex == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstPointIndex == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit11()// second point of the first line.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[0] == NULL) {
		lineArr[0] = new Line;
	}
	UpdateData(TRUE);
	secondPointIndex1 = secondPointIndex1;
	UpdateData(FALSE);
	if (secondPointIndex1 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondPointIndex1 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondPointIndex1 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondPointIndex1 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondPointIndex1 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondPointIndex1 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondPointIndex1 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondPointIndex1 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondPointIndex1 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[0][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton12() //make line 2
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[1] == NULL) {
		lineArr[1] = new Line;
	}
	UpdateData(TRUE);
	firstPointIndex2 = firstPointIndex2;
	UpdateData(FALSE);
	if (firstPointIndex2 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstPointIndex2 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstPointIndex2 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstPointIndex2 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstPointIndex2 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstPointIndex2 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstPointIndex2 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstPointIndex2 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstPointIndex2 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondPointIndex2 = secondPointIndex2;
	UpdateData(FALSE);
	if (firstPointIndex2 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondPointIndex2 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondPointIndex2 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondPointIndex2 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondPointIndex2 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondPointIndex2 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondPointIndex2 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondPointIndex2 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondPointIndex2 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[1][0].getFirstPoint(), right = lineArr[1][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i+= 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit36()//make first point of line 2
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[1] == NULL) {
		lineArr[1] = new Line;
	}
	UpdateData(TRUE);
	firstPointIndex2 = firstPointIndex2;
	UpdateData(FALSE);
	if (firstPointIndex2 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstPointIndex2 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstPointIndex2 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstPointIndex2 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstPointIndex2 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstPointIndex2 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstPointIndex2 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstPointIndex2 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstPointIndex2 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit35()//make second point of line 2
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[1] == NULL) {
		lineArr[1] = new Line;
	}
	UpdateData(TRUE);
	secondPointIndex2 = secondPointIndex2;
	UpdateData(FALSE);
	if (secondPointIndex2 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondPointIndex2 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondPointIndex2 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondPointIndex2 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondPointIndex2 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondPointIndex2 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondPointIndex2 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondPointIndex2 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondPointIndex2 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[1][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton13()//make line 3.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[2] == NULL) {
		lineArr[2] = new Line;
	}
	UpdateData(TRUE);
	indexpointleft = indexpointleft;
	UpdateData(FALSE);
	if (indexpointleft == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (indexpointleft == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (indexpointleft == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (indexpointleft == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (indexpointleft == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (indexpointleft == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (indexpointleft == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (indexpointleft == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (indexpointleft == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	indexPointRight = indexPointRight;
	UpdateData(FALSE);
	if (indexPointRight == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (indexPointRight == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (indexPointRight == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (indexPointRight == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (indexPointRight == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (indexPointRight == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (indexPointRight == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (indexPointRight == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (indexPointRight == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[2][0].getFirstPoint(), right = lineArr[2][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit38()//make first point of line 3.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[2] == NULL) {
		lineArr[2] = new Line;
	}
	UpdateData(TRUE);
	indexpointleft = indexpointleft;
	UpdateData(FALSE);
	if (indexpointleft == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (indexpointleft == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (indexpointleft == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (indexpointleft == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (indexpointleft == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (indexpointleft == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (indexpointleft == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (indexpointleft == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (indexpointleft == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}

}
void CMFCApplication5Dlg::OnEnChangeEdit37()//make second point of line 3.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[2] == NULL) {
		lineArr[2] = new Line;
	}
	UpdateData(TRUE);
	indexPointRight = indexPointRight;
	UpdateData(FALSE);
	if (indexPointRight == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (indexPointRight == 1) {
		if (pointArr[1] == NULL) {
				exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (indexPointRight == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (indexPointRight == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (indexPointRight == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (indexPointRight == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (indexPointRight == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (indexPointRight == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (indexPointRight == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[2][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton14()//make line 4
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[3] == NULL) {
		lineArr[3] = new Line;
	}
	UpdateData(TRUE);
	firstPointIndex4 = firstPointIndex4;
	UpdateData(FALSE);
	if (firstPointIndex4 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstPointIndex4 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstPointIndex4 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstPointIndex4 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstPointIndex4 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstPointIndex4 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstPointIndex4 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstPointIndex4 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstPointIndex4 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondPointIndex4 = secondPointIndex4;
	UpdateData(FALSE);
	if (secondPointIndex4 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondPointIndex4 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondPointIndex4 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondPointIndex4 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondPointIndex4 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondPointIndex4 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondPointIndex4 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondPointIndex4 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondPointIndex4 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[3][0].getFirstPoint(), right = lineArr[3][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit40()//first point line 4.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[3] == NULL) {
		lineArr[3] = new Line;
	}
	UpdateData(TRUE);
	firstPointIndex4 = firstPointIndex4;
	UpdateData(FALSE);
	if (firstPointIndex4 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstPointIndex4 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstPointIndex4 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstPointIndex4 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstPointIndex4 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstPointIndex4 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstPointIndex4 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstPointIndex4 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstPointIndex4 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}

}
void CMFCApplication5Dlg::OnEnChangeEdit39()//second point line 4.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[3] == NULL) {
		lineArr[3] = new Line;
	}
	UpdateData(TRUE);
	secondPointIndex4 = secondPointIndex4;
	UpdateData(FALSE);
	if (secondPointIndex4 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondPointIndex4 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondPointIndex4 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondPointIndex4 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondPointIndex4 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondPointIndex4 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondPointIndex4 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondPointIndex4 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondPointIndex4 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[3][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton15()//make line 5.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[4] == NULL) {
		lineArr[4] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint5 = firstIndexPoint5;
	UpdateData(FALSE);
	if (firstIndexPoint5 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint5 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint5 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint5 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint5 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint5 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint5 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint5 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint5 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondIndexPoint5 = secondIndexPoint5;
	UpdateData(FALSE);
	if (secondIndexPoint5 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint5 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint5 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint5 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint5 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint5 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint5 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint5 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint5 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[4][0].getFirstPoint(), right = lineArr[4][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit42()//make first point of line 5.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[4] == NULL) {
		lineArr[4] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint5 = firstIndexPoint5;
	UpdateData(FALSE);
	if (firstIndexPoint5 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint5 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint5 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint5 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint5 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint5 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint5 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint5 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint5 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit41()//make second point of line 5.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[4] == NULL) {
		lineArr[4] = new Line;
	}
	UpdateData(TRUE);
	secondIndexPoint5 = secondIndexPoint5;
	UpdateData(FALSE);
	if (secondIndexPoint5 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint5 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint5 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint5 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint5 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint5 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint5 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint5 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint5 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[4][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton16()//make line 6.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[5] == NULL) {
		lineArr[5] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint6 = firstIndexPoint6;
	UpdateData(FALSE);
	if (firstIndexPoint6 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint6 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint6 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint6 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint6 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint6 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint6 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint6 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint6 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondIndexPoint6 = secondIndexPoint6;
	UpdateData(FALSE);
	if (secondIndexPoint6 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint6 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint6 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint6 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint6 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint6 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint6 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint6 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint6 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[5][0].getFirstPoint(), right = lineArr[5][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit44()//first point of line 6.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[5] == NULL) {
		lineArr[5] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint6 = firstIndexPoint6;
	UpdateData(FALSE);
	if (firstIndexPoint6 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint6 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint6 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint6 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint6 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint6 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint6 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint6 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint6 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit43()//second point of line 6.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[5] == NULL) {
		lineArr[5] = new Line;
	}
	UpdateData(TRUE);
	secondIndexPoint6 = secondIndexPoint6;
	UpdateData(FALSE);
	if (secondIndexPoint6 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint6 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint6 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint6 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint6 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint6 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint6 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint6 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint6 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[5][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton17()//make line 7.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[6] == NULL) {
		lineArr[6] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint7 = firstIndexPoint7;
	UpdateData(FALSE);
	if (firstIndexPoint7 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint7 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint7 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint7 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint7 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint7 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint7 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint7 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint7 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondIndexPoint7 = secondIndexPoint7;
	UpdateData(FALSE);
	if (secondIndexPoint7 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint7 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint7 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint7 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint7 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint7 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint7 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint7 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint7 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[6][0].getFirstPoint(), right = lineArr[6][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit46()//first point of line 7.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[6] == NULL) {
		lineArr[6] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint7 = firstIndexPoint7;
	UpdateData(FALSE);
	if (firstIndexPoint7 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint7 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint7 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint7 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint7 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint7 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint7 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint7 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint7 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit45()//second point of line 7.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[6] == NULL) {
		lineArr[6] = new Line;
	}
	UpdateData(TRUE);
	secondIndexPoint7 = secondIndexPoint7;
	UpdateData(FALSE);
	if (secondIndexPoint7 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint7 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint7 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint7 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint7 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint7 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint7 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint7 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint7 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[6][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton18()//make line 8.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[7] == NULL) {
		lineArr[7] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint8 = firstIndexPoint8;
	UpdateData(FALSE);
	if (firstIndexPoint8 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint8 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint8 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint8 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint8 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint8 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint8 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint8 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint8 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	UpdateData(TRUE);
	secondIndexPoint8 = secondIndexPoint8;
	UpdateData(FALSE);
	if (secondIndexPoint8 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint8 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint8 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint8 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint8 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint8 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint8 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint8 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint8 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
	CClientDC dc(this);
	myPoint left = lineArr[7][0].getFirstPoint(), right = lineArr[7][0].getSecondPoint(), temp;
	int leftx, lefty, disy, disx, flag = 1;
	double i, j, ahed, xahed, yahed, max, min, incline;
	try {
		incline = (left.getY() + 0.0 - right.getY() + 0.0) / (left.getX() + 0.0 - right.getX() + 0.0);
		throw 0;
	}
	catch (int error) {
		cout << "Error,probly divided by 0, error number:  " << error << endl;
	}
	if (left.getX() > right.getX()) {
		temp = left;
		left = right;
		right = temp;
	}

	if (incline > 0) {//if its go down(its > and not < cos we fix y for mfc workstyle).
		disy = right.getY() - left.getY(); disx = right.getX() - left.getX(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;//we compre the distance between left y with right y and left x with right x and if it to high
		//we try to handle it for make striat line.
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j += yahed;
		}
	}
	else if (incline < 0) {//if its go up(its < and not > cos we fix y for mfc workstyle).
		disx = right.getX() - left.getX(); disy = left.getY() - right.getY(); max = disy; min = disx;
		if (disx > max) {
			max = disx;
			min = disy;
			flag = 0;
		}ahed = max / min;
		if (flag) {//this if's will cheack wich cordinate need that help.
			xahed = i = 0.5;
			yahed = j = 0.5 * ahed;
		}
		else {
			xahed = i = 0.5 * ahed;
			yahed = j = 0.5;
		}
		for (leftx = left.getX(), lefty = left.getY(); leftx + i <= right.getX() || lefty + j <= right.getY(); )
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += xahed;
			j -= yahed;
		}
	}
	else {
		for (leftx = left.getX(), i = 1, j = 1, lefty = left.getY(); i + leftx <= right.getX(); i++)
		{
			dc.Ellipse(leftx + i, lefty + j, leftx + i + 5, lefty + j + 5);
			i += 0.5;

		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit48()//first point of line 8.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[7] == NULL) {
		lineArr[7] = new Line;
	}
	UpdateData(TRUE);
	firstIndexPoint8 = firstIndexPoint8;
	UpdateData(FALSE);
	if (firstIndexPoint8 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[0][0]);
		}
	}
	else if (firstIndexPoint8 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[1][0]);
		}
	}
	else if (firstIndexPoint8 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[2][0]);
		}
	}
	else if (firstIndexPoint8 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[3][0]);
		}
	}
	else if (firstIndexPoint8 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[4][0]);
		}
	}
	else if (firstIndexPoint8 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[5][0]);
		}
	}
	else if (firstIndexPoint8 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[6][0]);
		}
	}
	else if (firstIndexPoint8 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[7][0]);
		}
	}
	else if (firstIndexPoint8 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setFirstPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit47()//second point of line 8.
{
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (lineArr[7] == NULL) {
		lineArr[7] = new Line;
	}
	UpdateData(TRUE);
	secondIndexPoint8 = secondIndexPoint8;
	UpdateData(FALSE);
	if (secondIndexPoint8 == 0) {
		if (pointArr[0] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[0][0]);
		}
	}
	else if (secondIndexPoint8 == 1) {
		if (pointArr[1] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[1][0]);
		}
	}
	else if (secondIndexPoint8 == 2) {
		if (pointArr[2] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[2][0]);
		}
	}
	else if (secondIndexPoint8 == 3) {
		if (pointArr[3] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[3][0]);
		}
	}
	else if (secondIndexPoint8 == 4) {
		if (pointArr[4] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[4][0]);
		}
	}
	else if (secondIndexPoint8 == 5) {
		if (pointArr[5] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[5][0]);
		}
	}
	else if (secondIndexPoint8 == 6) {
		if (pointArr[6] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[6][0]);
		}
	}
	else if (secondIndexPoint8 == 7) {
		if (pointArr[7] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[7][0]);
		}
	}
	else if (secondIndexPoint8 == 8) {
		if (pointArr[8] == NULL) {
			exit(1);
		}
		else {
			lineArr[7][0].setSecondPoint(pointArr[8][0]);
		}
	}
	else {
		cout << "wrong number its should be between 0-5,try again " << endl;
	}
}
void CMFCApplication5Dlg::OnBnClickedButton27()//delete lines.
{
	int i = removeline - 1;
	if (lineArr[i] != NULL) {
		delete lineArr[i];
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit63()//wich line to delete.
{
	UpdateData(TRUE);
	removeline = removeline;
	UpdateData(FALSE);
}
//end of lines.

//start of straitslines:
void putdistance(int dist, int linNumber) {
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (straitsArr[linNumber] == NULL) {
		straitsArr[linNumber] = new straitLine;
	}
	straitsArr[linNumber][0].setDistance(dist);

}
void putpoint(myPoint po, int linNumber) {
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (straitsArr[linNumber] == NULL) {
		straitsArr[linNumber] = new straitLine;
	}
	straitsArr[linNumber][0].setPoint(po);
}
void CMFCApplication5Dlg::OnBnClickedButton19()//make straitline 1.
{
	int lineNumber = 0;
	if (straitsArr[0] == NULL) {
		straitsArr[0] = new straitLine;
		if (dic1 < 0) {
			dic1 = 0;
		}
		straitsArr[0][0].setDistance(dic1);
		if (ponum1 < 0 || ponum1>8) {
			ponum1 = 0;
		}
		putpoint(pointArr[ponum1][0], 0);
	}
	myPoint a = straitsArr[lineNumber][0].getPoint();
	int  j = a.getY() + straitsArr[lineNumber][0].getDistance();
	int tempx = a.getX();
	
	double i = a.getY();
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	CClientDC dc(this);
	for (i; i <= j; i++) {
			dc.Ellipse(tempx, i, tempx + 5, i + 5);
			i += 0.5;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit50()//striatline 1 point.
{
	UpdateData(TRUE);
	ponum1 = ponum1;
	if (ponum1 < 0 || ponum1>8) {
		ponum1 = 0;
	}
	UpdateData(FALSE);
	if (pointArr[ponum1] != NULL) {
		putpoint(pointArr[ponum1][0], 0);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit49()//striatline 1 distance.
{
	UpdateData(TRUE);
	dic1 = dic1;
	if (dic1 < 0) {
		dic1 = 0;
	}
	UpdateData(FALSE);
	putdistance(dic1, 0);
}
void CMFCApplication5Dlg::OnBnClickedButton20()//make straitline 2.
{
	int lineNumber = 1;
	if (straitsArr[lineNumber] == NULL) {
		straitsArr[lineNumber] = new straitLine;
		if (dic2 < 0) {
			dic2 = 0;
		}
		straitsArr[lineNumber][0].setDistance(dic2);
		if (poiNum < 0 || poiNum>8) {
			poiNum = 0;
		}
		putpoint(pointArr[poiNum][0], lineNumber);
	}
	myPoint a = straitsArr[lineNumber][0].getPoint();
	int  j = a.getY() + straitsArr[lineNumber][0].getDistance();
	int tempx = a.getX();

	double i = a.getY();
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	CClientDC dc(this);
	for (i; i <= j; i++) {
		dc.Ellipse(tempx, i, tempx + 5, i + 5);
		i += 0.5;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit52()//point for straitline 2.
{
	UpdateData(TRUE);
	poiNum = poiNum;
	if (poiNum < 0 || poiNum>8) {
		poiNum = 0;
	}
	UpdateData(FALSE);
	if (pointArr[poiNum] != NULL) {
		putpoint(pointArr[poiNum][0], 1);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit51()//distance for straitline 2.
{
	UpdateData(TRUE);
	dic2 = dic2;
	if (dic2 < 0) {
		dic2 = 0;
	}
	UpdateData(FALSE);
	putdistance(dic2, 1);
}
void CMFCApplication5Dlg::OnBnClickedButton21()//make strait line 3.
{
	int lineNumber = 2;
	if (straitsArr[lineNumber] == NULL) {
		straitsArr[lineNumber] = new straitLine;
		if (dic3 < 0) {
			dic3 = 0;
		}
		straitsArr[lineNumber][0].setDistance(dic3);
		if (poNum3 < 0 || poNum3>8) {
			poNum3 = 0;
		}
		putpoint(pointArr[poNum3][0], lineNumber);
	}
	myPoint a = straitsArr[lineNumber][0].getPoint();
	int  j = a.getY() + straitsArr[lineNumber][0].getDistance();
	int tempx = a.getX();

	double i = a.getY();
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	CClientDC dc(this);
	for (i; i <= j; i++) {
		dc.Ellipse(tempx, i, tempx + 5, i + 5);
		i += 0.5;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit54()//strait line 3 point.
{
	UpdateData(TRUE);
	poNum3 = poNum3;
	if (poNum3 < 0 || poNum3>8) {
		poNum3 = 0;
	}
	UpdateData(FALSE);
	if (pointArr[poNum3] != NULL) {
		putpoint(pointArr[poNum3][0], 2);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit53()//strait line 3 distance. 
{
	UpdateData(TRUE);
	dic3 = dic3;
	if (dic3 < 0) {
		dic3 = 0;
	}
	UpdateData(FALSE);
	putdistance(dic3, 2);
}
void CMFCApplication5Dlg::OnBnClickedButton22()//make straitline 4.
{
	int lineNumber = 3;
	if (straitsArr[lineNumber] == NULL) {
		straitsArr[lineNumber] = new straitLine;
		if (dic4 < 0) {
			dic4 = 0;
		}
		straitsArr[lineNumber][0].setDistance(dic4);
		if (poNum4 < 0 || poNum4>8) {
			poNum4 = 0;
		}
		putpoint(pointArr[poNum4][0], lineNumber);
	}
	myPoint a = straitsArr[lineNumber][0].getPoint();
	int  j = a.getY() + straitsArr[lineNumber][0].getDistance();
	int tempx = a.getX();

	double i = a.getY();
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	CClientDC dc(this);
	for (i; i <= j; i++) {
		dc.Ellipse(tempx, i, tempx + 5, i + 5);
		i += 0.5;
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit56()//straitline 4 point.
{
	UpdateData(TRUE);
	poNum4 = poNum4;
	if (poNum4 < 0 || poNum4>8) {
		poNum4 = 0;
	}
	UpdateData(FALSE);
	if (pointArr[poNum4] != NULL) {
		putpoint(pointArr[poNum4][0], 3);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit55()//straitline 4 distance.
{
	UpdateData(TRUE);
	dic4 = dic4;
	if (dic4 < 0) {
		dic4 = 0;
	}
	UpdateData(FALSE);
	putdistance(dic4, 3);
}
void CMFCApplication5Dlg::OnBnClickedButton28()//remove straits line.
{
	int i = remstraitline - 1;
	if (straitsArr[i] != NULL) {
		delete straitsArr[i];
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit61()//wich straitline to remove
{
	UpdateData(TRUE);
	remstraitline = remstraitline;
	UpdateData(FALSE);
}
//end of straitslines.


//start of squraes:
void CMFCApplication5Dlg::OnBnClickedButton23()//make Square 1
{
	int curSquere = 0, tempx, tempy, end;
	double i, j;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (squareArr[curSquere] == NULL) {
		squareArr[curSquere] = new Square;
		if (pointArr[sPoint1] != NULL) {
			squareArr[0][0].setSquareAround(pointArr[sPoint1][0]);
		}
		else { exit(1); }
	}
	squareArr[0][0].setSquareAround(pointArr[sPoint1][0]);
	myPoint upLeft = squareArr[curSquere][0].getPointUpLeft(), upRight = squareArr[curSquere][0].getPointUpRight()
		, downLeft = squareArr[curSquere][0].getPointDownLeft(), downRight = squareArr[curSquere][0].getPointDownright();
	CClientDC dc(this);
	tempx = upLeft.getX(); tempy = upLeft.getY(); end = upRight.getX();
	for (i = 0.5, j = 0.5; tempx + i <= end; i += 0.5) {//draw uper line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getY();
	for (i = 0.5, j = 0.5; tempy + j <= end; j += 0.5) {//draw left line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	tempx = downRight.getX(); tempy = downRight.getY(); end = upRight.getY();
	for (i = 0.5, j = 0.5; tempy + j >= end; j -= 0.5) {//draw right line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getX();
	for (i = 0.5, j = 0.5; tempx + i >= end; i -= 0.5) {//draw down line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit57()//Square 1 point
{
	UpdateData(TRUE);
	sPoint1 = sPoint1;
	UpdateData(FALSE);
	int curSquere = 0;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (squareArr[curSquere] == NULL) {
		squareArr[curSquere] = new Square;
		if (pointArr[sPoint1] != NULL) {
			squareArr[curSquere][0].setSquareAround(pointArr[sPoint1][0]);
		}
		else { exit(1); }
	}

}
void CMFCApplication5Dlg::OnBnClickedButton24()//make Square 2.
{
	int curSquere = 1, tempx, tempy, end;
	double i, j;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (squareArr[curSquere] == NULL) {
		squareArr[curSquere] = new Square;
		if (pointArr[sPoint2] != NULL) {
			squareArr[curSquere][0].setSquareAround(pointArr[sPoint2][0]);
		}
		else { exit(1); }
	}
	squareArr[curSquere][0].setSquareAround(pointArr[sPoint2][0]);
	myPoint upLeft = squareArr[curSquere][0].getPointUpLeft(), upRight = squareArr[curSquere][0].getPointUpRight()
	, downLeft = squareArr[curSquere][0].getPointDownLeft(), downRight = squareArr[curSquere][0].getPointDownright();
	CClientDC dc(this);
	tempx = upLeft.getX(); tempy = upLeft.getY(); end = upRight.getX();
	for (i = 0.5, j = 0.5; tempx + i <= end; i += 0.5) {//draw uper line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getY();
	for (i = 0.5, j = 0.5; tempy + j <= end; j += 0.5) {//draw left line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	tempx = downRight.getX(); tempy = downRight.getY(); end = upRight.getY();
	for (i = 0.5, j = 0.5; tempy + j >= end; j -= 0.5) {//draw right line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getX();
	for (i = 0.5, j = 0.5; tempx + i >= end; i -= 0.5) {//draw down line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit58()//Square 2 point.
{
	UpdateData(TRUE);
	sPoint2 = sPoint2;
	UpdateData(FALSE);
	int curSquere = 1;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (squareArr[curSquere] == NULL) {
		squareArr[curSquere] = new Square;
		if (pointArr[sPoint2] != NULL) {
			squareArr[curSquere][0].setSquareAround(pointArr[sPoint2][0]);
		}
		else { exit(1); }
	}
}
void CMFCApplication5Dlg::OnBnClickedButton25()//make Square 3
{
	int curSquere = 2, tempx, tempy, end;
	double i, j;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (squareArr[curSquere] == NULL) {
		squareArr[curSquere] = new Square;
		if (pointArr[sPoint3] != NULL) {
			squareArr[curSquere][0].setSquareAround(pointArr[sPoint3][0]);
		}
		else { exit(1); }
	}
	squareArr[curSquere][0].setSquareAround(pointArr[sPoint3][0]);
	myPoint upLeft = squareArr[curSquere][0].getPointUpLeft(), upRight = squareArr[curSquere][0].getPointUpRight()
		, downLeft = squareArr[curSquere][0].getPointDownLeft(), downRight = squareArr[curSquere][0].getPointDownright();
	CClientDC dc(this);
	tempx = upLeft.getX(); tempy = upLeft.getY(); end = upRight.getX();
	for (i = 0.5, j = 0.5; tempx + i <= end; i += 0.5) {//draw uper line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getY();
	for (i = 0.5, j = 0.5; tempy + j <= end; j += 0.5) {//draw left line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	tempx = downRight.getX(); tempy = downRight.getY(); end = upRight.getY();
	for (i = 0.5, j = 0.5; tempy + j >= end; j -= 0.5) {//draw right line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getX();
	for (i = 0.5, j = 0.5; tempx + i >= end; i -= 0.5) {//draw down line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit59()//Square 3 point
{
	UpdateData(TRUE);
	sPoint3 = sPoint3;
	UpdateData(FALSE);
	int curSquere = 2;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (squareArr[curSquere] == NULL) {
		squareArr[curSquere] = new Square;
		if (pointArr[sPoint3] != NULL) {
			squareArr[curSquere][0].setSquareAround(pointArr[sPoint3][0]);
		}
		else { exit(1); }
	}
}
void CMFCApplication5Dlg::OnBnClickedButton29()//delete squres.
{
	int i = remstraitline - 1;
	if (squareArr[i] != NULL) {
		delete squareArr[i];
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit62()//wich squraes to delete.
{
	UpdateData(TRUE);
	remsqueres = remsqueres;
	UpdateData(FALSE);
}
//end of squraes.

//start of rectangle:
void CMFCApplication5Dlg::OnBnClickedButton30()//make rectangle 1
{
	int currectangle = 0, tempx, tempy, end;
	double i, j;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (RectangleArr[currectangle] == NULL) {
		RectangleArr[currectangle] = new rectangle;
		if (pointArr[wichporectangle1] != NULL) {
			RectangleArr[currectangle][0].setRectangleAround(pointArr[wichporectangle1][0]);
		}
		else { exit(1); }
	}
	myPoint upLeft = RectangleArr[currectangle][0].getPointUpLeft(), upRight = RectangleArr[currectangle][0].getPointUpRight()
		, downLeft = RectangleArr[currectangle][0].getPointDownLeft(), downRight = RectangleArr[currectangle][0].getPointDownright();
	CClientDC dc(this);
	tempx = upLeft.getX(); tempy = upLeft.getY(); end = upRight.getX();
	for (i = 0.5, j = 0.5; tempx + i <= end; i += 0.5) {//draw uper line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getY();
	for (i = 0.5, j = 0.5; tempy + j <= end; j += 0.5) {//draw left line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	tempx = downRight.getX(); tempy = downRight.getY(); end = upRight.getY();
	for (i = 0.5, j = 0.5; tempy + j >= end; j -= 0.5) {//draw right line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getX();
	for (i = 0.5, j = 0.5; tempx + i >= end; i -= 0.5) {//draw down line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit64()//rectangle point 1
{
	UpdateData(TRUE);
	wichporectangle1 = wichporectangle1;
	UpdateData(FALSE);
	int curRectangle = 0;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (RectangleArr[curRectangle] == NULL) {
		RectangleArr[curRectangle] = new rectangle;
	}
	if (pointArr[wichporectangle1] != NULL) {
		RectangleArr[curRectangle][0].setRectangleAround(pointArr[wichporectangle1][0]);
	}
	else { exit(1); }

}
void CMFCApplication5Dlg::OnBnClickedButton31()//make rectangle 2
{
	int currectangle = 1, tempx, tempy, end;
	double i, j;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (RectangleArr[currectangle] == NULL) {
		RectangleArr[currectangle] = new rectangle;
		if (pointArr[wichporectangle2] != NULL) {
			RectangleArr[currectangle][0].setRectangleAround(pointArr[wichporectangle2][0]);
		}
		else { exit(1); }
	}
	myPoint upLeft = RectangleArr[currectangle][0].getPointUpLeft(), upRight = RectangleArr[currectangle][0].getPointUpRight()
		, downLeft = RectangleArr[currectangle][0].getPointDownLeft(), downRight = RectangleArr[currectangle][0].getPointDownright();
	CClientDC dc(this);
	tempx = upLeft.getX(); tempy = upLeft.getY(); end = upRight.getX();
	for (i = 0.5, j = 0.5; tempx + i <= end; i += 0.5) {//draw uper line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getY();
	for (i = 0.5, j = 0.5; tempy + j <= end; j += 0.5) {//draw left line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	tempx = downRight.getX(); tempy = downRight.getY(); end = upRight.getY();
	for (i = 0.5, j = 0.5; tempy + j >= end; j -= 0.5) {//draw right line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getX();
	for (i = 0.5, j = 0.5; tempx + i >= end; i -= 0.5) {//draw down line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit65()//rectangle 2 point
{
	UpdateData(TRUE);
	wichporectangle2 = wichporectangle2;
	UpdateData(FALSE);
	int curRectangle = 1;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (RectangleArr[curRectangle] == NULL) {
		RectangleArr[curRectangle] = new rectangle;
	}
	if (pointArr[wichporectangle2] != NULL) {
		RectangleArr[curRectangle][0].setRectangleAround(pointArr[wichporectangle2][0]);
	}
	else { exit(1); }
}
void CMFCApplication5Dlg::OnBnClickedButton32()//make rectangle 3.
{
	int currectangle = 2, tempx, tempy, end;
	double i, j;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (RectangleArr[currectangle] == NULL) {
		RectangleArr[currectangle] = new rectangle;
		if (pointArr[wichporectangle3] != NULL) {
			RectangleArr[currectangle][0].setRectangleAround(pointArr[wichporectangle3][0]);
		}
		else { exit(1); }
	}
	myPoint upLeft = RectangleArr[currectangle][0].getPointUpLeft(), upRight = RectangleArr[currectangle][0].getPointUpRight()
		, downLeft = RectangleArr[currectangle][0].getPointDownLeft(), downRight = RectangleArr[currectangle][0].getPointDownright();
	CClientDC dc(this);
	tempx = upLeft.getX(); tempy = upLeft.getY(); end = upRight.getX();
	for (i = 0.5, j = 0.5; tempx + i <= end; i += 0.5) {//draw uper line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getY();
	for (i = 0.5, j = 0.5; tempy + j <= end; j += 0.5) {//draw left line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	tempx = downRight.getX(); tempy = downRight.getY(); end = upRight.getY();
	for (i = 0.5, j = 0.5; tempy + j >= end; j -= 0.5) {//draw right line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
	end = downLeft.getX();
	for (i = 0.5, j = 0.5; tempx + i >= end; i -= 0.5) {//draw down line.
		dc.Ellipse(tempx + i, tempy + j, tempx + 5 + i, tempy + 5 + j);
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit66()//rectangle 3 point.
{
	UpdateData(TRUE);
	wichporectangle3 = wichporectangle3;
	UpdateData(FALSE);
	int curRectangle = 2;
	if (pointArr[0] == NULL) {
		AfxMessageBox(_T("you MUST make draw cordinate first,plaese try again after you pressed: 'Draw Cordinate' "));
		exit(1);
	}
	if (RectangleArr[curRectangle] == NULL) {
		RectangleArr[curRectangle] = new rectangle;
	}
	if (pointArr[wichporectangle3] != NULL) {
		RectangleArr[curRectangle][0].setRectangleAround(pointArr[wichporectangle3][0]);
	}
	else { exit(1); }
}
void CMFCApplication5Dlg::OnBnClickedButton33()//remove rectangles
{
	int i = recremovenumber - 1;
	if (RectangleArr[i] != NULL) {
		delete RectangleArr[i];
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit67()//wich rectangles to remove
{
	UpdateData(TRUE);
	recremovenumber = recremovenumber;
	UpdateData(FALSE);
}
//end of rectangle.

//start roots:
template<class T>
double rootsFunction(T a, T b, T c,int flag) {//make root formole and update answers.
	double x1, x2,temp;
	int flag1 = flag;
	if (a != 0) {
		if (flag == 1) {
			x1 = b * b;
			temp = 4 * a * c;
			x1 = x1 - temp;
			x1 = sqrt(x1);
			x1 = -b + x1;
			temp = 2 * a;
			x1 = x1 / temp;
			return x1;
		}
		else {
			x2 = b * b;
			temp = 4 * a * c;
			x2 = x2 - temp;
			x2 = sqrt(x2);
			x2 = -b - x2;
			temp = 2 * a;
			x2 = x2 / temp;
			return x2;
		}
	}
	
}
void CMFCApplication5Dlg::OnBnClickedButton6()//make the roots.
{
	int flag = 1;
	double answer;
	for (int i = 0; i < 2; i++) {
		if (flag == 1) {
			answer = rootsFunction(a_for_roots, b_for_roots, c_for_roots, flag);
			if (answer >= -50 && answer <= 50) {
				x1_answer = answer;
					UpdateData(FALSE);
				flag = 2;
			}
		}
		else {
			answer = rootsFunction(a_for_roots, b_for_roots, c_for_roots, flag);
			if (answer >= -50 && answer <= 50) {
				x2_answer = answer;
				UpdateData(FALSE);
				flag = 1;
			}
		}
	}
}
void CMFCApplication5Dlg::OnEnChangeEdit12()// a for roots.
{
	UpdateData(TRUE);
	a_for_roots = a_for_roots;
	UpdateData(FALSE);
}
void CMFCApplication5Dlg::OnEnChangeEdit13()//b for roots.
{
	UpdateData(TRUE);
	b_for_roots = b_for_roots;
	UpdateData(FALSE);
}
void CMFCApplication5Dlg::OnEnChangeEdit14()// c for roots.
{
	UpdateData(TRUE);
	c_for_roots = c_for_roots;
	UpdateData(FALSE);
}
void CMFCApplication5Dlg::OnEnChangeEdit70()//answer x1.
{
	x1_answer;
	UpdateData(FALSE);
}
void CMFCApplication5Dlg::OnEnChangeEdit71()//answer x2.
{
	x2_answer;
	UpdateData(FALSE);
}
//end roots.

// start of save+load:
/*void CMFCApplication5Dlg::OnBnClickedButton34Load()//Load botum.
{
	
}*/