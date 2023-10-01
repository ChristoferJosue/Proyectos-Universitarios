//una personta tiene cinco monedas de distintos valores.
// ¿Cuántas sumas diferentes de dinero puede formar con las cinco monedas?

//formula =(n!)/(n-k)!



#include<stdio.h>

int factoriales(int n)
{	int i,factorial;
	if(n>0)
	{
		n=n *factoriales(n-1);//recursividad multiplicando y llamando a la funcion factoriales y le resta 1 al valor de n 
	}
	else//retorna 1 porque el factorial de 0 es 1 
	{
		n=1;
	}
		return n;
}




int main()
{
	int procedimiento,n,k,nFact,aFact,cantidad,kFact,a;
	n=5;
	cantidad=0;
	nFact=factoriales(n);//esto es n! factorial de 5 120
	for(k=n;k>0;k--)	
	{	
		printf("\npara k igual %d",k);
		kFact=factoriales(k);//esto llama a la funcion que retorna el valor de kFactorial
		a=(n-k);//sacar la parte de abajo 
		aFact=factoriales(a);//el factorial de abajo
		procedimiento=nFact/((aFact)*kFact);//usar la formula =(n!)/(n-k)! k!
		printf(" %d",procedimiento);
		cantidad=cantidad+procedimiento;//acumulador de cantidades 
	}

	
	printf("\nla cantidad de sumas diferentes pueden ser %d",cantidad);
	
	return 0;
}
