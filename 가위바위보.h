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
int convert(char * arr)		//������ 1, ������ 2, ���� 3, �ٸ� �Ŵ� 0 ��ȯ		
{
	if(!strcmp(arr, "����"))
		return 1; 
		
	else if(!strcmp(arr, "����"))
		return 2;
	
	else if(!strcmp(arr, "��"))
		return 3;
	
	else
		return 0; 
}

//Coded by Bluefrog
int judge(int Player, int Computer)		//������ �̱�� 1�� ��ȯ, ���� -1�� ��ȯ, ���ºδ� 0�� ��ȯ 
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
