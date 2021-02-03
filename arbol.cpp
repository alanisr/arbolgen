//Árbol genealógico 
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;


int op=0, i=0, e=0, c=0,si=1;
	
string arbol[19]={"Ruiz Lopez", "Angel", "Abelina ", "Joaquin", "Olivia", 
				   "Felix", "Beatriz", "Raul", "Estela", "Pablo", "Ulises",				    
				   "*Alan", "Paty", "Uriel", "Cristian", "Ivan","Donovan", "Dante", "Ulises jr"};
//                    11      12        13      14          15       16        17        18	  
 

			   
void imprimeArbol ();
int imprimeMenu ();

void imprimeArbol (){
	system ("cls");				  
	cout<<"\t\t\t\t       ARBOL GENEALOGICO FAMILIA RUIZ LOPEZ\n\n";
	cout<<"\t\t\t\t\t         "<<arbol[0]<<"\n";
	cout<<"\t     /\t           \\"<<"\t\t\t\t\t      /       \t\t \\\n";
	cout<<"\t "<<arbol[1]<<"\t        "<<arbol[2]<<"\t\t\t\t"<<"    "<<arbol[3]<<"\t\t"<<arbol[4]<<"\n";
	cout<<"      / \t   |   \t  \t\\"<<"\t\t\t            /             |          \\ \n";
	cout<<"  "<<arbol[5]<<"\t\t"<<arbol[6]<<"\t\t"<<arbol[7]<<"\t\t\t\t"<<arbol[8]<<"\t\t"<<arbol[9]<<"\t   "<<arbol[10]<<"\n";
	cout<<"  /    \\    \\ \t   |\t\t |\t\t\t\t\t\t  |\t    /   \\ \n";
	cout<<arbol[11]<<" "<<arbol[12]<<" "<<arbol[13]<<"  "<<arbol[14]<<"\t"<<arbol[15]<<"\t              \t\t\t\t"<<arbol[16]<<"   "<<arbol[17]<<"  "<<arbol[18]<<"\n\n";;
}



int imprimeMenu (){
	int opcion = 0;	
	cout<<"\nSelecciona la opcion a responder \n";
	cout<<"\nCuales son:  ";
	cout<<"\n\t1.-  Apellidos familiares: ";
	cout<<"\n\t2.-  Los nombres de los abuelos paternos: ";
	cout<<"\n\t3.-  Los nombres de los abuelos maternos: ";
	cout<<"\n\t4.-  Todos los nombres de los hijos de mis abuelos paternos? ";	
	cout<<"\n\t5.-  Todos los nombres de los hijos de los abuelos paternos: ";
	cout<<"\n\t6.-  Todos los nombres de los hijos de los abuelos maternos: ";	
	cout<<"\n\t7.-  Todos los nombres de los nietos de los abuelos paternos: ";
	cout<<"\n\t8.-  Todos los nombres de los nietos de los abuelos maternos: ";
	cout<<"\n\t9.-  Quien es tu abuelo consentido o el mas querido: ";
	cout<<"\n\t10.- Quien es tu primo consentido o el mas querido: ";
	cout<<"\n\t11.- En que lugar estoy yo, quienes son mis padres y cual es mi nombre: ";
	cout<<"\n\t12.- Salir";	
	cout<<"\n\n Teclee el numero de opcion deseada:  ";
	cin>>opcion;
	return (opcion);
}

int main(){
	system("color B0");
	int i = 0, opcion= 0, respuesta = 0;
	for (i=0; i==0; ){
		
		imprimeArbol();
		opcion = imprimeMenu();
		switch (opcion){
			case 1:
				cout<<"\n\n\tMis Apellidos familiares son: ";
				cout<<arbol[0]<<endl;
				system ("pause");
				break;

			case 2:
				cout<<"\n\n\tLos nombres de mis abuelos paternos son: ";
				cout<<arbol[1]<<" y "<<arbol[2]<<endl;
				system ("pause");
				break;
		
			case 3: 
				cout<<"\n\n\tLos nombres de mis abuelos maternos: ";
				cout<<arbol[3]<<" y "<<arbol[4]<<endl;
				system ("pause");
				break;	
				
			case 4: 
				cout<<"\n\n\tLos nombres de mis padres: ";
				cout<<arbol[5]<<" y "<<arbol[8]<<endl;
				system ("pause");
				break;							

			case 5:
				cout<<"\n\n\tTodos los nombres de los hijos de mis abuelos paternos: ";
				cout<<arbol[5]<<" , "<<arbol[6]<<" y "<<arbol[7]<<endl;
				system ("pause");
				break;
			
			case 6: 
				cout<<"\n\n\tTodos los nombres de los hijos de mis abuelos maternos: ";
				cout<<arbol[8]<<" , "<<arbol[9]<<" y "<<arbol[10]<<endl;
				system ("pause");
				break;
			
			case 7: 
				cout<<"\n\n\tTodos los nombres de los nietos de mis abuelos paternos: ";
				cout<<arbol[11]<<" , "<<arbol[12]<<" , "<<arbol[13]<<" , "
				<<arbol[14]<<"  y  "<<arbol[15]<<endl;
				system ("pause");
				break;
			
			case 8: 
				cout<<"\n\n\tTodos los nombres de los nietos de mis abuelos maternos: ";
				cout<<arbol[11]<<" , "<<arbol[12]<<" , "<<arbol[13]<<" , "
				    <<arbol[16]<<" , "<<arbol[17]<<" y "<<arbol[18]<<endl;
				system ("pause");
				break;
			
			case 9:
				cout<<"\n\n\tEl abuelo consentido o el mas querido: ";
				cout<<arbol[1]<<endl;
				system ("pause");
				break;

			case 10: 
				cout<<"\n\n\tEl primo con el que me llevo mejor es : "<<arbol[17]<<endl;
				system ("pause");
				break;
				       	
			case 11: 
				cout<<"\n\n\tSoy hij@ de  "<<arbol[5]<<"  y  "<<arbol[8]<<"\tmi nombre es: "<<arbol[11] <<endl;
				system ("pause");
				break;
			
			case 12:
				printf("\n\n\tAdios :) \n");
				i = 1;
				break;
		    default:
				printf("\n\n\tSeleccion ivalida, intente nuevamente\n");
				break;	
		}
	}
system("PAUSE");
}
