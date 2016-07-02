#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,j,b=0,c=0;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
while(b>4)
{
c=b+a[b];
b=c;
}
if(b==4)
printf("true");
else
printf("False");
getch();
}
