#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nota1 = 10, nota2= 10;
	float media;
	media= (nota1 + nota2)/2;
	printf("%s",(media >= 0 && media <= 9)?"Reprovado":"Aprovado");
    return 0;
}