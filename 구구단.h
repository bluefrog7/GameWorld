#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void sent(int *num1,int *num2)
{
	srand(time(NULL));
	*num1=rand()%9+1;
	*num2=rand()%9+1;
}


//Coded by BLuefrog
#include <time.h>
#include <stdio.h>
#include <conio.h>

int visibleBuffer(char * arr, double timeLimit)
{
	
	int ch;
	int i;
	clock_t a, b;
	a=clock();
	for(i=0; 1; ++i)
	{
		for(; kbhit() == 0; )
		{
			b=clock();
			if((double)(b-a)/1000 >= timeLimit)
				return 1;
			//printf("%lf\n", (double) (b-a)/1000);
		}
		ch = getche();
		if(ch == 13)
			break;
			
		else if(ch == 32)
		{
			printf("\b");
			i--;
		}
		
		else if(ch == 8)
		{
			printf(" ");
			arr[i-1] = ' ';
			arr[i] = '\0';
			i--;
		}
		
		else
			arr[i] = ch;
	}
	printf("\n");
	arr[i] = 0;
	
	return 0;
}

