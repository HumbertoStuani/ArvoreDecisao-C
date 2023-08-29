#include<stdio.h>
#include<conio2.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
void Moldura(int CI,int LI,int CF,int LF) {
	// Contorno
	int i;
	textcolor(1);
	gotoxy(CI,LI);
	printf("%c",201);
	gotoxy(CF,LI);
	printf("%c",187);
	gotoxy(CI,LF);
	printf("%c",200);
	gotoxy(CF,LF);
	printf("%c",188);
	for(i=CI+1; i<CF; i++) {
		gotoxy(i,LI);
		printf("%c",205);
		gotoxy(i,LF);
		printf("%c",205);
	}
	for(i=LI+1; i<LF; i++) {
		gotoxy(CI,i);
		printf("%c",186);
		gotoxy(CF,i);
		printf("%c",186);
	}
	for(i=CI+1;i<CF;i++)
	{
		gotoxy(i,4);
		printf("%c",205);
		gotoxy(28,2);
		printf("CLASSIFICACAO DE AUTOMOVEIS");
	}
}

void LimpaTela(void)
{
	int i;
	for(i=5;i<25;i++)
	{
		gotoxy(2,i);
		printf("                                                                              ");
	}	
}

void Arvore(void)
{
	
}

void Executar (void)
{
	char op;
	int aux1,aux2,aux3,aux4,aux5,aux6,i;
	Moldura(1,1,80,25);
	do
	{
		textcolor(3);
		gotoxy(30,5);
		printf("SEGURANCA DO VEICULO:");
		gotoxy(21,6);
		printf("1- Baixa     2- Mediana     3- Alta");
		gotoxy(30,7);
		printf("Opcao: ");
		scanf("%d",&aux1);
		for(i=2;i<80;i++)
		{
			gotoxy(i,8);
			printf("%c",205);
		}
		switch(aux1)
		{
			case 1:
				gotoxy(32,24);
				printf("CARRO INACEITAVEL!");
				gotoxy(80,25);
				printf("\n");
				break;
							
			case 2:
				gotoxy(30,9);
				printf("QUANTIDADE DE PESSOAS:");
				gotoxy(18,10);
				printf("1- Duas     2- Quatro     3- Mais que Quatro");
				gotoxy(30,11);
				printf("Opcao: ");
				scanf("%d",&aux2);
				for(i=2;i<80;i++)
				{
					gotoxy(i,12);
					printf("%c",205);
				}
				switch(aux2)
				{
					case 1:
						gotoxy(32,24);
						printf("CARRO INACEITAVEL!");
						gotoxy(80,25);
						printf("\n");
						break;
					
					case 2:
						gotoxy(30,13);
						printf("PRECO DE COMPRA:");
						gotoxy(21,14);
						printf("1- Baixo   2- Medio    3- Alto  4- Muito Alto");
						gotoxy(30,15);
						printf("Opcao: ");
						scanf("%d",&aux3);
						for(i=2;i<80;i++)
						{
							gotoxy(i,16);
							printf("%c",205);
						}
						switch(aux3)
						{
							case 1:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo    2- Medio     3- Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;		
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(27,22);
										printf("1- Medio     2- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 3:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;		
										}
									break;	
								}
							break;
							
							case 2:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(18,18);
								printf("1- Baixo   2- Medio   3- Alto   4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
										break;
										
									case 2:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
										break;
										
									case 3:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
										break;
									
									case 4:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
										break;
								}
							break;
							
							case 3:
								gotoxy(27,17);
								printf("TAMANHO PORTA MALAS: ");
								gotoxy(18,18);
								printf("1- Pequeno   2- Medio     3- Grande");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
										break;
									
									case 2:
										LimpaTela();
										gotoxy(30,5);
										printf("Quantidade de Portas:");
										gotoxy(18,6);
										printf("1- Duas  2- Tres  3- Quatro  4- Cinco ou mais");
										gotoxy(25,7);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,8);
											printf("%c",205);
										}
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 4:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
										break;
									
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
										break;	
								}
							break;
							
							case 4:
								gotoxy(27,17);
								printf("TAMANHO PORTA MALAS: ");
								gotoxy(18,18);
								printf("1- Pequeno    2- Medio     3- Grande");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
										break;
										
									case 2:
										LimpaTela();
										gotoxy(30,5);
										printf("Quantidade de Portas:");
										gotoxy(18,6);
										printf("1- Duas  2- Tres  3- Quatro  4- Cinco ou mais");
										gotoxy(25,7);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,8);
											printf("%c",205);
										}
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 4:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
									    }
									break;
									
									case 3:
										LimpaTela();
										gotoxy(30,5);
										printf("CUSTO DE MANUTENCAO: ");
										gotoxy(18,6);
										printf("1- Baixo   2- Medio   3- Alto");
										gotoxy(25,7);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,8);
											printf("%c",205);
										}
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}	
										break;
							    }
							break;
						}
					
					case 3:
						gotoxy(30,13);
						printf("PRECO DE COMPRA:");
						gotoxy(21,14);
						printf("1- Baixo   2- Medio    3- Alto  4- Muito Alto");
						gotoxy(30,15);
						printf("Opcao: ");
						scanf("%d",&aux3);
						for(i=2;i<80;i++)
						{
							gotoxy(i,16);
							printf("%c",205);
						}
						switch(aux3)
						{
							case 1:
								gotoxy(30,17);
								printf("Quantidade de Portas:");
								gotoxy(18,18);
								printf("1- Duas  2- Tres  3- Quatro  4- Cinco ou mais");
								gotoxy(25,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("CUSTO DE MANUTENCAO: ");
										gotoxy(21,22);
										printf("1- Baixo    2- Medio     3- Alto ou Muito Alto");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(27,21);
										printf("CUSTO DE MANUTENCAO: ");
										gotoxy(21,22);
										printf("1- Baixo    2- Medio     3- Alto ou Muito Alto");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
								}
							break;
							
							case 2:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(18,18);
								printf("1- Baixo   2- Medio   3- Alto   4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
								}
							break;
							
							case 3:
								gotoxy(27,17);
								printf("TAMANHO PORTA MALAS: ");
								gotoxy(18,18);
								printf("1- Pequeno    2- Medio     3- Grande");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
										break;
									
									case 2:
										gotoxy(27,21);
										printf("CUSTO DE MANUTENCAO: ");
										gotoxy(21,22);
										printf("1- Baixo    2- Medio     3- Alto   4- Muito Alto");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 4:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 3:
										gotoxy(27,21);
										printf("CUSTO DE MANUTENCAO: ");
										gotoxy(21,22);
										printf("1- Baixo    2- Medio     3- Alto ou Muito Alto");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;	
								}
							break;
							
							case 4:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(18,18);
								printf("1- Baixo   2- Medio   3- Alto   4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO INACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 3:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
										break;
								}	
							break;
						}
						break;
				}
				break;	
					
			case 3:
				gotoxy(30,9);
				printf("QUANTIDADE DE PESSOAS:");
				gotoxy(18,10);
				printf("1- Duas     2- Quatro     3- Mais que Quatro");
				gotoxy(30,11);
				printf("Opcao: ");
				scanf("%d",&aux2);
				for(i=2;i<80;i++)
				{
					gotoxy(i,12);
					printf("%c",205);
				}
				switch(aux2)
				{
					case 1:
						gotoxy(32,24);
						printf("CARRO INACEITAVEL!");
						gotoxy(80,25);
						printf("\n");
					break;
					
					case 2:
						gotoxy(30,13);
						printf("PRECO DE COMPRA:");
						gotoxy(21,14);
						printf("1- Baixo   2- Medio    3- Alto  4- Muito Alto");
						gotoxy(30,15);
						printf("Opcao: ");
						scanf("%d",&aux3);
						for(i=2;i<80;i++)
						{
							gotoxy(i,16);
							printf("%c",205);
						}
						switch(aux3)
						{
							case 1:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
										
									case 3:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
								
							case 2:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
										
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
							
							case 3:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 2:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
							
							case 4:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 2:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 3:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
						}
					break;
					// até aqui tudo correto
					
					case 3:
						gotoxy(30,13);
						printf("PRECO DE COMPRA:");
						gotoxy(21,14);
						printf("1- Baixo   2- Medio    3- Alto  4- Muito Alto");
						gotoxy(30,15);
						printf("Opcao: ");
						scanf("%d",&aux3);
						for(i=2;i<80;i++)
						{
							gotoxy(i,16);
							printf("%c",205);
						}
						switch(aux3)
						{
							case 1:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
										
									case 3:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
							
							case 2:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
									
									case 2:
										gotoxy(27,21);
										printf("TAMANHO PORTA MALAS: ");
										gotoxy(18,22);
										printf("1- Pequeno    2- Medio     3- Grande");
										gotoxy(30,23);
										printf("Opcao: ");
										scanf("%d",&aux5);
										for(i=2;i<80;i++)
										{
											gotoxy(i,24);
											printf("%c",205);
										}
										LimpaTela();
										switch(aux5)
										{
											case 1:
												gotoxy(32,24);
												printf("CARRO ACEITAVEL!");
												gotoxy(80,25);
												printf("\n");
												break;
											
											case 2:
												gotoxy(32,24);
												printf("CARRO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
												
											case 3:
												gotoxy(32,24);
												printf("CARRO MUITO BOM!");
												gotoxy(80,25);
												printf("\n");
												break;
										}
									break;
										
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
							
							case 3:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 2:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
										
									case 3:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
							
							case 4:
								gotoxy(27,17);
								printf("CUSTO DE MANUTENCAO: ");
								gotoxy(21,18);
								printf("1- Baixo  2- Medio   3- Alto  4- Muito Alto");
								gotoxy(30,19);
								printf("Opcao: ");
								scanf("%d",&aux4);
								for(i=2;i<80;i++)
								{
									gotoxy(i,20);
									printf("%c",205);
								}
								switch(aux4)
								{
									case 1:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 2:
										gotoxy(32,24);
										printf("CARRO ACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
										
									case 3:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
									
									case 4:
										gotoxy(32,24);
										printf("CARRO INACEITAVEL!");
										gotoxy(80,25);
										printf("\n");
									break;
								}
							break;
						}
					break;
				}
			break;
		}
		getch();
		LimpaTela();
		gotoxy(20,12);
		printf("Aperte para continuar ou [ESC] - SAIR");
		gotoxy(27,13);
		op=getch();
		LimpaTela();
	}while(op!=27);
}
int main ()
{
	Executar();
}
