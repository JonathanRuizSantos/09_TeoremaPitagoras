#include <iostream>
#include <math.h>
/* SOLUCION A TEOREMA DE PITAGORAS */

// ------------------------------------------------ VARIABLES GLOBALES
int opcion;
float h,co,ca;
// ------------------------------------------------ DECLARACION DE FUNCIONES
void menu();
float hipotenusa(float,float);
float catetoOpuesto(float,float);
float catetoAdyacente(float,float);
// ------------------------------------------------ FUNCION PRINCIPAL
using namespace std;
int main(int argc, char** argv) {
	cout<<"SOLUCION AL TEOREMA DE PITAGORAS CUANDO SE CONOCEN AL MENOS DOS LADOS"<<endl<<endl;
	
	menu();
	system("cls");
	
	if (opcion == 1){
		cout<<"CALCULANDO LA HIPOTENUSA "<<endl<<endl;
		
		cout<<"Ingresa CO: ";
		cin>>co;
		cout<<"Ingresa CA: ";
		cin>>ca;
		
		cout<<endl<<endl;
		cout<<"__Resultado__"<<endl;
		cout<<"h = "<<hipotenusa(co,ca)<<endl;
		
	}else if(opcion == 2){
		cout<<"CALCULANDO EL CATETO OPUESTO "<<endl<<endl;
		
		cout<<"Ingresa H: ";
		cin>>h;
		cout<<"Ingresa CA: ";
		cin>>ca;
		
		cout<<endl<<endl;
		cout<<"__Resultado__"<<endl;
		cout<<"co = "<<catetoOpuesto(h,ca)<<endl;
	}else if(opcion == 3){
		cout<<"CALCULANDO EL CATETO ADYACENTE "<<endl<<endl;
		
		cout<<"Ingresa H: ";
		cin>>h;
		cout<<"Ingresa CO: ";
		cin>>co;
		
		cout<<endl<<endl;
		cout<<"__Resultado__"<<endl;
		cout<<"ca = "<<catetoAdyacente(h,co)<<endl;
	}else if(opcion == 4){
		exit;
	}else{
		cout<<"La opcion no existe"<<endl;
	}
	
	cout<<endl<<endl;
	system("PAUSE");
	return 0;
}
// ------------------------------------------------ IMPLEMENTACION DE FUNCIONES
void menu(){
	cout<<"_________ MENU _________"<<endl;
	cout<<"(1) hipotenusa         "<<endl;
	cout<<"(2) cateto opuesto     "<<endl;
	cout<<"(3) cateto adyacente   "<<endl;
	cout<<"(4) salir              "<<endl;

	cout<<"--------------------------"<<endl;
	cout<<"Selecciona una opcion: ";
	cin>>opcion;
}
float hipotenusa(float co, float ca){
	float h = sqrt(pow(co,2)+pow(ca,2));
	return h;
}
float catetoOpuesto(float h, float ca){
	float co = sqrt(pow(h,2)-pow(ca,2));
	return co;
}
float catetoAdyacente(float h, float co){
	float ca = sqrt(pow(h,2)-pow(co,2));
	return ca;
}