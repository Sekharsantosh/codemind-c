#include<stdio.h>
int escape(int *a,int n)
{
	int i=0,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<n)
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
    int n;
    scanf("%d",&n);//5
    int a[n],i,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//5 5 5 5 4
    }
    if(escape(a,n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}