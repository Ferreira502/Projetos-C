#include<stdio.h>
#include<math.h>

int main () {
    float n1,n2,n3,p1,p2,p3,media;
    printf("\nDigite a primeira nota: ");
    scanf("%f",&n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f",&n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f",&n3);
    printf("\nDigite o primeiro peso: ");
    scanf("%f",&p1);
    printf("\nDigite o segundo peso: ");
    scanf("%f",&p2);
    printf("\nDigite o terceiro peso: ");
    scanf("%f",&p3);
    media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("\n%.f",media);
}
