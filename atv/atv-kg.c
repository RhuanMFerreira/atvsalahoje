#include<stdio.h>

main(){

    int kg;
    char nome[20];

    printf("Digite o seu nome:");
    fgets(nome, 20, stdin);

    printf("\n Digite seus kg:");
    scanf("%d", &kg);

    if(kg >= 60){
        printf("%s, Voce tem mais kg que 60kg", nome);
        printf("\n Seus kilos e %d", kg);
    }else{
        printf("%s, voce tem menos que 60kg", nome);
    }

    printf("\ncontinua...");

}