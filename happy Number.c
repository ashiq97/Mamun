#include <stdio.h>
//int result(int num);
int main ()
{
    int n,digit,number,sq,res,count=0,test_number,i;

    scanf("%d",&test_number);
    for(i = 1; i<= test_number;i++)
    {
        scanf("%d",&number);

    if( number < 10 )
    {
        res = number * number;

    }
    else{
        res = number;
    }
   while(res >= 10 )
    {
        n = res;
        res = 0;
        sq = 0;
        while(n!=0)
        {
            digit = n % 10;
            res = res+digit;
            sq = sq + (digit * digit);

            n = n / 10;
            // n = sq;
            count ++;
        }
     //   printf("%d\n",sq);
        if(sq >= 10)
        {
            res = sq;
        }
       // result(sq);
       // res = sq;
    }
    if(sq == 1)
    {
        printf("Case #%d: %d is a Happy number.\n",i,number);

    }
    else {
         printf("Case #%d: %d is an Unhappy number.\n",i,number);
    }
   // printf("%d\n",res);
   // printf("%d\n",sq);
   // printf("%d",count);
}

    return 0;
}


