#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include"������.h"

int main()
{
	int number,number1,num,i,num1,num2,score,b,dan;
	score=0;
	char arr[10];
	while(1)
	{
		printf("�������� ����~ �������� ����~ %15s\n\n","Ver.1.0");
		printf("<�������� ���ö� �������� 9�� ������ 3�ʾȿ� ���� �Է��ϼž��մϴ�.>\n\n");
		printf("1.����   2.����\n");
		scanf("%d",&number);
		printf("\n");
		if(number==1)
		{
			printf("�������� �����մϴ�.\n");
			printf("3   ");
			Sleep(1000);
			printf("2   ");
			Sleep(1000);
			printf("1\n\n");
			Sleep(1000);
			for(i=1; i<=10; i++)
			{
				sent(&num1,&num2);
				printf("%d��° ����\n",i);
				printf("%d * %d = ",num1,num2);
				dan=visibleBuffer(arr,3);
				num=arr[0]/10;
				num+=arr[1];
				printf("\n\n");
				if(num==num1*num2)
				{
					printf("�����Դϴ�.\n");
					if(i<10)
					{
						Sleep(1000);
						printf("3   ");
						Sleep(1000);
						printf("2   ");						
						Sleep(1000);
						printf("1\n\n");
						Sleep(1000);
						score++;	
					}
				}
				else if(dan==1)
				{
					printf("�ð��ʰ��Դϴ�.\n");
					Sleep(1000);
					printf("3   ");
					Sleep(1000);
					printf("2   ");						
					Sleep(1000);
					printf("1\n\n");
					Sleep(1000);
				}
				else
				{
					printf("�����Դϴ�.\n");
					if(i<10)
					{
						Sleep(1000);
						printf("3   ");
						Sleep(1000);
						printf("2   ");						
						Sleep(1000);
						printf("1\n\n");
						Sleep(1000);
					}
				}
			}
			printf("����Ǿ����ϴ�.\n");
			printf("����� %d�� ������ϴ�.\n",score);
			printf("����Ͻðڽ��ϱ�?\n");
			printf("1.���  2.����\n");
			while(1)
			{
				scanf("%d",&b);
				printf("\n");
				if(b==1)
				{
					printf("�������� ����մϴ�.\n");
					system("pause");
					system("cls");
					break;
				}
				else if(b==2)
				{
					printf("���α׷��� �����մϴ�.\n");
					Sleep(2000);
					return 0;
				}
				else 
				{
					printf("�߸��Է��ϼ̽��ϴ�. �ٽ��Է����ּ���.\n");
					Sleep(1500);
					system("cls");
					continue;
				}	
			}	
		}
		else if(number==2)
		{
			printf("���α׷��� �����մϴ�.\n");
			Sleep(2000);
			return 0;
		}
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է����ּ���.\n");
			Sleep(1500);
			system("cls");
			continue;
		}
	}
}
