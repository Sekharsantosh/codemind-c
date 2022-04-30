#include<stdio.h>
int search(int *arr,int n,int se)
{
    for(int i=0;i<n;i++)
    {
      if(arr[i]==se)
      {
        return 1;
      }
    }
    return 0;

}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[100],i,se;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    if(search(arr,size,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}