#include <stdio.h>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
#define USUARIO1 "1257893478"
#define CONTRASENA1 "13975"
#define USUARIO2 "5344563564"
#define CONTRASENA2 "45793"
#define USUARIO3 "1589631482"
#define CONTRASENA3 "42573"
#define USUARIO4 "1112369845"
#define CONTRASENA4 "42197"

	string usuario,contraseña;
	int contador=0;
	bool ingresa = false;
	int b,t;
	int c=0;
	int d=0;

void titulo(){
	cout <<"\t\t\tPOLICAJERO"<< endl;
	cout <<"Bienvenido a tu cajero de confianza"<<endl<<endl;
}

void verificar(){
	if (usuario==USUARIO1){t=1;}
	if (usuario==USUARIO2){t=2;}
	if (usuario==USUARIO3){t=3;}
	if (usuario==USUARIO4){t=4;}
}

void User01(){
	do
	{
	system("cls");
		titulo();
		cout << "Ingrese su Pin: ";
		cin >> contraseña;

		if (contraseña==CONTRASENA1)
		{ingresa=true;}
		else{
			cout << "La contraseña es incorrecta"<<endl;
			system("pause");
			contador++;
			}
	} while (ingresa == false && contador<3);

	if (ingresa ==false){
		cout << "Se ha ingresado por tercera ocasion mal los datos"<<endl; 
		cout << "Su cuenta quedara bloqueada hasta que se verifique su identidad. "<<endl;
		system("pause");
		b=0;}
	else{
		system("cls");
		cout << "Bienvenido al sistema: "<<endl;
		system("pause");
		b=1;
		}
}

void User02(){
	do
	{
	system("cls");
		titulo();
		cout << "Ingrese su Pin: ";
		cin >> contraseña;

		if (contraseña==CONTRASENA2)
		{ingresa=true;}
		else{
			cout << "La contraseña es incorrecta"<<endl;
			system("pause");
			contador++;
			}
	} while (ingresa == false && contador<3);

	if (ingresa ==false){
		cout << "Se ha ingresado por tercera ocasion mal los datos"<<endl; 
		cout << "Su cuenta quedara bloqueada hasta que se verifique su identidad. "<<endl;
		system("pause");
		b=0;}
	else{
		system("cls");
		cout << "Bienvenido al sistema: "<<endl;
		system("pause");
		b=1;
		}
}

void User03(){
	do
	{
	system("cls");
		titulo();
		cout << "Ingrese su Pin: ";
		cin >> contraseña;

		if (contraseña==CONTRASENA3)
		{ingresa=true;}
		else{
			cout << "La contraseña es incorrecta"<<endl;
			system("pause");
			contador++;
			}
	} while (ingresa == false && contador<3);

	if (ingresa ==false){
		cout << "Se ha ingresado por tercera ocasion mal los datos"<<endl; 
		cout << "Su cuenta quedara bloqueada hasta que se verifique su identidad. "<<endl;
		system("pause");
		b=0;}
	else{
		system("cls");
		cout << "Bienvenido al sistema: "<<endl;
		system("pause");
		b=1;
		}
}

void User04(){
	do
	{
	system("cls");
		titulo();
		cout << "Ingrese su Pin: ";
		cin >> contraseña;

		if (contraseña==CONTRASENA4)
		{ingresa=true;}
		else{
			cout << "La contraseña es incorrecta"<<endl;
			system("pause");
			contador++;
			}
	} while (ingresa == false && contador<3);

	if (ingresa ==false){
		cout << "Se ha ingresado por tercera ocasion mal los datos"<<endl; 
		cout << "Su cuenta quedara bloqueada hasta que se verifique su identidad. "<<endl;
		system("pause");
		b=0;}
	else{
		system("cls");
		cout << "Bienvenido al sistema: "<<endl;
		system("pause");
		b=1;
		}
}

void iniciarSesion(){
	system("cls");
	titulo();
	cout << "Ingrese su Codigo: ";
	cin >> usuario ;
	verificar();
	switch (t)
	{
	case 1: User01();break;
	case 2: User02();break;
	case 3: User03();break;
	case 4: User04();break;
	default: cout << "Usuario no registrado"<<endl;
	system("pause");break;
	}
}

void registro(){
	system("cls");
	titulo();
	cout << "Disponible en la proxima version"<<endl;
	system("pause");
}

void saldo(){
	system("cls");
	titulo();
	cout <<"No disponible por el momento"<<endl;
	system("pause");
}
void retiro(){
	system("cls");
	titulo();
	cout <<"No disponible por el momento"<<endl;
	system("pause");
}
void deposito(){
	system("cls");
	titulo();
	cout <<"No disponible por el momento"<<endl;
	system("pause");
}
void salir(){
system("cls");
	titulo();
	d=1;
}

void opciones(){
int tablero;

while (d==0)
{
	system("cls");
	titulo();
	cout<<"1.Consultar Saldo disponible"<<endl;
	cout<<"2.Retirar Efectivo"<<endl;
	cout<<"3.Depositar efectivo"<<endl;
	cout<<"4.Salir"<<endl;
	cin>>tablero;

	switch (tablero)
	{
	case 1: saldo();break;
	case 2: retiro();break;
	case 3: deposito();break;
	case 4: salir(); break;
	default:cout <<"Error" <<endl;break;
	}
}
}

int main(){
int opcion;

	while (d==0)
	{
	system("cls");
	cout <<"\t\t\tPOLICAJERO"<< endl;
	cout <<"Bienvenido a tu cajero de confianza"<<endl;
	cout <<"1. Para iniciar sesion"<<endl;
	cout <<"2. Registarse"<<endl;
	cout <<endl;
	cin >> opcion;

	switch (opcion)
	{
		case 1: iniciarSesion(); break;
		case 2: registro(); break;
		default: cout << "Error"<<endl;system("pause"); break;
	}
		system("cls");

	switch (b)
		{
		case 1:opciones();break;
		case 2: cout << "Gracias por utilizar Policajero"; break;
		default:break;
		}
	}
	cout << "Gracias por utilizar Policajero";
	return 0;
}