#include<stdio.h>

main()
{

    int salario;
    char nome[20];

    printf("Digite o seu nome:");
    fgets(nome, 20, stdin);

    printf("\n Digite quanto voce ganha:");
    scanf("%d", &salario);

    if(salario >= 1320){
        printf("%s, Voce ganha mais que um salario minimo", nome);
        printf("\n Seu salario e %d", salario);
    }else{
        printf("%s, Voce ganha menos que um salario minimo", nome);
    }

    printf("\ncontinua...");

}