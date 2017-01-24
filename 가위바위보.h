#include<windows.h>
#include<time.h>

// Coded by Zaumdongwha
int probability()
{
	int num;
	srand(time(NULL));
	num=rand()%3+1;
	return num;
}

//Coded by Bluefrog
#include <string.h>
int convert(char * arr)		//가위는 1, 바위는 2, 보는 3, 다른 거는 0 반환		
{
	if(!strcmp(arr, "가위"))
		return 1; 
		
	else if(!strcmp(arr, "바위"))
		return 2;
	
	else if(!strcmp(arr, "보"))
		return 3;
	
	else
		return 0; 
}

//Coded by Bluefrog
int judge(int Player, int Computer)		//유저가 이기면 1을 반환, 지면 -1을 반환, 무승부는 0을 반환 
{
	if(Player == Computer)
	{
		return 0; 
	}
	
	else if(Player-Computer == 1)
	{
		 return 1;
	}
	
	else if(Player-Computer == -2)
	{
		return 1;
	}
	
	else
	{
		return -1;
	}
}
