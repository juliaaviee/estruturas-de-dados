#include <stdio.h>

int main()
{
int i;
float numeros[5];
printf("Digite cinco numeros reais; \n");

for (i=0; i<5; i++) {
    printf("Informe o %i. numero: ", i+1);
    scanf("%f", &numeros[i]);
}
printf("\n Os numeros digitados foram:");
while (i>0) {
    i-=1;
    printf("%0.2f",numeros[i]);
}
}

/*saída: Digite cinco numeros reais; 
Informe o 1. numero: 1
Informe o 2. numero: 2
Informe o 3. numero: 3
Informe o 4. numero: 4
Informe o 5. numero: 5

 Os numeros digitados foram:5.004.003.002.001.00*/
