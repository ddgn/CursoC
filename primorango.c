#include <stdio.h>

main()
{
int a=0,i,j,max,min=2;
printf("Cual es tu limite: ");
scanf("%d",&max);
                 for (i=2;i<=max;i++)
                 {
                      a=0;
                      for (j=1;j<=i;j++)
                      {
                          if (i%j==0)
                          {
                             a=a+1;
                          }
                     }
                     if (a==2)
                        {
                     printf("%d es primo\n",i);
                     }
                 }
                 getch();
}
