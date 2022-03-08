#include<stdio.h>
#include<math.h>
#include<stdlib.h>
    int primecheck(int n)
    {
        int flag=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;}}
          if(flag==0)
            return 1;
            else
                return 0;


            }

    int plaindromecheck(int n)
    {       int reversed=0,temp;
            int k=n;
            while(k!=0)
            {   temp=k%10;
                reversed=reversed*10+temp;
                k=k/10;

                 }
         if(n==reversed)
            return 1;

         return 0;

            }



    int main()
    {
        int n,min,number;
        printf("Enter the number:");
        scanf("%d",&n);
        min=abs(n-2);
        for(int i=2;i<=n+2000;i++)
        {
           if(primecheck(i)&& plaindromecheck(i))
            {
                if(abs(n-i)<min){
                        min=abs(n-i);
                        number=i;
           }}
        }


    printf("The prime number closet to number entered which is also a plaindrome is:%d\n",number);


    }


