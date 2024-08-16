#include <iostream>
#include <locale.h>
using namespace std;

struct Carro
{
	int ano;
	string modelo;
	string cor;
	string placa;
	int potencia;
};
int main (){
	setlocale(LC_ALL,"Portuguese");
	string resp;
	cout<<"Seja muito bem-vindo(a) à página oficial de pedidos da Volkswagen! Por favor, insira, a seguir, os dados exigidos referentes ao veículo cuja aquisição é requisitada:"<<endl;
	do{
	Carro Volkswagen;
	cout<<"Qual o ano da versão desejada?"<<endl;
	cin>>Volkswagen.ano;
	cout<<"Qual o modelo do veículo em questão?"<<endl;
	cin>>Volkswagen.modelo;
	cout<<"Qual a cor do veículo requisitado?"<<endl;
	cin>>Volkswagen.cor;
	cout<<"Qual a potencia do automóvel pedido?"<<endl;
	cin>>Volkswagen.potencia;
	cout<<"Detalhes do pedido: Carro de lançamento "<<Volkswagen.ano<<", sendo seu modelo "<<Volkswagen.modelo<<", cuja cor é "<<Volkswagen.cor<<" e a potência requerida "<<Volkswagen.potencia<<" HPs."<<endl;
	cout<<"Deseja confirmar o pedido? S/N"<<endl;
	cin>>resp;
} while(resp=="N");
	cout<<"Pedido finalizado com sucesso!"<<endl;
}
