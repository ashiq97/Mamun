scsa
//Uva 10931
#include <stdio.h>
int main ()
{
    int i, j,num,count;

    while(scanf("%d",&num))
    {
        if(num == 0)
        {
            return 0;
        }
    i = 0;
    count = 0;
    int res[num/2];
    while(num != 0)
    {
        res[i] = num % 2;
        if(res[i] == 1)
        {
            count++ ;
        }
        num = num / 2;
        i++;

    }

   printf("The parity of ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",res[j]);
    }
    printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
