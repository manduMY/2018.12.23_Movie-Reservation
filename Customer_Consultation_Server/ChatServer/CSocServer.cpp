#include "stdafx.h"



CSocServer::CSocServer()
{
}


CSocServer::~CSocServer()
{
}


void CSocServer::Init(HWND hWnd)
{
	m_hWnd = hWnd;
}

void CSocServer::OnAccept(int nErrorCode)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	Accept(m_socCom[wait]);
	SendMessage(m_hWnd, UM_ACCEPT, 0, 0);
	wait++;
	CSocket::OnAccept(nErrorCode);
}



CSocCom* CSocServer::GetAcceptSocCom()
{
	return &m_socCom[wait];
}
