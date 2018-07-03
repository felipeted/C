#include <iostream>

int main(int argc, char *argv[]){
 
	int i, num=101, vencedor;//num = numero total de indices do vetor, i = 0 até num
	char nomes[0+num] [15];//vetor com 0 + (4) variaveis, pois o vetor precisa começar com um valor conhecido
	float forca[num], defesa[num], velocidade[num], ficha,maior;
	
	while((num>100)||(num<1)){
	printf("Digite o numero de personagens: \n");
	scanf("%i", &num);//o numero de vetores passou de (0+4) para (0+num)
	}
	
	for(i = 0; i < num ; i++){
		printf("\n\tPessoa %i: \n", i+1);
		printf("Nome: ");
		scanf("%s", &nomes[i]);//variavel (i) do vetor recebe...
		aqui:
		printf("Forca: ");
		scanf("%f", &forca[i]);//variavel (i) do vetor recebe...
		fflush(stdin);//se digitarem uma letra ou caractere indesejado ele limpa o dashboard
		if((forca[i]<0)||(forca[i]>100)){goto aqui;}//se for menor que 0 ou maior que 100 volta
		aqui2:
		printf("Defesa: ");
		scanf("%f", &defesa[i]);//variavel (i) do vetor recebe...
		fflush(stdin);//se digitarem uma letra ou caractere indesejado ele limpa o dashboard
		if((defesa[i]<0)||(defesa[i]>100)){goto aqui2;}//se for menor que 0 ou maior que 100 volta
		aqui3:
		printf("Velocidade: ");
		scanf("%f", &velocidade[i]);//variavel (i) do vetor recebe...
		fflush(stdin);//se digitarem uma letra ou caractere indesejado ele limpa o dashboard
		if((velocidade[i]<0)||(velocidade[i]>100)){goto aqui;}//se for menor que 0 ou maior que 100 volta
		
		ficha=((forca[i]*4.0)+(defesa[i]*4.0)+(velocidade[i]*1.0))/9.0;
		
		if((i==0)||(ficha>maior)){//se a variavel digitada for a primeira ou maior do que a anterior
			maior=ficha;//a variavel se torna a maior
			vencedor=i;//pega o indice do vencedor para pegar o indice do nome
		}
	}
	
	for(i = 0; i < num; i++){
		printf("\n\tPessoa %i", i+1);
		printf("\nNome: %s", nomes[i]);
		printf("\nForca: %.2f", forca[i]);
		printf("\nDefesa: %.2f", defesa[i]);
		printf("\nVelocidade: %.2f", velocidade[i]);
	}
	printf("\n\nVencedor: %s", nomes[vencedor]);//resgata no vetor nomes[] o indice (vencedor)
	printf("\nForca: %.2f", forca[vencedor]);//resgata o maior
	printf("\nDefesa: %.2f", defesa[vencedor]);//resgata o maior
	printf("\nVelocidade: %.2f", velocidade[vencedor]);//resgata o maior
 
  return 0;
}
