#include<stdio.h>
int main()
{  int arr1[2][3]={12,89,49,60,38,68};
   int arr2[1][2]={45,76};
   int i,j,sum=0;
   for(i=0;i<2;i++)
   {
    for(j=0;j<3;j++)
    {
       sum+=arr1[i][j];
       if(i<1&&j<2)
       {
        sum+=arr2[i][j];
       }
    }
   }
  printf("sum of both arrays= %d",sum);
  printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
}
