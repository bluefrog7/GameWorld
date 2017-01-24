#include<windows.h>
#include<time.h>

//Coded by Zaumdongwha
int pusent3(int * cnum)
{
	int test;
	srand(time(NULL));
	*(cnum)=rand()%10;
	test=rand()%10;
	for(; test==*cnum; test=rand()%10);
	*(cnum+1)=test;
	for(; test==*(cnum+1); test=rand()%10);
	*(cnum+2)=test;
}
int pusent4(int * cnum)
{
	int test;
	srand(time(NULL));
	*(cnum)=rand()%10;
	test=rand()%10;
	for(; test==*cnum; test=rand()%10);
	*(cnum+1)=test;
	for(; test==*(cnum+1) || test==*cnum; test=rand()%10);
	*(cnum+2)=test;
	for(; test==*(cnum+2) || test==*(cnum+1) || test==*cnum; test=rand()%10);
	*(cnum+3)=test;
}
int pusent5(int * cnum)
{
	int test;
	srand(time(NULL));
	*(cnum)=rand()%10;
	test=rand()%10;
	for(; test==*cnum; test=rand()%10);
	*(cnum+1)=test;
	for(; test==*(cnum+1) || test==*cnum; test=rand()%10);
	*(cnum+2)=test;
	for(; test==*(cnum+2) || test==*(cnum+1) || test==*cnum; test=rand()%10);
	*(cnum+3)=test;
	for(; test==*(cnum+3) || test==*(cnum+2) || test==*(cnum+1) || test==*cnum; test=rand()%10);
	*(cnum+4)=test;
}
int pusent(int number, int * cnum)
{
	int * arr=(int *)malloc(number * sizeof(int));
	int i, j;
	
	srand(time(NULL));
	arr[0]=rand()%10;
	for(i=1; i<number; ++i)
	{
		while(1)
		{
			int cnt=0;
			arr[i]=rand()%10;
			for(j=0; j<i; j++)
			{
				if(arr[i] == arr[j])
					cnt++;
			}
			if(cnt == 0)
				break;
		}
	}
	
	for(i=0; i<number; i++)
		cnum[i] = arr[i];
}

//Coded by Bluefrog
void baseball(int number, int * Computer, int * Player, int * pStrike, int * pBall)
{
	int strike=0;
	int ball=0;
	int i, j;
	for(i=0; i<number; ++i)
	{
		if(Computer[i] == Player[i])
		{
			strike++;
		}
	}
	for(i=0; i<number; ++i)
	{
		for(j=0; j<number; ++j)
		{
			if(Computer[i] == Player[j])
			{
				ball++;
			}
		}
	}
	ball-=strike;
	*pStrike=strike;
	*pBall=ball;
}
