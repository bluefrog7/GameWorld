#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "가위바위보.h"


int main()
{
	int computer;
	char hand[5];
	printf("가위 바위 보 게임 %s\n","Ver.1.0");
	printf("게임방법:가위,바위,보 중 하나를 입력하면된다\n");
	printf("--> ");
	scanf("%s",hand);
	computer=probability();
	if(computer==1)
	{
		printf("com: 가위\n");
	}
	else if(computer==2)
	{
		printf("com: 바위\n");
	}
	else
	{
		printf("com: 보\n");
	}
	if(judge(convert(hand),computer)==0)
	{
		printf("무승부\n");
		Sleep(1500);
	}
	else if(judge(convert(hand),computer)==1)
	{
		printf("승리\n");
		Sleep(1500);
	}
	else
	{
		printf("패배\n");
		Sleep(1500);
	}
	
	return 0;
}
