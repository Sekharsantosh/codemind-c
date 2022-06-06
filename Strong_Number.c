#include<stdio.h>
int strong(int m)
{
    int i,s=1,k=0;
    for(i=m;i>0;i--)
    {
        s=s*i;
    }
    return s;
}
int main()
{
    int n,t,r,j=0,i,s=1,k=0;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        j=j+strong(r);
        t=t/10;
    }
    if (n==j)
    {
    	printf("The number %d is a strong number",n);
	}
    else
    {
    	printf("The number %d is not a strong number",n);
	}
   
}