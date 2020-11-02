//busqueda secuencial
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main (){
	float NumCalzado;
	string marca, color;
	char comp = 'F';
	int i=0, a, NumPares, piezas, calzado [] = {3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7};
	int TotalDeCompra = 400, efec, efec_tot = 0, mot, mas_efec, tot, camb;
	
	cout<<"Bienvenido a Zapateria Innovasport"<<endl;
	cout<<"el valor de cada producto es $400"<<endl;
	cout<<"las marcas que tenemos disponibles son: adidas  puma  nike"<<endl;

		cout<<"ingrese la marca de Tenis que desee"<<endl;
		cin>>marca;
		cout<<"que numero de calzado busca?"<<endl;
		cin>>NumCalzado;

		a=0;
		while((comp == 'F') && (i<8)){
			if (calzado[i] == NumCalzado){
				comp = 'V';
			}	
			i++;
		}
	
	if(comp == 'F'){
		cout<<"Lo sentimos, no tenemos de ese numero"<<endl;
		exit(0);
	}
	else if (comp == 'V'){
		cout<<"Si tenemos de ese numero"<<endl;
	}
	
		cout<<"que color desea?"<<endl;
	cin>>color;
	
	cout<<"la marca de tenis es "<<marca<<endl;
	cout<<"el color de tenis es "<<color<<endl;
	cout<<"el total de su compra es:" <<TotalDeCompra<<endl;
		cout<<"Ingrese efectivo"<<endl;
		cin>>efec;
		efec_tot=efec_tot+efec;
		mot=TotalDeCompra-efec;
		if(efec<TotalDeCompra){
			do{
				cout<<"ingrese "<<mot<<" mas de efectivo"<<endl;
				cin>>mas_efec;
				efec_tot=efec_tot+mas_efec;
				mot=mot-mas_efec;
			}while(efec_tot<TotalDeCompra);
				}
		camb=efec_tot-TotalDeCompra;
		cout<<"el cambio es:"<<camb<<endl;
	
	getch();
	return 0;
}
