#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//version 1.1 


/*En el Bingo Americano, cada cartón tiene 24 espacios que están numerados y un espacio libre o vacío.  Hay cinco columnas y cinco filas.
Todos los números son impresos al azar en los cartones.  Como se mencionó antes, los números aparecen debajo de las letras B-I-N-G-O.
Bajo la letra B se incluyen números entre 1 y 15.  En la columna debajo de la letra I los que están entre 16 y 30, debajo de N
(que incluye el espacio libre) del 31-45 y debajo de O del 61-75.*/
//declaracion de variables globales

int end1=0, numju1=0, numju2=0, empfinal=0;
int numero,reps,n,i;
int lista[75],cart1b[5],cart1I[5],cart1n[5],cart1g[5],cart1o[5];
int cart2b[5],cart2I[5],cart2n[5],cart2g[5],cart2o[5];
int a,b,c,d,e;

//prototipo de funcion
void repetidos();
void verificar();
void cond1();
void cond2();
void gameover1();
void gameover2();
void norepetircarton();
int x, y;

void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

void carton1()
{
	
	for (n=0; n<5;n++)
	{
		cart1b[n]=1+rand()%(15-1+1);
		cart1I[n]=16+rand()%(30-16+1);
		cart1n[n]=31+rand()%(45-31+1);
		cart1g[n]=46+rand()%(60-46+1);
		cart1o[n]=61+rand()%(75-61+1);
		norepetircarton();
	}
}

void filab()
{
	gotoxy(3, 3);
	puts("B");
	for (a=5,n=0; a<10; a++,n++)
	{
		gotoxy(3, a);
		printf("%d",cart1b[n]);
	}
	
	
}

void filai()
{
	gotoxy(6, 3);
	puts("I");
	for (b=5,n=0; b<10; b++,n++)
	{
		gotoxy(6, b);
		printf("%d",cart1I[n] );	
	}
	
}

void filan()
{
	gotoxy(9, 3);
	puts("N");
	for (n=0,c=5; c<10; c++,n++)
	{
		gotoxy(9, c);
		printf("%d",cart1n[n]); 	
	}
	
} 

void filag()
{
	gotoxy(12, 3);
	puts("G");
	for (n=0,d=5; d<10;n++, d++)
	{
		gotoxy(12, d);

		printf("%d",cart1g[n] );	
	}
	
} 

void filao()
{
	gotoxy(15, 3);
	puts("O");
	for (n=0,e=5; e<10; n++,e++)
	{
		gotoxy(15, e);
		printf("%d",cart1o[n]); 	
	}
} 

void llamadafila1()//llama todas las filas
{
	filab();
	filai();
	filan();
	filag();
	filao();
	
	
}

void filab2()
{
	gotoxy(30, 3);
	puts("B");
	for (n=0,a=5; a<10;n++,a++)
	{
		gotoxy(30, a);
		printf("%d",cart2b[n]); 	
	}
	
	
}

void filai2()
{
	gotoxy(33, 3);
	puts("I");
	for (n=0,b=5; b<10;n++, b++)
	{
		gotoxy(33, b);
		printf("%d", cart2I[n]);	
	}
	
} 

void filan2()
{
	gotoxy(36, 3);
	puts("N");
	for (n=0,c=5; c<10;n++, c++)
	{
		gotoxy(36, c);
		printf("%d",cart2n[n]);	
	}
	
}

void filag2()
{
	gotoxy(39, 3);
	puts("G");
	for (n=0,d=5; d<10;n++,d++)
	{
		gotoxy(39, d);
		printf("%d", cart2g[n]);	
	}
	
}

void filao2()
{
	gotoxy(42, 3);
	puts("O");
	for (n=0,e=5; e<10;n++, e++)
	{
		gotoxy(42, e);
		printf("%d", cart2o[n]);	
	}
	
} 
void llamadafila2()
{
	filab2();
	filai2();
	filan2();
	filag2();
	filao2();
	
}

void carton2()
{
	for (n=0; n<5; n++)
	{
		cart2b[n]=1+rand()%(15);
		cart2I[n]=16+rand()%(30-16+1);
		cart2n[n]=31+rand()%(45-31+1);
		cart2g[n]=46+rand()%(60-46+1);
		cart2o[n]=61+rand()%(75-61+1);
		norepetircarton(); 
	}
}

void norepetircarton()
{ 
	/*funcion que sirve para verificar si el numero ya se habia puesto anteriormente 
	en caso tal vuelve a tirar otro numero aleatorio , y vuelve a verificar que no este repetido*/
	
	for(i=0;i<n;i++)
	{
		if(cart1b[n]==cart1b[i])
		{
			cart1b[n]=1+rand()%(15-1+1);
			
			norepetircarton();
		}
		
		if(cart1I[n]==cart1I[i])
		{
			cart1I[n]=16+rand()%(30-16+1);
			
			norepetircarton();
		}
		if(cart1n[n]==cart1n[i])
		{
			cart1n[n]=31+rand()%(45-31+1);
			
			norepetircarton();
		}
		if(cart1g[n]==cart1g[i])
		{
			cart1g[n]=46+rand()%(60-46+1);
			
			norepetircarton();
		}
		if(cart1o[n]==cart1o[i])
		{
			cart1o[n]=61+rand()%(75-61+1);
			
			norepetircarton();
		}
		if(cart2b[n]==cart2b[i])
		{
			cart2b[n]=1+rand()%(15-1+1);
			
			norepetircarton();
		}
		if(cart2I[n]==cart2I[i])
		{
			cart2I[n]=16+rand()%(30-16+1);
			
			norepetircarton();
		}
		if(cart2n[n]==cart2n[i])
		{
			cart2n[n]=31+rand()%(45-31+1);
			
			norepetircarton();
		}
		if(cart2g[n]==cart2g[i])
		{
			cart2g[n]=46+rand()%(60-46+1);
			
			norepetircarton();
		}
		if(cart2o[n]==cart2o[i])
		{
			cart2o[n]=61+rand()%(75-61+1);
			
			norepetircarton();
		}	
	}
} 


void inicializar()
{
	n=0;
}
void cantar()
{
	srand(time(NULL));
	lista[n]=1+rand()%(75);
	
	repetidos();
	gotoxy(1,n+10);printf("Numero es  %d ",lista[n]);
	verificar();
	getch();
	n=n+1;	
}
void repetidos()
{ 
	/*funcion que sirve para verificar si el numero ya se habia puesto anteriormente 
	en caso tal vuelve a tirar otro numero aleatorio , y vuelve a verificar que no este repetido*/
	for(i=0;i<n;i++)
	{
		if(lista[n]==lista[i])
		{
			lista[n]=1+rand()%(75);	
			repetidos();//recursividad 
		}	
	}
}

void verificar()
{
	for(i=0;i<5;i++)
	{
		
	
		if(lista[n]==cart1b[i])
		{
			cart1b[i]=0;
		}
	 	if(lista[n]==cart1I[i])
		{	
			cart1I[i]=0;	
		}
		 if(lista[n]==cart1n[i])
		{
			cart1n[i]=0;
		}
	 	 if(lista[n]==cart1g[i])
		{
			cart1g[i]=0;
		}	
	 	 if(lista[n]==cart1o[i])
		{
			cart1o[i]=0;
		}
			
	 	if(lista[n]==cart2b[i])
		{
			cart2b[i]=0;
		}
	 	if(lista[n]==cart2I[i])
		{
			cart2I[i]=0;
		}
	 	 if(lista[n]==cart2n[i])
		{
			cart2n[i]=0;
			system("cls");
		}
	 	 if(lista[n]==cart2g[i])
		{
			cart2g[i]=0;
		}
	 	if(lista[n]==cart2o[i])
		{
			cart2o[i]=0;
		}
	}
	getch();
	system("cls");
	llamadafila1();
	llamadafila2();
}



void numeritos() //define numeros que se usan para dar las condiciones del ganador
{
	//empate
	if (numju1 == numju2)
	{
		empfinal=500;
	}
	else if (numju1==500)
	{
		gameover1();
	}
	else if (numju2==500)
	{
		gameover2();
	}
	
}
void gameover1()
{
	gotoxy(1, 20);
	puts("FIN DEL JUEGO, JUGADOR 1 GANA");
	end1=500;
}

void gameover2()
{
	gotoxy(1, 20);
	puts("FIN DEL JUEGO, JUGADOR 2 GANA");
	end1=500;
}

void esquinas()//para ganar con 4 esquinas 
{
	//carton 1
	
	if (cart1b[0]==0 && cart1o[0]==0 && cart1b[4]==0 && cart1o[4]==0)
	{
		numju1=500;
	}
		if (cart2b[0]==0 && cart2o[0]==0 && cart2b[4]==0 && cart2o[4]==0)
	{
		numju2=500;
	}
	
}
void cruzgrande()//para ganar cruz grande
{
	if(cart1b[2]==0 && cart1n[0]==0 && cart1n[4]==0 && cart1o[2]==0)
	{
		numju1=500;
	}
	if(cart2b[2]==0 && cart2n[0]==0 && cart2n[4]== 0&& cart2o[2]==0)
	{
		numju2==500;
	}
}
void cruzchica()//para ganar con cruzchica
{
	if(cart1I[2]==0 && cart1n[1]==0 && cart1n[3]==0 && cart1g[2]==0)
	{
		numju1=500;
	}
	if(cart2I[2]==0 && cart2n[1]==0 && cart2n[3]==0 && cart2g[2]==0)
	{
		numju2=500;
	}
	
}

void lineal() //para ganar linealmente, escribi todo esto con una mano cuz la derecha se me hincho en el trabajo xd
{
	if (cart1b[0]==0 && cart1I[0]==0 && cart1n[0]==0 && cart1g[0]==0 && cart1o[0]==0)
	{
		numju1=500;
	}
	else if (cart1b[1]==0 && cart1I[1]==0 && cart1n[1]==0 && cart1g[1]==0 && cart1o[1]==0)
	{
		numju1=500;
	}
	else if (cart1b[2]==0 && cart1I[2]==0 && cart1n[2]==0 && cart1g[2]==0 && cart1o[2]==0)
	{
		numju1=500;
	}
	else if (cart1b[3]==0 && cart1I[3]==0 && cart1n[3]==0 && cart1g[3]==0 && cart1o[3]==0)
	{
		numju1=500;
	}
	else if (cart1b[4]==0 && cart1I[4]==0 && cart1n[4]==0 && cart1g[4]==0 && cart1o[4]==0)
	{
		numju1=500;
	}
	
	//carton 2
	
	else if (cart2b[0]==0 && cart2I[0]==0 && cart2n[0]==0 && cart2g[0]==0 && cart2o[0]==0)
	{
		numju2=500;
	}
	else if (cart2b[1]==0 && cart2I[1]==0 && cart2n[1]==0 && cart2g[1]==0 && cart2o[1]==0)
	{
		numju2=500;
	}
	else if (cart2b[2]==0 && cart2I[2]==0 && cart2n[2]==0 && cart2g[2]==0 && cart2o[2]==0)
	{
		numju2=500;
	}
	else if (cart2b[3]==0 && cart2I[3]==0 && cart2n[3]==0 && cart2g[3]==0 && cart2o[3]==0)
	{
		numju2=500;
	}
	else if (cart2b[4]==0 && cart2I[4]==0 && cart2n[4]==0 && cart2g[4]==0 && cart2o[4]==0)
	{
		numju2=500;
	}
}

void condganar()//almacena las condiciones para ganar 
{
	esquinas();
	cruzgrande();
	cruzchica();
	lineal();
}



int main()
{
	srand(time(NULL));
	//srand(time(NULL));
	//cartones 
	gotoxy(10,1);
	puts("El marco-chris BINGO XD");
	carton1();
	llamadafila1();
	carton2();
	llamadafila2();
	gotoxy(1, 20);
	
	//cantar numeros
	inicializar();
	do
	{
		srand(time(NULL));
		cantar();
		condganar();
		numeritos();
		if (end1==500)
		{
			getch();
			break;
		}
	}
	while(reps==0);
	
}
