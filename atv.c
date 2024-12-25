#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, j, k=0, N_Amostra, Menor=1000, Maior=0;
	int Altura[100];
	float SomaTotal=0, MediaTotal=0, SomaAmostra=0, MediaAmostra=0, value;
	
	srand(time(NULL));
	
	printf("Digite o tamanho da amostra: ");
	scanf(" %i",&N_Amostra);
	system("cls");
	
	for(i=0;i<100;i++){
		/*value = (rand()%2000)-1000;
		if(value>0){
			Altura[i]=170+(sqrt(value));
		}
		else{
			Altura[i]=170-(sqrt(-value));
		}*/
		
		Altura[i]=170+sqrt(rand()%1000)-sqrt(rand()%1000);
		
		
		
		SomaTotal+=Altura[i];
		if(Altura[i]<Menor){
			Menor=Altura[i];
		}
		else if(Altura[i]>Maior){
			Maior=Altura[i];
		}
	}
	
	for(i=0;i<N_Amostra;i++){
		SomaAmostra+=Altura[1+rand()%100];
	}
	
	printf("Alturas em ordem crescente:\n");
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			if(Altura[i]<Altura[j]){
				k = Altura[i];
				Altura[i] = Altura[j];
				Altura[j] = k;	
			}
		}
	}
	
	for(i=0;i<100;i++){
		printf("%i ", Altura[i]);
	}
	
	MediaTotal=SomaTotal/100;
	MediaAmostra=SomaAmostra/N_Amostra;
	
	printf("\n\nMaior aluno: %i\n\n",Maior);
	printf("Menor aluno: %i\n\n",Menor);
	printf("Media Populacao (100): %f\n\n",MediaTotal);
	printf("Media Amostra (%i): %f\n\n",N_Amostra,MediaAmostra);
	
	return 0;
}
