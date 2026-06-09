#include <stdio.h>
int main()
{
 struct Aluno{
 	int ra;
 	char nome[50];
 	float notafinal;
 }aluno[100];
 int i = 0;	
 int opcao;
 int totalaluno = 0;
 int ra;
 float soma = 0;
 float media = 0;
 while(1)
 {
 	printf("\n===== MENU =====\n");
 	printf("1 - Cadastrar aluno\n");
 	printf("2 - Listar alunos\n");
 	printf("3 - Buscar aluno\n");
 	printf("4 - Media da turma\n");
 	printf("5 - Sair\n");
 	printf("Opcao: ");
	 scanf("%d", &opcao);
	 switch(opcao){
 		case 1:
 		printf("1 - Cadastrar aluno\n");
 		if(totalaluno<100){
 				printf("\n Informe o nome do aluno :");
 				scanf("%s", aluno[totalaluno].nome);
 				printf("\n Informe o RA do aluno : ");
 				scanf("%d", &aluno[totalaluno].ra);
 				printf("\n Informe a nota final do aluno : ");
 				scanf("%f", &aluno[totalaluno].notafinal);
 				totalaluno++;
 			}
 			break;
 		case 2:
 			printf("opção 2");
 			if(totalaluno==0){
 				printf("\n Sem alunos cadastrados!");
 			}
 			else{
 				for(i=0;i<totalaluno;i++){
 					
 					printf("Nome dos alunos : %s\n", aluno[i].nome);
 					printf("Ra dos alunos : %d\n", aluno[i].ra);
 					printf("Nota dos alunos : %f\n", aluno[i].notafinal);
				 }
			 }
 			break;
 		case 3:
 			printf("opção 3");
 			if(totalaluno==0){
 				printf("Nenhum aluno cadastrado!");
 			}	
 			else{
 				printf("\n Informe o RA para a pesquisa : ");
 				scanf("%d", &ra);
 				for(i=0;i<totalaluno;i++){
 					if(aluno[i].ra==ra){
 						printf("Ra : %d", aluno[i].ra);
 						printf("Nome : %s", aluno[i].nome);
 						printf("Nota : %f", aluno[i].notafinal);	
					 }
				 }
			 }
 			break;
		 case 4:
 			printf("opção 4");
 			if(totalaluno==0){
 				printf("\n Nenhum aluno cadatrado!");
			 }
			 else{
			 	for(i=0;i<totalaluno;i++){
			 		soma+=aluno[i].notafinal;
				 }
				 media = soma / totalaluno;
				 printf("\n A media da turma é %.2f",media);
			 }
			break;
 		case 5:
			 printf("Encerrando...\n");
 			return 0;
 		default:
 		printf("Opcao invalida!\n");
		 }
 	}
}
