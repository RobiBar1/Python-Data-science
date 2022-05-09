
// MFCApplication5Dlg.h : header file
//

#pragma once


// CMFCApplication5Dlg dialog
class CMFCApplication5Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication5Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION5_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int x;
	int y;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton2();
	int FirstPointX;
	int firstPointY;
	int secondPointX;
	int secondPointY;
	int frstLineY;
	int firstLineX;
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnEnChangeEdit10();
	afx_msg void OnEnChangeEdit11();
	int firstPointIndex;
	int secondPointIndex1;
	int thirhPointX;
	afx_msg void OnEnChangeEdit12();
	int a_for_roots;
	int forthPointX;
	int forthPointY;
	int fifthPointX;
	int fifthPointY;
	int sixPointX;
	int sixPointY;
	int sevenPointX;
	int sevenpointY;
	int eyithPointX;
	int eiythPointY;
	afx_msg void OnEnChangeEdit16();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnEnChangeEdit15();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnEnChangeEdit24();
	afx_msg void OnEnChangeEdit25();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnEnChangeEdit27();
	afx_msg void OnEnChangeEdit26();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnEnChangeEdit29();
	afx_msg void OnEnChangeEdit28();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnEnChangeEdit31();
	afx_msg void OnEnChangeEdit30();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnEnChangeEdit36();
	afx_msg void OnEnChangeEdit35();
	int firstPointIndex2;
	int secondPointIndex2;
	afx_msg void OnBnClickedButton13();
	afx_msg void OnEnChangeEdit38();
	afx_msg void OnEnChangeEdit37();
	int indexpointleft;
	int indexPointRight;
	afx_msg void OnBnClickedButton14();
	int firstPointIndex4;
	int secondPointIndex4;
	afx_msg void OnEnChangeEdit40();
	afx_msg void OnEnChangeEdit39();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnEnChangeEdit42();
	afx_msg void OnEnChangeEdit41();
	int firstIndexPoint5;
	int secondIndexPoint5;
	afx_msg void OnBnClickedButton16();
	afx_msg void OnEnChangeEdit44();
	afx_msg void OnEnChangeEdit43();
	int firstIndexPoint6;
	int secondIndexPoint6;
	afx_msg void OnBnClickedButton17();
	afx_msg void OnEnChangeEdit46();
	afx_msg void OnEnChangeEdit45();
	int firstIndexPoint7;
	int secondIndexPoint7;
	afx_msg void OnBnClickedButton18();
	afx_msg void OnEnChangeEdit48();
	afx_msg void OnEnChangeEdit47();
	int firstIndexPoint8;
	int secondIndexPoint8;
	afx_msg void OnEnChangeEdit50();
	int ponum1;
	afx_msg void OnEnChangeEdit49();
	int dic1;
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnEnChangeEdit52();
	afx_msg void OnEnChangeEdit51();
	int dic2;
	int poiNum;
	afx_msg void OnBnClickedButton21();
	afx_msg void OnEnChangeEdit54();
	afx_msg void OnEnChangeEdit53();
	int dic3;
	int poNum3;
	afx_msg void OnBnClickedButton22();
	afx_msg void OnEnChangeEdit56();
	afx_msg void OnEnChangeEdit55();
	int dic4;
	int poNum4;
	afx_msg void OnBnClickedButton23();
	afx_msg void OnEnChangeEdit57();
	int sPoint1;
	afx_msg void OnBnClickedButton24();
	afx_msg void OnEnChangeEdit58();
	int sPoint2;
	afx_msg void OnBnClickedButton25();
	afx_msg void OnEnChangeEdit59();
	int sPoint3;
	int revmoepoi;
	afx_msg void OnEnChangeEdit60();
	int removeline;
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnEnChangeEdit63();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnEnChangeEdit61();
	int remstraitline;
	afx_msg void OnBnClickedButton29();
	afx_msg void OnEnChangeEdit62();
	int remsqueres;
	afx_msg void OnBnClickedButton30();
	afx_msg void OnEnChangeEdit64();
	int wichporectangle1;
	int wichporectangle2;
	afx_msg void OnBnClickedButton31();
	afx_msg void OnEnChangeEdit65();
	int wichporectangle3;
	afx_msg void OnBnClickedButton32();
	afx_msg void OnEnChangeEdit66();
	afx_msg void OnBnClickedButton33();
	afx_msg void OnEnChangeEdit67();
	int recremovenumber;
	int b_for_roots;
	int c_for_roots;
	afx_msg void OnEnChangeEdit13();
	afx_msg void OnEnChangeEdit14();
	afx_msg void OnEnChangeEdit69();
	afx_msg void OnEnChangeEdit68();
	afx_msg void OnBnClickedButton6();
	double x1_answer;
	double x2_answer;
	afx_msg void OnEnChangeEdit71();
	afx_msg void OnEnChangeEdit70();
	afx_msg void OnBnClickedButton34Load();
private:
	enum DocumentType { None, Text };
	DocumentType m_DocumentType{ DocumentType::None };
	CString M_Text; 
	//end of line cordinates(Line start from zero).
	int m_x;
	int m_y;
};
