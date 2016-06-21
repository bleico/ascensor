#include <iostream>
//#include <string.h>
#include <stdlib.h>
//#include <Ascensor.h>
using namespace std;

struct registro
{
       int valor;
       struct registro *sig;       
};

typedef registro nodo ;

bool colaVacia (nodo *primero)
{
	if (primero == NULL)
	{
		void iniciarCola();
		return true;
	}

	else
		return false;

}

void iniciarCola (  nodo *primero , nodo *nuevo , nodo *ultimo, char v)
{
	if (colaVacia(primero))
	{
		nuevo = new (nodo);	
		nuevo -> valor = v;
		nuevo = primero ;
		nuevo->sig =NULL;
	}
	else
	{
		nuevo = new (nodo);	
		nuevo -> valor = v;
		nuevo = ultimo ;
		nuevo->sig =NULL;

		cout <<"hola "<<endl;
		system("Pause");
	}
}

void encolar (nodo *nuevoNodo, nodo *ultimo, nodo aux, nodo *primero , char v)
{
	
     
      nuevoNodo = new (nodo);
      nuevoNodo ->valor= v ;
      nuevoNodo ->sig = NULL;

      if(colaVacia(primero))
	  {
		  primero = nuevoNodo;
	  }
      else
      {
          ultimo ->sig = nuevoNodo;
		  //falta una ultima linea
      }
      	
}

void desencolar ()
{
}

void primeroEnCola ()
{
}

void main ()
{
	void colaVacia (); 
	void iniciarCola ();
	void encolar ();
	void desencolar ();
	void primeroEnCola ();
}
