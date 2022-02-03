#include<stdio.h>
int main()
{    
    signed int i,r,rev=0;
    scanf("%d",&i);
    while (i != 0) 
    {
        r=i%10;
        rev=(rev*10+r);
        i /=10;
       
    }
    if(i==rev)
	{
		printf("%d",rev);
	}
	else
	{
		printf("%d",rev);
	}
    return 0;
}