#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "����������.h"


int main()
{
	int computer;
	char hand[5];
	printf("���� ���� �� ���� %s\n","Ver.1.0");
	printf("���ӹ��:����,����,�� �� �ϳ��� �Է��ϸ�ȴ�\n");
	printf("--> ");
	scanf("%s",hand);
	computer=probability();
	if(computer==1)
	{
		printf("com: ����\n");
	}
	else if(computer==2)
	{
		printf("com: ����\n");
	}
	else
	{
		printf("com: ��\n");
	}
	if(judge(convert(hand),computer)==0)
	{
		printf("���º�\n");
		Sleep(1500);
	}
	else if(judge(convert(hand),computer)==1)
	{
		printf("�¸�\n");
		Sleep(1500);
	}
	else
	{
		printf("�й�\n");
		Sleep(1500);
	}
	
	return 0;
}
