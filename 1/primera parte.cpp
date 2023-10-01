#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
//declaracion de variables

char nombre[30];
int examen1,examen2,examen3,examen4,examen5,examen6,reps;
float prom, suma;

void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}  
int main()
{
	
do 
{
	//inicializar 
	examen1,examen2=0,examen3=0,examen4=0,examen5=0,examen6=0;
	//pedida de datos
	fflush(stdin); 	
	puts("ingrese su nombre");
	gets(nombre);
	puts("\n ingrese la primera calificacion");
	scanf("%d",&examen1);
	puts("\n ingrese la segunda calificacion");
	scanf("%d",&examen2);
	puts("\n ingrese la tercera calificacion");
	scanf("%d",&examen3);
	puts("\n ingrese la cuarta calificacion");
	scanf("%d",&examen4);
	puts("\n ingrese la quinta calificacion");
	scanf("%d",&examen5);
	puts("\n ingrese la sexta calificacion");
	scanf("%d",&examen6);

	//cleaner
	
	system("cls");
	//salida 
	
	gotoxy(20,1);printf(" *****CALIFICACIONES DEL ESTUDIANTE: %s", nombre);
	
	//salida de los examenes//
	
	gotoxy(20,2);printf("********PUNTUACIONES DE LOS EXAMENES********");
	gotoxy(2,3);printf("Examen 1: %d", examen1);
	gotoxy(2,4);printf("Examen 2: %d", examen2);
	gotoxy(2,5);printf("Examen 3: %d", examen3);
	gotoxy(2,6);printf("Examen 4: %d", examen4);
	gotoxy(2,7);printf("Examen 5: %d", examen5);
	gotoxy(2,8);printf("Examen 6: %d", examen6);
	
	//salida de promedio//
	 
	suma=0;
	suma=examen1+examen2+examen3+examen4+examen5+examen6;
	prom=0;
	prom=suma/6;
	
	gotoxy(2,9);printf(" El promedio de calificacion de %s es de: %.2f", nombre, prom);
	gotoxy(2,10);puts("si quiere repetir pulse 0 si no pulse cualquier otro numero ");
	scanf("%d",&reps);
}
while(reps==0);
	return 0;
}
