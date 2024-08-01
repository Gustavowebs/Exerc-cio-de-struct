#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia, mes, ano;
};

int main() {
    struct Data data1, data2;
    int dias_total, dias1, dias2;

    printf("Digite a primeira data, dia mes ano: ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data, dia mes ano: ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    dias1 = data1.ano * 365 + data1.dia;
    dias2 = data2.ano * 365 + data2.dia;

    for (int i = 1; i < data1.ano; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            dias1++;
        }
    }
    for (int i = 1; i < data2.ano; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            dias2++;
        }
    }
    dias_total = dias2 - dias1;
    printf("Numero de dias entre as datas: %d\n", dias_total);

    return 0;
}
