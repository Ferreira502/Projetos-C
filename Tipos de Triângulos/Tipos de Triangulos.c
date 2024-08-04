#include<stdio.h>
#include<math.h>

int main () {
    int a,b,c,resultado;
    printf("\nDigite o valor de a:");
    scanf("%d",&a);
    printf("\nDigite o valor de b:");
    scanf("%d",&b);
    printf("\nDigite o valor de c:");
    scanf("%d",&c);


    if ((a<b+c)&&(b<a+c)&&(c<a+b)){
        if ((a==b)&&(b==c)) {
            printf("\nE um triangulo equilatero");
        } else {
            if((a!=b)&&(b!=c)&&(a!=c)){
                printf("Escaleno");
            }else {
                printf ("isosceles");
            }
        }
    } else {
        printf("\nNao e um triangulo");
    }
}


