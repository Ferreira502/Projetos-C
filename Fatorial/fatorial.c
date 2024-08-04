#include<stdio.h>

int main () {
    int numero;
    int i=1;

    scanf("%d",&numero);

    for(; numero > 1; numero=numero-1){
        i=i*numero;
    }
     printf("%d",i);
}