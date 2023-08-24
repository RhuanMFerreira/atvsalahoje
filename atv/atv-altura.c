#include<stdio.h>

main(){

    int altura;
    char nome[20];

    printf("Digite o seu nome:");
    fgets(nome, 20, stdin);

    printf("\n Digite sua altura:");
    scanf("%d", &altura);

    if(altura >= 180){
        printf("%s, Voce e mais alto que 180", nome);
        printf("\n Sua altura e %d", altura);
    }else{
        printf("%s, Voce tem menos que 180", nome);
    }

    printf("\ncontinua...");

}