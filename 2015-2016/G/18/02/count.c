#include <stdio.h>
int main()
{
int n,i=0,a,p=0,l=0,j;
int k[100];
printf("\nEnter N: ");
scanf("%d",&n);
while(n!=0)
{
k[i]=n%10;
n=n/10;
i++;
}
i=i-1;
j=i;
a=j;
while(i>=0)
{
l=0;
a=j;
while(a>=0)
{
if(k[p]==k[a]){
l++;}
a--;
}
printf("\n %d se sreshta %d put(i). ", k[p], l);
i--;
p++;
}
return 0;
}
