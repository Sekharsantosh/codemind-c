#include<stdio.h>
int is_prime(int n)
{
	if(n==1)
	{
		return 0;
	}
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void primes_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{

	if(is_prime(i)==1)
	{
		printf("%d",i);
	}
   }
}
void composites_in_a_range(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(is_prime(i)==0)
		{
			printf("%d",i);
		}
	}
}
void main()
{
	int choice;
	printf("enter your choice:\n");
	printf("1.primality check\n");
	printf("2. primes in a range\n");
	printf("3. composites in a range\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		int z;
		printf("enter your primality number:");
		scanf("%d",&z);
		if(is_prime(z)==1)
		{
			printf("prime");
		}
		else
		{
			printf("not prime");
		}
	}
	else if(choice==2)
	{
		int x,y;
		printf("enter range");
		scanf("%d%d",&x,&y);
		primes_range(x,y);
	}
	else if(choice==3)
     {
     	int m,n;
     	printf("enter range");
     	scanf("%d%d",&m,&n);
     	composites_in_a_range(m,n);
     }
 } 
