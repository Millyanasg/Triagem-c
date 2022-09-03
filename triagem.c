#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//Algoritmo por Millyana de Souza Silva.

int soma;
int ponto5 = 5;
int ponto10 = 10;
int ponto3 = 3;
int ponto1 = 1;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("=====================================\n");
	printf("==TRIAGEM DE CLASSIFICAÇÃO DE RISCO==\n");
	printf("=====================================\n\n");
//              Ficha do Paciente	
	printf("Preencha seus dados abaixo:\n\n\n");
	
	char CPF[15];
	printf("Digite o CPF do paciente: ");
	scanf("%s", &CPF);
	fflush(stdin);
	system("cls");

	char nome[100];
	printf("Digite o nome do paciente: ");
	fgets(nome, 100, stdin);
	fflush(stdin);
	system("cls");

	char sexo[10];
	printf("Digite o sexo do paciente: ");
	scanf("%s", &sexo);
	fflush(stdin);
	system("cls");

	char idade[5];
	printf("Digite a idade do paciente: ");
	scanf("%s", &idade);
	fflush(stdin);
	system("cls");
//                                 Questionário	
	printf("=====================================\n");
	printf("==TRIAGEM DE CLASSIFICAÇÃO DE RISCO==\n");
	printf("=====================================\n\n");
	printf("\nResponda o questionário abaixo. Digite (S) para SIM E (N) para NÃO.\n\n");

	char febre[2];
	printf("Tem Febre?\n");
	fgets(febre, 2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(febre , "s") == 0)  
		{
			soma = soma + ponto5;
		}
		if  (strcmp(febre , "S") == 0)  
		{
			soma = soma + ponto5;
		}
		else 
			soma = soma+0;

	char dorcabeca[2];
	printf("Tem dor de cabeça?\n");
	fgets(dorcabeca, 2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(dorcabeca , "s") == 0)  
		{
			soma = soma + ponto1;
		}
		if  (strcmp(dorcabeca , "S") == 0)  
		{
			soma = soma + ponto1;
		}
		else 
			soma = soma+0;
			
	char espirro[2];
	printf("Tem secreção nasal ou espirros?\n");
	fgets(espirro,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(espirro , "s") == 0)  
		{
			soma = soma + ponto1;
		}
		if  (strcmp(espirro , "S") == 0)  
		{
			soma = soma + ponto1;
		}
		else 
			soma = soma+0;
			
	char dorgarganta[2];
	printf("Tem dor/irritação na garganta?\n");
	fgets(dorgarganta,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(dorgarganta , "s") == 0)  
		{
			soma = soma + ponto1;
		}
		if  (strcmp(dorgarganta , "S") == 0)  
		{
			soma = soma + ponto1;
		}
		else 
			soma = soma+0;

	char tosseseca[2];
	printf("Tem tosse seca?\n");
	fgets(tosseseca,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(tosseseca , "s") == 0)  
		{
			soma = soma + ponto3;
		}
		if  (strcmp(tosseseca , "S") == 0)  
		{
			soma = soma + ponto3;
		}
		else 
			soma = soma+0;
			
	char difrespiratoria[2];
	printf("Tem dificuldade respiratória?\n");
	fgets(difrespiratoria,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(difrespiratoria , "s") == 0)  
		{
			soma = soma + ponto10;
		}
		if  (strcmp(difrespiratoria , "S") == 0)  
		{
			soma = soma + ponto10;
		}
		else 
			soma = soma+0;
			
	char dorcorpo[2];
	printf("Tem dores no corpo?\n");
	fgets(dorcorpo,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(dorcorpo , "s") == 0)  
		{
			soma = soma + ponto1;
		}
		if  (strcmp(dorcorpo , "S") == 0)  
		{
			soma = soma + ponto1;
		}
		else 
			soma = soma+0;
			
	char diarreia[2];
	printf("Tem diarréia?\n");
	fgets(diarreia,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(diarreia , "s") == 0)  
		{
			soma = soma + ponto1;
		}
		if  (strcmp(diarreia , "S") == 0)  
		{
			soma = soma + ponto1;
		}
		else 
			soma = soma+0;
			
	char contatocovid[2];
	printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19?\n");
	fgets(contatocovid,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(contatocovid , "s") == 0)  
		{
			soma = soma + ponto10;
		}
		if  (strcmp(contatocovid , "S") == 0)  
		{
			soma = soma + ponto10;
		}
		else 
			soma = soma+0;
			
	char localagromeracao[2];
	printf("Esteve em locais com grande aglomeração?\n");
	fgets(localagromeracao,2 ,stdin);
	fflush(stdin);
	system("cls");
		if  (strcmp(localagromeracao , "s") == 0)  
		{
			soma = soma + ponto3;
		}
		if  (strcmp(localagromeracao , "S") == 0)  
		{
			soma = soma + ponto3;
		}
		else 
			soma = soma+0;
			
//                            Classificação de Risco
	if (soma < 10)
	{
		printf("****************************************************\n");
		printf("*** O paciente deve ir para a ala de RISCO BAIXO ***\n");
		printf("****************************************************");
	}
	if ((soma > 9) && (soma < 20))
	{
		printf("****************************************************\n");
		printf("*** O paciente deve ir para a ala de RISCO MÉDIO ***\n");
		printf("****************************************************");
	}
	if (soma > 19)
	{
		printf("***************************************************\n");
		printf("*** O paciente deve ir para a ala de RISCO ALTO *** \n");
		printf("***************************************************\n\n\n");
	}
	
	FILE *ficha_do_paciente;
		ficha_do_paciente = fopen ("Ficha do Paciente.txt", "w" );
		fprintf(ficha_do_paciente,"Dados do paciente\n\n");
		fprintf(ficha_do_paciente,"CPF: %s\n", CPF);
		fprintf(ficha_do_paciente,"Nome: %s", nome);
		fprintf(ficha_do_paciente,"Sexo: %s\n", sexo);
		fprintf(ficha_do_paciente,"Idade: %s\n\n", idade);
		fprintf(ficha_do_paciente,"Questionário\n\n");
		//*FEBRE
		if  (strcmp(febre , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Febre.\n");		
		}
		if  (strcmp(febre , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Febre.\n");
		}
		// DOR DE CABEÇA
		if  (strcmp(dorcabeca , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Dor de cabeça.\n");		
		}
		if  (strcmp(dorcabeca , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Dor de cabeça.\n");
		}
		// SECREÇÃO NASAL/ESPIRROS
		if  (strcmp(espirro , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Secreção nasal / espirros.\n");		
		}
		if  (strcmp(espirro , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Secreção nasal / espirros.\n");
		}
		// DOR DE GARGANTA
		if  (strcmp(dorgarganta , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Dor de garganta.\n");		
		}
		if  (strcmp(dorgarganta , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Dor de garganta.\n");
		}
		// TOSSE SECA
		if  (strcmp(tosseseca , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Tosse seca.\n");		
		}
		if  (strcmp(tosseseca , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Tosse seca.\n");
		}
		// DIFICULDADE RESPIRATÓRIA
		if  (strcmp(difrespiratoria , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Dificuldade respiratória.\n");		
		}
		if  (strcmp(difrespiratoria , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Dificuldade respiratória.\n");
		}
		// DOR NO CORPO
		if  (strcmp(dorcorpo , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Dor no corpo.\n");		
		}
		if  (strcmp(dorcorpo , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Dor no corpo.\n");
		}		
		// DIARRÉIA
		if  (strcmp(diarreia , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Diarréia.\n");		
		}
		if  (strcmp(diarreia , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Diarréia.\n");
		}	
		// CONTATO COM INFECTADO
		if  (strcmp(contatocovid , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19.\n");		
		}			
		if  (strcmp(contatocovid , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19.\n");
		}
		//LOCAL DE AGROMERAÇÃO
		if  (strcmp(localagromeracao , "s") == 0) 
		{
			fprintf(ficha_do_paciente,"Esteve em locais com grande aglomeração.\n");		
		}
			
		if  (strcmp(localagromeracao , "S") == 0) 
		{
			fprintf(ficha_do_paciente,"Esteve em locais com grande aglomeração.\n");
		}
		fprintf(ficha_do_paciente,"\nPontuação do paciente: %d de 36 pontos.\n\n", soma);

		// RISCO
		if (soma < 10)
		{
		fprintf(ficha_do_paciente,"Paciente de  RISCO BAIXO.\n");
		}
		if ((soma > 9) && (soma < 20))
		{
		fprintf(ficha_do_paciente,"Paciente de RISCO MÉDIO.\n");
		}
		if (soma > 19)
		{
		fprintf(ficha_do_paciente,"Paciente de RISCO ALTO.\n");

		}	
		fclose(ficha_do_paciente);

	system("pause");
	return 0;
}
