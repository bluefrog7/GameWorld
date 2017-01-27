#include<stdio.h>
#include<stdlib.h>
#include"숫자야구.h"
int main()
{
	int b,B,c;
	while(1)
	{
		int j=0, strike=0, ball=0, i=0, k;
		int *num, *cnum;
		printf("숫자 야구(투수관점)%15s\n","Ver.1.0");
		printf("게임 룰\n");
		printf("1.숫자만 일치할경우 1개당 1볼\n");
		printf("2.숫자와 자리가 일치할경우 1개당 1스트라이크\n");
		printf("3.사용자 숫자가 컴퓨터 숫자와 일치하면 끝\n\n");
		printf("%20s    %20s\n","1.시작","2.종료");
		scanf("%d",&c);
		if(c==1)
		{
			printf("몇자리 숫자를 하실지 골라주세요. (현재구현된 버전:3,4,5)\n");
			printf("-->");
			scanf("%d",&b);
			num=(int *)malloc(b*sizeof(int));
			cnum=(int *)malloc(b*sizeof(int));
			if(b<3 || 5<b)
			{
				printf("아직 구현되지 않은 버전입니다.\n");
				Sleep(2000);
				system("cls");
			}
			
			else
			{
				printf("※주의사항※\n");
				printf("무조건 숫자 %d개만 입력해주세요.\n\n", b);
				pusent(b,cnum);
				for(i=0; i<20; i++)
				{
					printf("%d번째 턴\n",i+1);
					printf("-->");
					scanf("%d",&j);
					if(j<0 || j>=tenSquare(b))
					{
						printf("잘못 입력하셨습니다. 사용자의 숫자는 랜덤으로 정하겠습니다.\n");
						pusent(b,num);
						printf("랜덤으로 지정된수: ");
						for(k=0; k<b; ++k)
							printf("%d",num[k]);
							
						printf("\n");
					}
					else
					{
						B=b;
						for(k=0; k<(b-1); ++k)
						{
							num[k]=j/tenSquare(B-1);
							j-=num[k]*tenSquare(B-1);
							B--;
						}
						num[b-1]=j;
					}
					baseball(b,cnum,num,&strike,&ball);
					if(strike==b)
					{
						printf("out\n");
						printf("컴퓨터 숫자: ");
						for(k=0; k<b; ++k)
							printf("%d",cnum[k]);
						
						printf("\n");
						free(cnum);
						free(num);
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
				for(k=0; k<b; ++k)
					printf("%d",cnum[k]);
				
				printf("\n");
				free(cnum);
				free(num);
				system("pause");
				system("cls");
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
