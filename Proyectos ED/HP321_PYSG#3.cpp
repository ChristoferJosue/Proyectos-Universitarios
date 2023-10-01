#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <ctime>
#include<string.h>

using namespace std;
//prototipo de funcion
void AsignarNum(char letra);
void permute(string a, string b, string c, int p, int n);
void PermuteMain(string);
//variables gloables 
 int c;
int pin[5];
int cont;
int k;
string num[3];
string pines[1440];
string permutaciones[720];
 string pins;
int digitTime(int n){
	int count = 0;
	int diTiempo = n;
	
	while(n!=0){
		n = n/10;
		count++;
	}
	
	switch(count){
		case 1:
			diTiempo+=10;
			break;
		case 2:
			diTiempo/=1;
			break;
		case 3:
			diTiempo/=10;
			break;
	}
	return diTiempo;
}

int digitSeg(int n){
	int count = 0;
	int diSeg = n;
	
	while(n!=0){
		n = n/10;
		count++;
	}
	
	switch(count){
		case 1:
			diSeg/=1;
			break;
		case 2:
			diSeg/=10;
			break;
	}
	return diSeg;
}

string pinCreator(){
	int fecha,anio,mes,dia;
   int tiempo,hora,min,seg;
   string Fecha,Tiempo,Seg;
   string pin;
   
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt;

   tm *ltm = localtime(&now);
   
   anio = ltm->tm_year + 1900;
   mes = ltm->tm_mon + 1;
   dia = ltm->tm_mday;
   
   hora = ltm->tm_hour;
   min = ltm->tm_min;
   seg = ltm->tm_sec;
   
   fecha = (anio + mes + dia)/100 + (anio + mes + dia)%100;
   tiempo = digitTime(hora + min + seg);
   seg = digitSeg(seg);
   
   //Convertir a string
   stringstream f,t,s;
   f << fecha;
   f >> Fecha;
   t << tiempo;
   t >> Tiempo;
   s << seg;
   s >> Seg;
      
   pin = Fecha + Tiempo + Seg;
   
   return pin;
}

//Alfabeto

void PedirLetras()
{/*Funcion que sirve para pedir letras y asignarles un numero*/
	char letra,letraA;
	string Digitos;
	for(k=0;k<3;k++)
	{
		cout<<"Indique la "<<k+1<<" letra = ";
		cin>>letra;
		if(letra==letraA)
		{
			cout<<"\nNo se puede ingresar la misma letra\n"<<endl;
			PedirLetras();
			exit(0);
				
		}
		else 
		{
			AsignarNum(letra);
			letraA=letra;
			;
		}
		
	}	
	Digitos=num[0]+num[1]+num[2];//aqui junta todos los digitos para posterior pasarlo a las funciones que van a permutar los digitos 
	PermuteMain(Digitos);
}
void permute(string a, string b, string c, int p, int k) {
	int i;
	if(p == k) {//verifica cada vez si p es igual a n , siendo n la cantidad de letras tecleada por el usuario, siendo p el tamaño del arreglo c , hasta que p no sea igual a c no se muestra la combinacion 
		//cout<<cont+1<<" "<< c<<endl;//muestra las permutaciones
		permutaciones[cont]=c; 
		cont=cont+1;//cuando se cumple la condicion aumenta el contador 
		return;
		
	}
	
	for(i = 0; i < k; i++) {
		if(b[i] == '1') { //usa solo objetos disponibles
			c[p] = a[i];//dandole el valor que tiene el arreglo a en la posicion i al arreglo c en la posicion p,luego formando la palabra que se va a imprimir arriba. 
			b[i] = '0'; //los hace no disponibles 
			permute(a, b, c, p + 1, k);//recursion de la funcion
			b[i] = '1'; //los vuelve a hacer disponibles 
		}
	}
}
void PermuteMain(string Digitos) {
	int reps;
	cont=0;
		int l=6;
		
		string a=Digitos; //arreglo de caracteres
		cout<<"\nEl arreglo es : "<<a<<endl;//muestra el arreglo a que ya esta definido como abcde
		cout<<"\n";
		//printf("\n Cuantas letras desea ?:");//pide el usuario la cantidad de cuanto en cuanto 
	//	scanf("%d",&l);
		
	
		char b[]="111111"; //banderas disponibles
		char c[]="      "; // resultado de la permutacion
		permute(a, b, c, 0, l);
	
	
}


void AsignarNum(char letra)
{
	switch(letra)
	{
		case 'a':case'A':
			num[k]="01";
			break;
		case 'b':case'B':
			num[k]="02";
			break;
		case 'c':case'C':
			num[k]="03";
			break;	
		case 'd':case'D':
			num[k]="04";
			break;
		case 'e':case'E':
			num[k]="05";
			break;
		case 'f':case'F':
			num[k]="06";
			break;
		case 'G':case'g':
			num[k]="07";
			break;
		case 'h':case'H':
			num[k]="08";
			break;
		case 'i':case'I':
			num[k]="09";
			break;
		case 'J':case'j':
			num[k]="10";
			break;
		case 'k':case'K':
			num[k]="11";
			break;
		case 'l':case'L':
			num[k]="12";
			break;
		case 'm':case'M':
			num[k]="13";
			break;
		case 'n':case'N':
			num[k]="14";
			break;
		case 'ñ': case'Ñ':
			num[k]="15";
			break;
		case 'o':case'O':
			num[k]="16";
			break;
		case 'p':case'P':
			num[k]="17";
			break;
		case 'q':case'Q':
			num[k]="18";
			break;
		case 'R':case'r':
			num[k]="19";
			break;
		case 's':case'S':
			num[k]="20";
			break;
		case 't':case'T':
			num[k]="21";			
			break;
		case 'u':case'U':
			num[k]="22";
			break;
		case 'v':case'V':
			num[k]="23";
			break;
		case 'w':case'W':
			num[k]="24";
			break;
		case 'x':case'X':
			num[k]="25";
			break;
		case 'y':case'Y':
			num[k]="26";
			break;
		case 'z':case'Z':
			num[k]="27";
			break;
		default:
			//si no es una letra Reinicia el programa desde el Llamado de la funcion de PedirLetras
			cout<<"Esa no es una letra, vuelva a intentarlo"<<endl;
			PedirLetras();
			exit(0);
			
		
																					
		}	
	
}

//dkjstra
struct label {
   int nro;	/* número del nodo */
   int prev;	/* nodo precedente (-1 para el nodo inicial )*/
   int peso;	/* peso o coste total de la trayectoria que
				 * conduce al nodo, i.e., el coste total desde
				 * el nodo inicial hasta el actual. Un valor
				 * de -1 denota el infinito */
   int marca;	/* si el nodo ha sido marcado o no */
};
typedef struct label label_t;
 



void dijkstra( int, int **, int, int );
 
int main1 () {
 
   /* cantidad total de nodos */
   int numNodos = 8;
 
   /* Definiendo la matriz de adyacencia */
   int i, j, **A;
 
   if ( ( A = new int*[numNodos] ) == NULL ) return 1;
   for ( i = 0; i < numNodos; i++ )
      if ( ( A[i] = new int[numNodos] ) == NULL ) return 1;
 
   for ( i = 0; i < 8; i++ )
      for ( j = 0; j < 8; j++ )
         A[i][j] = 0;
 
   /* por simplicidad, completamos solo los pares de nodos conectados */
   A[0][1] = 16;
   A[0][2] = 10;
   A[0][3] = 5;
 
   A[1][0] = 16;
   A[1][2] = 2;
   A[1][5] = 4;
   A[1][6] = 6;
 
   A[2][0] = 10;
   A[2][1] = 2;
   A[2][3] = 4;
   A[2][4] = 10;
   A[2][5] = 12;
 
   A[3][0] = 5;
   A[3][2] = 4;
   A[3][4] = 15;
 
   A[4][2] = 10;
   A[4][3] = 15;
   A[4][5] = 3;
   A[4][7] = 5;
 
   A[5][1] = 4;
   A[5][2] = 12;
   A[5][4] = 3;
   A[5][6] = 8;
   A[5][7] = 16;
 
   A[6][1] = 6;
   A[6][5] = 8;
   A[6][7] = 7;
 
   A[7][4] = 5;
   A[7][5] = 16;
   A[7][6] = 7;
 
   /* Imprimir la matriz de adyacencia */
   /*cout << "Matriz de adyacencia:" << endl << endl;
   for ( i = 0; i < 8; i++ ) {
      for ( j = 0; j < 8; j++ )
         cout << setw(2) << A[i][j] << "  ";
      cout << endl;
   }
   cout << endl;*/
 
   /* calcular dijkstra a partir del nodo 0, a partir del nodo 7 */
  
   dijkstra( numNodos, A,c , 7 );
 	system("cls");
 	
 
   /* liberar memoria */
   delete [] A;
   cout<<"Dijkstra"<<endl;
   ostringstream str1;
  	for(int n=0;n<5;n++)
      	{
    	str1 <<pin[n];
    // Displaying the string
      		
		  }
		  pins = str1.str();
		  cout<<pins<<endl;
		  cout<<endl;
   return 0;
   
}

/* Calcula el coste mínimo de alcanzar un nodo final 'b'
 * grafo no dirigido con N nodos, a partir del nodo inicial 'a',
 * dada su matriz de adyacencia A */
void dijkstra( int N, int **A, int a, int b ) {
 
   label_t *Labels;
   int i, i0, j, peso;
   int *ruta;		/* array de nodos de la ruta minima */
 
   /* Crea din'amicamente el arreglo de etiquetas de nodo */
   if ( ( Labels = new label_t[N] ) == NULL ) return;
 
   /* nodo inicial 'a' entre 0 y N - 1 */
   if ( a < 0 || a > N - 1 ) return;
   /* nodo final 'a' entre 0 y N - 1 */
   if ( b < 0 || b > N - 1 ) return;
 
   /* inicializar las etiquetas de nodo */
   for ( i = 0; i < N; i++ ) {
      Labels[i].nro = i;
      if ( i != a ) {
         Labels[i].prev = -1;	/* a'un no se ha definido predecesor */
         Labels[i].peso = -1;	/* infinito */
         Labels[i].marca = 0;
      }
      else {
         Labels[i].prev = -1;	/* aún no se ha definido predecesor */
         Labels[i].peso = 0;		/* coste del nodo inicial a sí mismo es cero */
         Labels[i].marca = 0;
      }
   }
 
   /* continuamos este ciclo mientras existan nodos no marcados */
   while ( 1 ) {
      /* busca entre todos los nodos no marcados el de menor peso, descartando los
       * de peso infinito (-1) */
      peso = -1;
      i0 = -1;
      for ( i = 0; i < N; i++ ) {
         if ( Labels[i].marca == 0 && Labels[i].peso >= 0 )
            if ( peso == -1 ) {
               peso = Labels[i].peso;
               i0 = i;
            }
            else if ( Labels[i].peso <= peso ) {
               peso = Labels[i].peso;
               i0 = i;
            }
      }
      if ( i0 == -1 ) {	/* termina si no encuentra */
        // cout << "Ya no quedan nodos por analizar." << endl;
         break;
      }
 
      //cout << "*** Analizando nodo " << i0 << " ***" << endl;
 
      /* actualiza el peso de todos los sucesores (si los hay) del nodo
       * encontrado y luego se~nala dicho nodo como marcado */
      for ( i = 0; i < N; i++ ) {
         if ( A[i0][i] > 0 ) {
            /* si el coste acumulado sumado al coste del enlace del nodo i0 al nodo i
             * es menor al coste del nodo i (o si el coste del nodo i es infinito),
             * debemos actualizar */
            if ( Labels[i].peso == -1 || Labels[i0].peso + A[i0][i] < Labels[i].peso ) {
               if ( Labels[i0].peso + A[i0][i] < Labels[i].peso )
                  cout << "    " << i << " " << endl;
               Labels[i].peso = Labels[i0].peso + A[i0][i];
               Labels[i].prev = i0;
               //cout << "   coste de nodo " << i << " desde nodo " << i0 << ": " << Labels[i].peso << endl;
            }
         }
      }
      Labels[i0].marca = 1;
      //cout << "   [ nodo " << i0 << " marcado ]" << endl;
 
      /* para verificar, imprime los costes calculados hasta el momento */
     /* for ( i = 0; i < N; i++ ) {
         cout << i << ": [";
         if ( Labels[i].peso == -1 ) cout << "Inf";
         else cout << Labels[i].peso;
         cout << ", " << Labels[i].prev ;
         if ( Labels[i].marca == 1 )cout <<  ", x]" << endl;
         else cout << "]" << endl;
      }*/
      //cout << endl;
 
      /* pausa (opcional) */
      //cout << "presione ENTER para continuar ...";
      //cin.get();
   }
 
   /* Ruta desde el nodo 'a' hasta el nodo 'b' */
   int longitud = 2;
   i = b;
   while ( ( i = Labels[i].prev ) != a ) longitud++;	/* primero estimamos la longitud de la ruta */
   if ( ( ruta = new int[longitud] ) == NULL ) return;
 
   ruta[longitud - 1] = b;		/* luego rellenamos */
   i = b;
   j = 0;
   for ( j = 1; j < longitud; j++ ) {
      i = Labels[i].prev;
      ruta[longitud - j - 1] = i;
   }
 
   //cout << "================================================================" << endl;
   //cout << endl << "Ruta más corta entre nodo " << a << " y nodo " << b << ":" << endl << endl;
   /*for ( i = 0; i < longitud; i++ ) {
      //cout << ruta[i];
     // if ( i < longitud - 1 ) //cout << " - ";
     
   }*/
        
   	for(int n=0;n<5;n++)
      	{
      		
      	pin[n]=ruta[n];	
      		
		  }
    if(longitud!=5)
      {
      	
      	c++;
      	
      	main1();
	  }
   //cout << endl << endl << "Costo total: " << Labels[b].peso << endl << endl;

   delete ruta;
   delete [] Labels;
}



void unirpines(string pin1,string pin2)
{
	
	for(int l=0;l<720;l++)
	{
		pines[l]=pins+pin1+permutaciones[l];
		pines[l+720]=pins+pin2+permutaciones[l];
		}
}

int main() {
   string pin1,pin2;
   
   string vali = "";
   int r,t, cont=0;
   main1();
   pin1 = pinCreator();
   cout<<"1er PIN: "<<pin1<<endl;
   cout<<"\n";
   
   PedirLetras();
   sleep(5);
   pin2 = pinCreator();
   
   cout<<"2do PIN: "<<pin2<<endl;
   unirpines(pin1,pin2);
   cout<<"\n";
   
   for(int l=0;l<1440;l++)
		{ 
			cout<<l+1<<"."<<pines[l]<<endl;
		}
		   
		do{
			cout<<"\nTARJETAS DE PREPAGO"<<endl;
			cout<<"1. Validar tarjeta\n";
			cout<<"2. Generar nuevos pines\n";
			cout<<"3. Salir\n";
			cout<<"OPCION = ";
			cin>>r;
			switch(r)
			{
				case 1:
					cout<<"\nIntroduzca el numero de la tarjeta: \n";
					cin>>vali;
					for(int l = 0;l<1440;l++){
						if(vali.compare(pines[l])==0){
							cont++;
						}
					}
					if(cont>1){
						cout<<"EL PIN ES VALIDO"<<endl;
					}
					else{
						cout<<"EL PIN NO ES VALIDO"<<endl;
					}
					break;
					case 2:
						main();
						break;
					case 3:
						cout<<"\n";
						system("pause");
						exit(0);
						break;
			}
		}while(r!=3);
}
