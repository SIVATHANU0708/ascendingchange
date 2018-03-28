#include<stdio.h>
int main()
{
int n,i,a[10],flag=0;
printf("\nenter n number:");
scanf("%d",&n);
printf("\n the numbers are:");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
if(a[i]<a[i+1])
{
flag=0;
}
{
printf("%d",i+1);
}
}
return 0;
}
