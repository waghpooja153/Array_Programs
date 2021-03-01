#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7
int main()
{

    int Arr[Size]={};
    int i=0;
    int E_Cnt=0,O_Cnt=0,Z_Cnt=0;

    printf("\nEnter Array Elements =>\n\n");

    for(i=0;i<Size;i++)
    {
        printf("\nEnter Element %d => ",i+101);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<Size;i++)
    {
        printf("\nValue of Element %d=%d",i+101,Arr[i]);
    }

    printf("\n\nPress Any Key to Continue");
    getch();
    system("cls");

    for(i=0;i<Size;i++)
    {
        if(Arr[i]==0)
        {
            Z_Cnt++;
        }
         if(Arr[i]%2==0)
        {
            E_Cnt++;
        }
         if(Arr[i]%2!=0)
        {
            O_Cnt++;
        }
    }
    printf("\nCount of Zero Elements %d in Given Array",Z_Cnt);
    printf("\nCount of Even Elements %d in Given Array",E_Cnt);
    printf("\nCount of Odd Elements %d in Given Array",O_Cnt);
    printf("\n\nPress any Key to continue");

    getch();
    return 0;
}