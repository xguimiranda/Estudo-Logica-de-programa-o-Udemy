#include <stdio.h>

int main()
{

    double lar, compri, area, pt, pterr;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &lar);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &compri);
    printf("Digite o pre�o do metro quadrado: ");
    scanf("%lf", &pterr);

    area = lar*compri;
           pt= pterr * area;

    printf("Area do terreno: %.2lf\n", area);
    printf("Pre�o do terreno: %.2lf\n", pt);

    return 0;
    }
