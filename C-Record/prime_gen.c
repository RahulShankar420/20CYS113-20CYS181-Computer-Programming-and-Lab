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
