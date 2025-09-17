#include <stdio.h>

void situacao(float media, int freq)
{
   if (freq < 75){
   printf("Reprovado");}
    if (media >= 7.5){
   printf("Aprovado");}
   else{
   	printf("Exame");
   }
}
	
int main()
{
	float media;
	int freq;
	
	printf("Digite sua media: ");
	scanf("%f", &media);
	
	printf("Digite sua frequencia: ");
	scanf("%d", &freq);
	
	situacao(media, freq);
	
	return 0;
}

