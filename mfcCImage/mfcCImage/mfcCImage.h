
// mfcCImage.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CmfcCImageApp:
// �� Ŭ������ ������ ���ؼ��� mfcCImage.cpp�� �����Ͻʽÿ�.
//

class CmfcCImageApp : public CWinApp
{
public:
	CmfcCImageApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CmfcCImageApp theApp;