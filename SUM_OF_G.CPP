#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int range, firnum, ratio, i, j;
int t = 0;
printf("enter the first number");
scanf("%d", &firnum);
printf("enter the range");
scanf("%d", &range);
printf("enter the ratio difference between each term");
scanf("%d", &ratio);
printf("the numbers of the gp series are: /t");
for(i = 0 ; i < range; i++)
{
j = firnum;
printf("%d \t", j);
j = firnum * ratio;
firnum = j;
t = t + j;
}
printf("the sum of all numbers are: %d", t);
getch();
}