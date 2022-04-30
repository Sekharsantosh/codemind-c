#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    int avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    int flag=0;
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1){
    	printf("True");
	}
	else
	{
		printf("False");
	}
}