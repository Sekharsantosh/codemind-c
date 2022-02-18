  #include<stdio.h>
  #include<math.h>
  int main()
  {
      int n,i;
      scanf("%d",&n);
      for(i=0;i<n/2;i++)
      {
          i=sqrt(n);
          if(n%i==0)
          {
              printf("True");
              break;
          }
          else
          {
              printf("False");
              break;
          }
      }
  }