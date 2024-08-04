// CONCATENAR VETORES FEITO POR GABRIEL FERREIRA PEREIRA

#include<stdio.h>
#include<stdlib.h>

int main () {
    int n=0,m=0;

    scanf("%d %d",&n,&m);

    int *a;
    int *b;

    a=(int *)malloc(n * sizeof(int));
    b=(int *)malloc(m * sizeof(int));

    if(a==NULL || b == NULL){
        printf("SEM ESPACO NA MEMORIA");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int *c;

    c=(int *)malloc((n+m) * sizeof(int));

    if (c==NULL)
    {   
        printf("SEM ESPACO NA MEMORIA");
        return 1;
    }
    

    for (int i = 0; i < n; i++)
    {
        c[i]=a[i];
    }

    for (int i = 0; i < m; i++)
    {
        c[n+i]=b[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", c[i]);
    }
    
    printf("\n");

    free(a);
    free(b);
    free(c);

    return 0;
}