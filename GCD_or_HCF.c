#include<stdio.h>
int main()
{
	int n,m,i,gcd=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	{
		if(n%i==0 && m%i==0)
		{
			gcd=i;
		}
	}
	printf("%d",gcd);
	
}