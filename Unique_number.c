#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[10],i,j=0,r,k,h=0;
    int t=n;
    i=0;
    //printf("%d",n);
    while (t)
    {
        r=t%10;
       // printf("%d ",r);
        a[i]=r;
        t=t/10;
        i++;
        j++;
    }
   /* printf("%d
",j);
    for(i=0;i<j;i++)
    {
       // printf("%d",a[i]);
    }*/
    i=0;
    k=1;

    for(i=0;i<j;i++)
    { 
        for(k=i+1;k<=j;k++)
        {
            if(a[i]==a[k] )
            {
                h=1;
             //   printf("%d  %d ",a[i],a[k]);
                break;
            }
            
            // printf(" check is %d for %d %d",h,a[i],a[k]);
            
        }
    }
   
   if(h==1)
    {
        printf("Not Unique Number
");
      
    }
    else
    {
        printf("Unique Number
");
    }
    
}