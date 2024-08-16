#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int anguloI, anguloII, anguloIII;
	bool somatoriaCorreta=true;
	char resp;
	do{
		if (somatoriaCorreta==false){
			cout<<"Os valores são incompatíveis com um triângulo. Digite novamente. \n\n";
		}
	cout<<"Por favor, digite o valor do 1º ângulo:";
	cin>>anguloI;
	cout<<"Por favor, digite o valor do 2º ângulo:";
	cin>>anguloII;
	cout<<"Por favor, digite o valor do 3º ângulo:";
	cin>>anguloIII;
	somatoriaCorreta=false;
	}while(anguloI+anguloII+anguloIII!=180);
	
if(anguloI==90 || anguloII==90 || anguloIII==90)
	cout<<"O triângulo é retângulo";
else if(anguloI>90 || anguloII>90 || anguloIII>90)
	cout<<"O triângulo é obtusângulo";
else if (anguloI<90 && anguloII<90 && anguloIII<90)
	cout<<"O triângulo é acutângulo";
	
	cout<<"\n\n\n Deseja executar novamente? S/N \n";
	cin>>resp;
	if(resp=='S'){
		main();
	}
}
