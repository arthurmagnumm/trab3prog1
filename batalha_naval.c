#include<stdio.h>
#include<stdlib.h>
int main(){
    int mapa [5][5] = {{0,1,1,0,1},
						{1,1,1,1,0},
						{1,0,0,0,1},
						{0,0,1,1,0},
						{1,0,1,0,1}};
    char controle[5][5];
    int i, j;
    int score =0;
    
    for(i=0; i<5; i++){
             for(j=0; j<5; j++){
                      controle[i][j] = '.';
                      printf("%c  ", controle[i][j]);
             }
             printf("\n");
    }
    
    printf("Informe as coordenadas do tiro (linha | coluna): ");
    scanf("%d %d", &i, &j);
    
    while(i>-1 && j>-1){
               if(mapa[i][j] == 1)
               {
                    controle[i][j] = 'X';
                    score +1;
               }
               else
               {
                    controle[i][j] = 'O';
               }
               for(i=0; i<5; i++)
               { 
                    for(j=0; j<5; j++)
                    {
                        printf("%c  ", controle[i][j]);
                    }
                        printf("\n");
               }
                printf("voce acertou %d\n", score);
                printf("Informe as coordenadas do tiro (linha coluna): ");
                scanf("%d %d", &i, &j);
    }
    
    system("pause");
return 0;
}