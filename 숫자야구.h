#include<windows.h>
#include<time.h>

//Coded by Zaumdongwha
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

int tenSquare(int num)		//10의 num승을 반환하는 함수; 
{
	int i, total=1;
	for(i=0; i<num; ++i)
		total*=10;
	
	return total;
}
