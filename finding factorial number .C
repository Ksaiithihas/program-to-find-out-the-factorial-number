#include <stdio.h>

void main()

{
    int a,n,result=1;
    
    printf("Please enter the number :");
    
    scanf("%d",&a);
    
    for(n=a;n>=1;n=n-1)
    {
         result =result*n;
       
    }
     printf("result=%d",result);
    
}
