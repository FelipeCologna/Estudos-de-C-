#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	float temp[7];
	float tempinversa[7];
	float media;
	int dias; 
	
	for(i=0; i<7; i++){
		printf("Digite as temperaturas dos dias da semana :\n");
		scanf("%f", &temp[i]);
	}
	
	printf("\n\n===Temperaturas dos dias da semana===\n");
	for(i=0; i<7; i++){
		printf("\n Valores dos dias da semana: %.2f", temp[i]);
	}
	
	for(i=0; i<7; i++){
		media += temp[i];
	}
	media = media / 7; 
	printf("\n\n A media da temperatura semanal e de : %.2f", media);
	
	for(i=0; i<7; i++){
		if(temp[i] > media){
			dias++;
		}
	}
	printf("\n Dias acima da media : %d", dias);
	
	for(i=0; i<7; i++){
		tempinversa[i] = temp[(7-1) -i];
		printf("\n\n Os valores inversos sao : %f", tempinversa[i]);
	}
	
	return 0;
}
