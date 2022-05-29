#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int k;
    scanf("%s",ch);
    k=strlen(ch);
    if (k==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}