
// MailSender.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMailSenderApp: 
// �йش����ʵ�֣������ MailSender.cpp
//

class CMailSenderApp : public CWinApp
{
public:
	CMailSenderApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMailSenderApp theApp;