#include <stdio.h>

int main() {

    printf("***DESAFIO XADREZ NOVATO***");

    int i =1;
//move a torre para a direita 5 casas
for (int i=0;i<5; i++)
{
   printf("Direita\n");
}

//move o  para diagonal esquerda 5 casas

while (i < 5)
{
    printf("Esquerda cima\n");
    i++;
}
// move a rainha 8 casas para frente
do
{
    printf("Frente\n");
    i++;
} while (i < 13);

return 0;

}
