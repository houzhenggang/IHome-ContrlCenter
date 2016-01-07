#ifndef __TCP_CLIENT_DEMO_H
#define __TCP_CLIENT_DEMO_H
#include "sys.h"
#include "includes.h"   

extern u8 isConnected;
extern u8 isAuthed;

#define MASTER "975559549"
#define SLAVE  "975559549h"
 
#define TCP_CLIENT_RX_BUFSIZE	200	//���ջ���������
#define REMOTE_PORT				8080	//����Զ��������IP��ַ

extern u8 tcp_client_flag;		//TCP�ͻ������ݷ��ͱ�־λ

INT8U tcp_client_init(void);  //tcp�ͻ��˳�ʼ��(����tcp�ͻ����߳�)
void tcp_client_connect(void *arg);
void tcp_client_recv(void *arg);
void tcp_client_handle_task(void *arg);
void tcp_client_send(void *arg);

#endif
