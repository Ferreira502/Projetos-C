#include<stdio.h>

int main (){
    int num,valor=1;
    scanf("%d",&num);

    for(int i=2; i<=num/2;i++){
        if((num % i)==0){
            valor=0;
        }

    }if(valor==1){
        printf("\nPrimo");
    }
    else{
    printf("\nNao primo");
    }
}
