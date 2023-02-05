
// mfcCImageDlg.h : ��� ����
//

#pragma once


// CmfcCImageDlg ��ȭ ����
class CmfcCImageDlg : public CDialogEx
{
private:
	CImage m_image;
	BOOL validImgPos(int x, int y);
	BOOL isInCircle(int i, int j, int nCenterX, int nCenterY, int nRadius);
	// �����Դϴ�.
public:
	CmfcCImageDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCIMAGE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnImage();
	afx_msg void OnBnClickedBtnImage2();
	afx_msg void OnBnClickedBtnSave();
	afx_msg void OnBnClickedBtnLoad();
	afx_msg void OnBnClickedBtnAction();
	void UpdateDisplay();
	void MoveRect();
	void MoveCircle();
	void drawCircle(unsigned char* fm, int x, int y, int nRadius, int nGray);

	afx_msg void OnBnClickedBtnAction2();
	afx_msg void OnBnClickedBtnAction3();
};
