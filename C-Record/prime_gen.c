/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int Is_prime(int n){
    int flag=0;
     for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return 1;
    }
    else{
        return 2;
        
    }
}

int gen_prime(int n){
    int i,p;
    for(i=2;i<n;i++){
        p=Is_prime(i);
        if(p==1){
            printf("%d ",i);
        }
    }
}

int main()
{
    int n,p;
    printf("Enter a number:");
    scanf("%d",&n);
    p=gen_prime(n);
   

    return 0;
}
