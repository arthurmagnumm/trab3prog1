/**************************************
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Arthur Magnum Porto dos Santos - matricula: 0050013432 
* Professor: Alex Salgado 
***************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int mapa [6][6] = { {0,0,0,0,0,0},
	                    {0,0,1,1,0,1},
						{0,1,1,1,1,0},
						{0,1,0,0,0,1},
						{0,0,0,1,1,0},
						{0,1,0,1,0,1}};
	int i, j;
	char controle[6][6];
	int continuar = 1;
	int score = 0;
	char nome[100];
	
    printf("Olá! Digite seu nome:");
    scanf("%s", nome);
    
        for(i=1; i<6; i++){
             for(j=1; j<6; j++){
                      controle[i][j] = '.';
                      printf("%c  ", controle[i][j]);
             }
             printf("\n");
    }
    
    //primeira vez obrigatória de jogar
   
   
    printf("\nEntre com a linha:  ");
    scanf ("%d", &i);
    printf("\nEntre com a Coluna:  ");
    scanf("%d", &j);
    if(mapa[i][j] == 1)
    {
        controle[i][j] = 'X';
        score ++;
        printf("Bomba!!\n");
        printf("Seu score atual é de %d ponto(s)\n", score);
    	printf("Deseja Continuar? 1 = Sim / 0= Não:");
    	scanf("%d", &continuar);
        
    }
    else
    {
        controle[i][j] = 'O';
        printf("Agua!!, que pena\n");
        printf("Seu score atual é de %d ponto(s)\n", score);
    	printf("Deseja Continuar? 1 = Sim / 0= Não:");
    	scanf("%d", &continuar);
    }
    for(i=1; i<6; i++)
        { 
            for(j=1; j<6; j++)
            {
                printf("%c  ", controle[i][j]);
            }
            printf("\n");
        }
            
   //Começa o loop    
   while(continuar ==1)
   {
            printf("\nEntre com a linha:  ");
            scanf ("%d", &i);
            printf("\nEntre com a Coluna:  ");
            scanf("%d", &j);
            if(mapa[i][j] == 1)
            {
                controle[i][j] = 'X';
                score ++;
                printf("Bomba!!\n");
                printf("Seu score atual é de %d ponto(s)\n", score);
            	printf("Deseja Continuar? 1 = Sim / 0= Não:");
            	scanf("%d", &continuar);
                
            }
            else
            {
                controle[i][j] = 'O';
                printf("Agua!!, que pena\n");
                printf("Seu score atual é de %d ponto(s)\n", score);
            	printf("Deseja Continuar? 1 = Sim / 0= Não:");
            	scanf("%d", &continuar);
            }
            for(i=1; i<6; i++)
                { 
                    for(j=1; j<6; j++)
                    {
                        printf("%c  ", controle[i][j]);
                    }
                    printf("\n");
                }
                    
            
            
            
   }
   printf("Essas foram suas jogadas!\n\n");
   printf("%s, você fez %d ponto(s)!!!\n\nObrigado por Jogar\n\n",nome, score);
	return 0;
}