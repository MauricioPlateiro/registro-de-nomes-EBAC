#include<stdio.h>//biblioteca de comunica��o com o usuario
#include<stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include<locale.h>//biblioteca de aloca��es de texto por regi�o
#include<string.h>//biblioteca responsavel por cuidar das string

int registro()
{

   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];

    printf("Digite o cpf a ser cadastrado: ");
	scanf("%s",cpf);

   strcpy(arquivo,cpf);
   
   FILE *file;
   file = fopen(arquivo, "w");
   fprintf(file, cpf);
   fclose(file);

   file = fopen(arquivo,"a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopen(arquivo,"a");
   fprintf(file, nome);
   fclose(file);
   
   file = fopen(arquivo,"a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file, sobrenome);
   fclose(file);
   
   file = fopen(arquivo,"a");
   fprintf(file, ",");
   fclose(file);
   
   printf("Digite o cargo a ser cadastrado: ");
   scanf("%s",cargo);
   
   file = fopen(arquivo,"a");
   fprintf(file,cargo);
   fclose(file);
   
   system("pause");
}

    int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char(cpf)[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	
	{
		printf("N�o foi possivel abrir o arquivo,n�o.\n");
	}
	
	while(fgets(conteudo, 200, file)!= NULL)
	
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}   
    int deletar()
{
    	
    char cpf[40];
	
	printf("Digite o cpf do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file == NULL)
	
	{	
		printf("O usuario n�o se encontra no sistema!.\n:");
		system("pause");
    } 
	
	
  }
  
     int main()   
        {       
        int opcao=0;
	    int laco=1;
	    char senhadigitada[]="a";
	    int comparacao;
	    
	    printf("### Cart�rio da EBAC ###\n\n");
	    printf("Login do administrador!\n\nDigite a sua senha: ");
	    scanf("%s",senhadigitada);
	    
	    comparacao = strcmp(senhadigitada, "admin");
	    
	    if(comparacao == 0)	
       {
		   system("cls");
	       for(laco=1;laco=1;)
          {
	    
    	      setlocale(LC_ALL, "portuguese"); // Definindo a linguagem
	
         	  printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu
           	  printf("Escolha a op��o desejada do menu\n\n");
        	  printf("\t1 - registrar nomes\n");
        	  printf("\t2 - Consultar nomes\n");
        	  printf("\t3 - Deletar nomes\n\n"); 
        	  printf("\t4 - sair do sistema\n\n");
        	  printf("Op��o: ");// fim do menu
	
           	  scanf("%d",&opcao); //armazenando a escolha do usuario
	
              system("cls");
    	
              switch(opcao)
              {
            	case 1:
                registro();
            	break;
	    
        	    case 2:
                consulta();
        	    break;
	    
        	    case 3:
                deletar();
        	    break;
        	    
        	    case 4:
        	    printf("obrigado por utilizar o sisteme!\n");
        	    return 0;
        	    break;
	
        	    default:
	        	printf("Esta op��o n�o esta disponivel!\n");
	    	    system("pause");
        	    break;
        	    
        	    printf("essa op��o nao est� disponivel:\n");
        	    system("pause");
        	    break;
		    }
    	}
    }

    else
        printf("Senha incorreta!");
}
