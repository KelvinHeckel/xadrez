#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("Jogo de Xadrez\n\n");

    // Movimento peças Torre
    int casasTorre;
    char sentidoTorre;
    int t = 0;

    // Leitura do usuario em quantas vezes a torre vai andar
    printf("Selecione quantas casas a Torre vai andar:\n");
    scanf("%d", &casasTorre);

    getchar();

    // Leitura do usuario em qual o sentido a Torre vai andar
    printf("Selecione qual sentido a Torre vai andar(E para Esquerda, D para Direita, C para Cima e B para Baixo):\n");
    scanf("%c", &sentidoTorre);

    while (t < casasTorre)
    {
        if (sentidoTorre == 'D' || sentidoTorre == 'd')
        {
            printf("Direita\n");
        }
        else if (sentidoTorre == 'E' || sentidoTorre == 'e')
        {
            printf("Esquerda\n");
        }
        else if (sentidoTorre == 'C' || sentidoTorre == 'c')
        {
            printf("Cima\n");
        }
        else if (sentidoTorre == 'B' || sentidoTorre == 'b')
        {
            printf("Baixo\n");
        }

        else
        {
            printf("Sentido invalido\n");
            break;
        }
        t++;
    }

    // Movimento peças Bispo

    int casasBispo;
    char sentidoBispo;
    int b = 0;

    // Leitura do usuario em quantas casas o Bispo  vai andar
    printf("Selecione quantas casas o Bispo vai andar:\n");
    scanf("%d", &casasBispo);

    getchar();

    // Leitura do usuario em qual o sentido que o Bispo vai andar
    printf("Selecione qual sentido o Bispo vai andar(E para Esquerda e D para Direita):\n");
    scanf("%c", &sentidoBispo);

    while (b < casasBispo)
    {
        if (sentidoBispo == 'D' || sentidoBispo == 'd')
        {
            printf("Cima-Direita\n");
        }
        else if (sentidoBispo == 'E' || sentidoBispo == 'e')
        {
            printf("Cima-Esquerda\n");
        }
        else
        {
            printf("Sentido invalido\n");
            break;
        }
        b++;
    }

    // Movimento peças Rainha

    int casasRainha;
    char sentidoRainha;
    int r = 0;

    // Leitura do usuario em quantas vezes a Rainha vai andar
    printf("Selecione quantas casas a Rainha vai andar:\n");
    scanf("%d", &casasRainha);

    getchar();

    // Leitura do usuario em qual o sentido a Rainha vai andar
    printf("Selecione qual sentido a Rainha vai andar(E para Esquerda, D para Direita, C para Cima, B para Baixo, 1 para Cima-Direita, 2 para Cima-Esquerda, 3 para Baixo-Direita, 4 para Baixo-Esquerda ):\n");
    scanf("%c", &sentidoRainha);

    do
    {
        if (sentidoRainha == 'D' || sentidoRainha == 'd')
        {
            printf("Direita\n");
        }
        else if (sentidoRainha == 'E' || sentidoRainha == 'e')
        {
            printf("Esquerda\n");
        }
        else if (sentidoRainha == 'C' || sentidoRainha == 'c')
        {
            printf("Cima\n");
        }
        else if (sentidoRainha == 'B' || sentidoRainha == 'b')
        {
            printf("Baixo\n");
        }
        else if (sentidoRainha == '1')
        {
            printf("Cima-Direita\n");
        }
        else if (sentidoRainha == '2')
        {
            printf("Cima-Esquerda\n");
        }
        else if (sentidoRainha == '3')
        {
            printf("Baixo-Direita\n");
        }
        else if (sentidoRainha == '4')
        {
            printf("Baixo-Esquerda\n");
        }
        else
        {
            printf("Sentido invalido\n");
            break;
        }
        r++;
    } while (r < casasRainha);

    // Movimento peças Cavalo

    char sentidoHorizontal, sentidoVertical;
    int c = 1;

    // Leitura do usuario em qual sentido o Cavalo vai andar
    printf("Selecione se o Cavalo vai para Cima ou para Baixo (C para Cima e B para Baixo)\n");
    scanf(" %c", &sentidoVertical);

    getchar();

    // Leitura do usuario em qual sentido o Cavalo vai andar
    printf("Selecione se o Cavalo vai para a Esquerda ou para Direita (E para Esquerda e D para Direita)\n");
    scanf(" %c", &sentidoHorizontal);

    for (int c = 0; c < 2; c++)
    {
        if (sentidoVertical == 'C' || sentidoVertical == 'c')
        {
            printf("Cima\n");
        }
        else if (sentidoVertical == 'B' || sentidoVertical == 'b')
        {
            printf("Baixo\n");
        }
        else
        {
            printf("Sentido invalido\n");
        }
    }

    if (sentidoHorizontal == 'E' || sentidoHorizontal == 'e')
    {
        printf("Esquerda\n");
    }
    else if (sentidoHorizontal == 'D' || sentidoHorizontal == 'd')
    {
        printf("Direita\n");
    }
    else
    {
        printf("Sentido invalido\n");
    }


    printf("Fim de jogo\n");

    return 0;
}
