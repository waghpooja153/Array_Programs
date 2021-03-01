#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
	int Arr[Size]={};
	int i=0;
	int Src_Ele=0,Ele_Cnt=0;
	
	printf("\n Enter Array Elements=\n\n");
	
	for(i=0;i<Size;i++)
	{
		printf("\n Enter Element[%d]=",i+101);
		scanf("%d",&Arr[i]);
	}
	
	for(i=0;i<Size;i++)
	{
		printf("\n Value of Element %d=%d",i+501,Arr[i]);
	}
	
	printf("\n\n Press any key to continue...");
	getch();
	system("cls");
	
	printf("\n Enter Element to Search in Array=");
	scanf("%d",&Src_Ele);
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]==Src_Ele)
		{
			Ele_Cnt++;
		}
	}
	
	printf("\n\n Count of element %d in given Array is =%d",Src_Ele,Ele_Cnt);
	
	printf("\n\n Thanks!!");
	
	getch();
	return 0;
}