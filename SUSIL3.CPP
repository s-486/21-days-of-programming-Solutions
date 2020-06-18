#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,r,value,i;
float sum=0;

printf("ENTER THE FIRST NUMBER FOR YOUR g.p :");
scanf("%d", a);
printf("Enter the total number of terms in the G.P :");
scanf("%d", n);
printf("Enter the common ratio for your G.P :");
scanf("%d", r);

value=a;
printf("G.P. series : ");
for(i=0; i<n; i++)
{
printf("%d", value);
sum=sum + value;
value=value * r;
}
printf("The sum of the geometrric progression series = %f\n", sum);
return 0;
}







