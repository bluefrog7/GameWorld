#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"숫자야구.h"
int main()
{
	int b,c;
	while(1)
	{
		printf("숫자 야구(투수관점)%15s\n","Ver.1.0");
		printf("게임 룰\n");
		printf("1.숫자만 일치할경우 1개당 1볼\n");
		printf("2.숫자와 자리가 일치할경우 1개당 1스트라이크\n");
		printf("3.사용자 숫자가 컴퓨터 숫자와 일치하면 끝\n\n");
		printf("%20s    %20s\n","1.시작","2.종료");
		scanf("%d",&c);
		if(c==1)
		{
			printf("몇자리 숫자를 하실지 골라주세요.(현재구현된 버전:3,4,5)\n");
			printf("-->");
			scanf("%d",&b);
			if(b==3)
			{
				int num[3],cnum[3],j,strike,ball,i;
				printf("※주의사항※\n");
				printf("무조건 숫자 3개만 입력해주세요.\n\n");
				pusent3(cnum);
				for(i=0; i<20; i++)
				{
					printf("%d번째 턴\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>999)
					{
						printf("잘못 입력하셨습니다. 사용자의 숫자는 랜덤으로 정하겠습니다.\n");
						pusent3(num);
						printf("랜덤으로 지정된수: ");
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
						printf("컴퓨터 숫자: ");
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
				printf("컴퓨터 숫자: ");
				printf("%d",cnum[0]);	
				printf("%d",cnum[1]);	
				printf("%d\n",cnum[2]);	
				system("pause");
				system("cls");		
			}
			else if(b==4) 
			{
				int num[4],cnum[4],j,strike,ball,i;
				printf("※주의사항※\n");
				printf("무조건 숫자 4개만 입력해주세요.\n\n");
				pusent4(cnum);
				for(i=0; i<20; i++)
				{
					printf("%d번째 턴\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>9999)
					{
						printf("잘못 입력하셨습니다. 사용자의 숫자는 랜덤으로 정하겠습니다.\n");
						pusent4(num);
						printf("랜덤으로 지정된수: ");
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
						printf("컴퓨터 숫자: ");
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
				printf("컴퓨터 숫자: ");
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
				printf("※주의사항※\n");
				printf("무조건 숫자 5개만 입력해주세요.\n\n");
				pusent5(cnum);
				for(i=0; i<20; i++)
				{
					printf("%d번째 턴\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>99999)
					{
						printf("잘못 입력하셨습니다. 사용자의 숫자는 랜덤으로 정하겠습니다.\n");
						pusent5(num);
						printf("랜덤으로 지정된수: ");
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
						printf("컴퓨터 숫자: ");
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
				printf("컴퓨터 숫자: ");
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
				printf("아직 구현되지 않은 버전입니다.\n");
				Sleep(2000);
				system("cls");
				continue;
			}	
		}	
		else if(c==2)
		{
			printf("프로그램을 종료합니다.\n");
			Sleep(2000);
			return 0;
		}
		else
		{
			printf("잘못입력하셨습니다. 다시입력해주세요.\n");
			Sleep(1500);
			system("cls");
		}
	}
}
