
//Christofer González /02/06/2020
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

//   variables declaradas globalmente 
     int codvend,dep,cant,reps,cantidadt;
     float prec,monto,total,promedio;
     string nomb,sucs,depar,desc;
     char opc;
	void datos()
	{
	
	cout<<("---ALMACEN REGALOS PARA TI--- \n");
    cout<<("introduzca su codigo de vendedor \n");
    cin>>(codvend);
    cout<<("introduzca el nombre del cliente \n" );
    cin>>(nomb);
    cout<<("Introduzca la sucursal P= Panamá, H= Herrera, C=Cocle \n");
    cin>>(opc);				
	}
    void casos_sucursales()
    {
    	 switch(opc)
    	{
         case 'p':case'P': 
            cout<<("---SUCURSAL DE PANAMA--- \n");
            sucs="Panama";
         break;	
    
         case 'h':case'H':
            cout<<("---SUCURSAL DE HERRERA--- \n ");
            sucs= "Herrera";
         break;
         
         case 'c':case'C':
            cout<<("---SUCURSAL DE COCLE--- \n");
            sucs="cocle";
            break;
		}	
    	
    		
	}
	void departamentos()
	{
		cout<<("indique el departamento:  1. Damas, 2. Caballeros, 3. Niños 4. Hogar 5.Juguetería   6. Escolar \n") ;
     cin>>(dep);
		
	}
     
    void casos_departamentos()
    {
    	switch(dep){

     case 1:
        depar="Damas";
     break;
    
     case 2:
        depar="Caballeros";
     break;
    
     case 3:
        depar="niños";
     break;
    
     case 4:
        depar="hogar";
     break; 
    
     case 5:
        depar="jugueteria";
     break;
    
     case 6:
        depar="escolar";    
      
      break;
  }
    	
    	
	}
     void inicializar()
     {
     	monto=0;
    	cantidadt=0;
     	
	 }
	 void producto()
	 {
		cout<<("indique  la descripcion del producto \n");
		cin>>(desc); 
	 	cout<<("indique el precio del producto \n");
		cin>>(prec);
		cout<<("indique la cantidad del producto \n");
		cin>>(cant);
		total=prec*cant;
		cantidadt=cantidadt+cant;
		monto=monto+total;
	 }
	 void salida()
	 {
	 	cout<<"sucursal: "<<sucs<<endl;
        cout<<"codigo de vendedor: "  <<codvend<<endl;
        cout<<"departamento: "<<depar<<endl;
        cout<<"cliente: "       <<nomb<<endl;
        cout<<"codigo de articulo: " <<depar<<endl;
        cout<<"descripcion: " <<desc<<endl;
        cout<<"precio unitario: "<<prec<<endl;
        cout<<"cantidad: "<<cant<<endl;
        cout<<"monto: "<<total<<endl;
	 	
	 	
	 	
	 }
	 void salida_total()
	 {
	 	
    	promedio=monto/cantidadt;
		cout<<"monto de ventas: "<<monto<<endl;
		cout<<"promedio de ventas: " <<promedio<<endl;
		cout<<"cantidad de articulos: "<<cantidadt<<endl;
	 	
	 	
	 }
	 
int main()
{
	//llamada de funciones
	datos();
	casos_sucursales();
	departamentos();
	casos_departamentos();
	inicializar();
	
	do{
		producto();
		salida();
    	cout<<"quiere agregar otra compra? 0-si 1-no \n";
    	cin>>(reps);       
  	}
  while(reps==0);
  salida_total();
  system("pause");
return 0;
}
