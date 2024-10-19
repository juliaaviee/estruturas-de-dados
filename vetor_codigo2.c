#include <stdio.h>

int main()
{
int i, vetor[11];
vetor[0]=1;
vetor[1]=1;

for (i=2; i<=10; i++) 
    vetor[i] = vetor[i-1] + vetor[i-2];
printf("Resultado:");
for (i=1; i<=10; i++)
    printf("%i", vetor[i]);
}

//saída: Resultado:123581321345589
