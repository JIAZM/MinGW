#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

DWORD WINAPI ThreadProc(LPVOID lpParameter);

DWORD WINAPI ThreadProc1(LPVOID lpParameter);
static int i;
static int j;
int main()
{
	HANDLE hthd;
	HANDLE htd2;
	//static int i=0;
	
	
	hthd=CreateThread(NULL,0,&ThreadProc,&i,0,NULL);
	if(j==1)
	{
		//htd2=CreateThread(NULL,0,&ThreadProc1,&hthd,0,NULL);
	}

	if(WAIT_TIMEOUT== WaitForSingleObject(hthd,5000))
	{
		printf("error\n");
		return 0;
	}
	printf("%d\n",i);

	//ThreadProc(0);


	system("pause");
	return 0;
}

DWORD WINAPI ThreadProc(LPVOID lpParameter)
{
	
	scanf("%d",&i);

	

	return 1;
}

DWORD WINAPI ThreadProc1(LPVOID lpParameter)
{
	HANDLE hd;
	hd=lpParameter;
	if(WAIT_TIMEOUT==WaitForSingleObject(hd,5000))
	{
		printf("no cin\n");
	}
	else
	{
		printf("%d\n",i);
	}

	
	
	return 1;
}