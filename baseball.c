#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"���ھ߱�.h"
int main()
{
	int b,c;
	while(1)
	{
		printf("���� �߱�(��������)%15s\n","Ver.1.0");
		printf("���� ��\n");
		printf("1.���ڸ� ��ġ�Ұ�� 1���� 1��\n");
		printf("2.���ڿ� �ڸ��� ��ġ�Ұ�� 1���� 1��Ʈ����ũ\n");
		printf("3.����� ���ڰ� ��ǻ�� ���ڿ� ��ġ�ϸ� ��\n\n");
		printf("%20s    %20s\n","1.����","2.����");
		scanf("%d",&c);
		if(c==1)
		{
			printf("���ڸ� ���ڸ� �Ͻ��� ����ּ���.(���籸���� ����:3,4,5)\n");
			printf("-->");
			scanf("%d",&b);
			if(b==3)
			{
				int num[3],cnum[3],j,strike,ball,i;
				printf("�����ǻ��ס�\n");
				printf("������ ���� 3���� �Է����ּ���.\n\n");
				pusent3(cnum);
				for(i=0; i<20; i++)
				{
					printf("%d��° ��\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>999)
					{
						printf("�߸� �Է��ϼ̽��ϴ�. ������� ���ڴ� �������� ���ϰڽ��ϴ�.\n");
						pusent3(num);
						printf("�������� �����ȼ�: ");
						printf("%d",num[0]);
						printf("%d",num[1]);
						printf("%d\n",num[2]);
					}
					else
					{
						num[0]=j/100;
						j-=num[0]*100;
						num[1]=j/10;
						j-=num[1]*10;
						num[2]=j;
					}
					baseball(3,cnum,num,&strike,&ball);
					if(strike==3)
					{
						printf("out\n");
						printf("��ǻ�� ����: ");
						printf("%d",cnum[0]);	
						printf("%d",cnum[1]);	
						printf("%d\n",cnum[2]);	
						system("pause");
						return 0;
					}
					else
					{
						printf("%d strike\n",strike);
						printf("%d ball\n\n",ball);
					}
				}
				printf("��ǻ�� ����: ");
				printf("%d",cnum[0]);	
				printf("%d",cnum[1]);	
				printf("%d\n",cnum[2]);	
				system("pause");
				system("cls");		
			}
			else if(b==4) 
			{
				int num[4],cnum[4],j,strike,ball,i;
				printf("�����ǻ��ס�\n");
				printf("������ ���� 4���� �Է����ּ���.\n\n");
				pusent4(cnum);
				for(i=0; i<20; i++)
				{
					printf("%d��° ��\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>9999)
					{
						printf("�߸� �Է��ϼ̽��ϴ�. ������� ���ڴ� �������� ���ϰڽ��ϴ�.\n");
						pusent4(num);
						printf("�������� �����ȼ�: ");
						printf("%d",num[0]);
						printf("%d",num[1]);
						printf("%d",num[2]);
						printf("%d\n",num[3]);
					}
					else
					{
						num[0]=j/1000;
						j-=num[0]*1000;
						num[1]=j/100;
						j-=num[1]*100;
						num[2]=j/10;
						j-=num[2]*10;
						num[3]=j;
					}
					baseball(4,cnum,num,&strike,&ball);
					if(strike==4)
					{
						printf("out\n");
						printf("��ǻ�� ����: ");
						printf("%d",cnum[0]);	
						printf("%d",cnum[1]);	
						printf("%d",cnum[2]);	
						printf("%d\n",cnum[3]);	
						system("pause");
						return 0;
					}
					else
					{
						printf("%d strike\n",strike);
						printf("%d ball\n\n",ball);
					}
				}	
				printf("��ǻ�� ����: ");
				printf("%d",cnum[0]);	
				printf("%d",cnum[1]);	
				printf("%d",cnum[2]);	
				printf("%d\n",cnum[3]);	
				system("pause");
				system("cls");	
			}
			else if(b==5)
			{
				int num[5],cnum[5],j,strike,ball,i;
				printf("�����ǻ��ס�\n");
				printf("������ ���� 5���� �Է����ּ���.\n\n");
				pusent5(cnum);
				for(i=0; i<20; i++)
				{
					printf("%d��° ��\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>99999)
					{
						printf("�߸� �Է��ϼ̽��ϴ�. ������� ���ڴ� �������� ���ϰڽ��ϴ�.\n");
						pusent5(num);
						printf("�������� �����ȼ�: ");
						printf("%d",num[0]);
						printf("%d",num[1]);
						printf("%d",num[2]);
						printf("%d",num[3]);
						printf("%d\n",num[4]);
					}
					else
					{
						num[0]=j/10000;
						j-=num[0]*10000;
						num[1]=j/1000;
						j-=num[1]*1000;
						num[2]=j/100;
						j-=num[2]*100;
						num[3]=j/10;
						j-=num[3]*10;
						num[4]=j;
					}
					baseball(5,cnum,num,&strike,&ball);
					if(strike==5)
					{
						printf("out\n");
						printf("��ǻ�� ����: ");
						printf("%d",cnum[0]);	
						printf("%d",cnum[1]);	
						printf("%d",cnum[2]);	
						printf("%d",cnum[3]);	
						printf("%d\n",cnum[4]);	
						system("pause");
						return 0;
					}
					else
					{
						printf("%d strike\n",strike);
						printf("%d ball\n\n",ball);
					}
				}
				printf("��ǻ�� ����: ");
				printf("%d",cnum[0]);	
				printf("%d",cnum[1]);	
				printf("%d",cnum[2]);	
				printf("%d",cnum[3]);	
				printf("%d\n",cnum[4]);	
				system("pause");
				system("cls");				
			}
			else
			{
				printf("���� �������� ���� �����Դϴ�.\n");
				Sleep(2000);
				system("cls");
				continue;
			}	
		}	
		else if(c==2)
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
		}
	}
}
