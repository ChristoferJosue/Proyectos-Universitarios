#include<iostream>
using namespace std;
float suma;
int cantidadt;
void inicializar()
{
	suma=0;
	cantidadt=0;
}
void salida_depar(string elegir_departamento)
{
	cout<<"Depart: "<<elegir_departamento<<endl;
	
}
void salida_sucursal(string elegir_sucursal)
{
	cout<<"Sucursal: "<<elegir_sucursal<<endl;
	
}
string elegir_sucursal(char codsucur)
{
  string sucursal;
switch (codsucur) {
  case 'p':case 'P':
                    sucursal="Panamá";
                    break;
  case 'h':case'H':
                    sucursal="Herrera";
                    break;
  case 'c':case'C':
                    sucursal="Coclé";
                    break;
        default:
                sucursal="no pusó correctamente el codigo";
                break;
    return sucursal;// esto le asigna el valor de sucursal a la función
}
}

string elegir_departamento(int depart)
{
  string departamento;
switch (depart) {
        case 1:
              departamento="Damas";
              break;
        case 2:
              departamento="Caballeros";
              break;
        case 3:
              departamento="Niños";
              break;
        case 4:
              departamento="Hogar";
              break;
        case 5:
              departamento="Juguetería";
              break;
        case 6:
              departamento="Escolar";
              break;
        default:
                departamento="no se reconoce este departamento";
              break;
      return departamento;
}




}


float calculo(float prec,int cant)
{
	float monto;
	
	monto=prec*cant;
	return monto;
}

void salida(int codvend,string nomb, char codsucur,string elegir_sucursal,string elegir_departamento,string desc,float prec,int cant,float calculo)
{
	
		cout<<"Almacen regalos para ti"<<endl;
		cout<<"Sucursal: \t "<<elegir_sucursal;
		cout<<"Codigo de vendedor: "<< codvend<<endl;
		cout<<"departamento: \t"<<elegir_departamento;
		cout<<"Cliente: "<<nomb<<endl;
		cout<<"codigo de articulo:"<<codsucur;
}
void salida_dedatos(int codvend,string nomb)
{
	cout<<"Nombre del cliente: "<<nomb<<endl;
	cout<<"Codigo de vendedor: "<<codvend<<endl;
	
}
void pedida()
{
  	int codvend,depart;
  	string nomb,departo,suc;
  	char codsucur;
	
	
	 
	cout<<"introduzca su codigo de vendedor"<<endl;
	cin>>codvend;
	std::cout << "introduzca nombre de cliente" << '\n';
	cin>>nomb;
	std::cout << "introduzca el codigo de  sucursal(P= Panamá, H= Herrera, C=Coclé)  " << '\n';
	cin>>codsucur;
	suc=elegir_sucursal(codsucur);
	salida_sucursal(suc);
	cout<<"introduzca el departamento (1. Damas, 2. Caballeros, 3. Niños 4. Hogar 5. Juguetería   6. Escolar) "<<endl;
	std::cin >> depart;
	departo=elegir_departamento(depart);
	salida_depar(departo);
	salida_dedatos(codvend,nomb);
}


void salidaprec(float prec,string desc,int cant)
{
	cout<<"La descripcion es: "<<desc<<endl;
	cout<<"El precio unitario es: "<<prec<<endl;
	cout<<"La cantidad es: "<<cant<<endl;
}
void salidatot(float monto)
{
	
	cout<<"Monto total: "<<monto<<endl;
	
}
void pedida2()
{
	
	float monto,promedio;
	string desc;
	float prec;
	int cant;
	
	
	cout<<"introduzca la descripcion del producto: "<<endl;
	cin>>desc;
	cout<<"introduzca el precio del producto :"<<endl;
	cin>> prec;
	cout<<"indique la cantidad: "<<endl;
	cin>> cant;
	monto=calculo(prec,cant);
	salidaprec(prec,desc,cant);
	salidatot(monto);
	suma=suma+monto;
	cout<<"Total por departamento: "<<suma<<endl;
	cantidadt=cantidadt+cant;
	cout<<"Cantidad total: "<<cantidadt<<endl ;
	promedio=suma/cantidadt;
	cout<<"Promedio de ventas total: "<<promedio<<endl;
	cout<<"cantidad total: "<<cantidadt<<endl;
}

int main()
{ 	

int reps;
inicializar();
pedida();
do {
	
	pedida2();
	
cout<<"si quiere añadir otro producto pulse 0, si no cualquier número"<<endl;
	cin>>reps;	
}
while(reps==0);
  return 0;
}
