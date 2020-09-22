#include <stdio.h>

int main()
{
    int condicao = 0;

    /* sintaxe basica */
    if (condicao) // se condicao for verdadeira entao
    {
        printf("%s\n", "passei aqui");
        printf("%s\n", "passei aqui");
    }

    /* somente um comando */
    if (!condicao) // condicao != 0 // 0 é falso e 1 é verdadeiro
        printf("%s\n", "passei aqui");

    /* sintaxe completa */
    if (condicao)
    {
        printf("%s\n", "de boas");
    }
    else
    {
        printf("%s\n", "deu ruim");
    }

    /* if-else-if */
    float nota = 10.0;

    if (nota >= 5)
    {
        printf("%s\n", "aprovado");
    }
    else if (nota >= 1)
    {
        printf("%s\n", "recuperacao");
    }
    else
    {
        printf("%s\n", "reprovado");
    }

    printf("%s\n", "---------");

    if (nota > 5)
    {
        printf("%s\n", "aprovado");
    }

    if (nota > 1 && nota < 5)
    {
        printf("%s\n", "recuperacao");
    }

    if (nota < 1)
    {
        printf("%s\n", "reprovado");
    }

    /* ifs aninhados = if dentro de if */
    float falta = 75;
    if (nota >= 5)
    {
        if (falta >= 75)
        {
            printf("%s\n", "aprovado");
        }
        else
        {
            printf("%s\n", "reprovado por falta");
        }
    } else if (nota >= 1) {
        if (falta >= 75)
        {
            printf("%s\n", "recuperacao");
        }
        else
        {
            printf("%s\n", "reprovado por falta");
        }
    } else {
        printf("%s\n", "reprovado por nota");
    }
 
//    if (nota >= 5)
//         if (falta >= 75)
///    equivale
//     if (nota >=5 && falta >= 75) // aprovado
//

    return 0;
}
