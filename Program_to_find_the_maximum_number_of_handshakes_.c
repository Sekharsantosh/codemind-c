#include<stdio.h>
int main()
{
    int n ,handshakes;
    scanf("%d",&n);//15
    handshakes=(n*(n-1))/2;//15815-1/2
    printf("%d",handshakes);
    return 0;
}