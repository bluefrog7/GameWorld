#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include"구구단.h"

int main()
{
	int number,number1,num,i,num1,num2,score,b,dan;
	score=0;
	char arr[10];
	while(1)
	{
		printf("구구단을 외자~ 구구단을 외자~ %15s\n\n","Ver.1.0");
		printf("<구구단이 나올때 랜덤으로 9번 나오며 3초안에 답을 입력하셔야합니다.>\n\n");
		printf("1.시작   2.종료\n");
		scanf("%d",&number);
		printf("\n");
		if(number==1)
		{
			printf("구구단을 시작합니다.\n");
			printf("3   ");
			Sleep(1000);
			printf("2   ");
			Sleep(1000);
			printf("1\n\n");
			Sleep(1000);
			for(i=1; i<=10; i++)
			{
				sent(&num1,&num2);
				printf("%d번째 문제\n",i);
				printf("%d * %d = ",num1,num2);
				dan=visibleBuffer(arr,3);
				num=arr[0]/10;
				num+=arr[1];
				printf("\n\n");
				if(num==num1*num2)
				{
					printf("정답입니다.\n");
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
					printf("시간초과입니다.\n");
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
					printf("오답입니다.\n");
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
			printf("종료되었습니다.\n");
			printf("당신은 %d번 맞췄습니다.\n",score);
			printf("계속하시겠습니까?\n");
			printf("1.계속  2.종료\n");
			while(1)
			{
				scanf("%d",&b);
				printf("\n");
				if(b==1)
				{
					printf("구구단을 계속합니다.\n");
					system("pause");
					system("cls");
					break;
				}
				else if(b==2)
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
					continue;
				}	
			}	
		}
		else if(number==2)
		{
			printf("프로그램을 종료합니다.\n");
			Sleep(2000);
			return 0;
		}
		else
		{
			printf("잘못 입력하셨습니다. 다시입력해주세요.\n");
			Sleep(1500);
			system("cls");
			continue;
		}
	}
}
