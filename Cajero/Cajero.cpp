#include <iostream>

using namespace std;

int main()
{
 int saldo_inicial = 1000, opc;
 float extra, saldo = 0, retiro;

 cout << "\tBienvenido a tu cajero virtual de confianza" << endl;
 cout << "1. ingresar dinero en la cuenta" << endl;
 cout << "2. retirar dinero" << endl;
 cout << "3. salir" << endl;
 cout << "opcion: ";
 cin >> opc;

 switch(opc)
 {
 case 1:
	 cout << "digite la cantidad de dinero a ingresar: ";
     cin >> extra;
	 saldo = saldo_inicial + extra;
	 cout << "dinero en cuenta: " << saldo;break;

 case 2:
	 cout << "digite la cantidad de dinero a retirar: ";
	 cin >> retiro;

	 if (retiro > saldo_inicial)
	 {
		 cout << "no tienes la cantidad necesaria";
	 }
	 else
	 {
		 saldo = saldo_inicial - retiro;
		 cout << "dinero en cuenta: " << saldo;
	 }
  case 3: break;
 }
   return 0;
}

