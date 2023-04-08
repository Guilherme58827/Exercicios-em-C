#include <stdio.h>

int main()
{
    printf(" Bem vindo a calculadora\n");
    
    int pesoT, pesoA, pesoE;
    float media, nt, as, ef;
    
    printf("digite o trabalho: ");
    scanf("%f",&nt);
    
    printf("digite a avaliaçao semestral: ");
    scanf("%f",&as);

    
    printf("digite o exame final: ");
    scanf("%f",&ef);
    
    pesoT = 2;
    pesoA = 3;
    pesoE = 5;
    
    media = ((nt * pesoT)+(as * pesoA)+(ef*pesoE)) /10;
    
    if (media>=8 && media <=10) 
     {
    printf ("conceito A\n") ;
    }
    
    if (media>=7 && media < 8){
    printf ("conceito B\n") ;
    }
    if (media >= 6 && media < 7){
    printf("conceito C\n") ;
    }
    
    if (media>= 5 && media < 6){
    printf ("conceito D\n") ;
    }


    if (media>= 0 && media < 5){
    printf ("conceito E\n") ;
    }
    
    printf ("media foi : %.2f", media);
    
    

    return 0;
}
