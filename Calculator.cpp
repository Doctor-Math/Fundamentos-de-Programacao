#include <iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
using namespace std;
int opcao;
float n2;
float n1;
float soma(float n1, float n2)
{return(n1+n2);}
float subtracao(float n1, float n2)
{return(n1-n2);}
float multiplicacao(float n1, float n2)
{return(n1*n2);}
float divisao(float n1, float n2)
{return(n1/n2);}
float media(float n1, float n2)
{return((n1+n2)/2);}

char verificaN2(float n2)
{char v;
if (n2 == 0)
{v='t';}
else{v='f';}
return v;
}

void leitura()
{
	cout<<"\n Digite o valor do primeiro número:";
	cin>>n1;
	cout<<"\n Digite o valor do segundo número:";
	cin>>n2;
}

void pergunta()
{
	cout<<"\n Digite o valor do número:";
	cin>>n1;
}

void menu ()
{do
{Sleep(2000);
system("cls");
cout<<"\n 1. Soma.";
cout<<"\n 2. Subtração.";
cout<<"\n 3. Multiplicação.";
cout<<"\n 4. Divisão.";
cout<<"\n 5. Média.";
cout<<"\n 6. Potência";
cout<<"\n 7. Raiz quadrada";
cout<<"\n 8. Raiz cúbica";
cout<<"\n 0. Sair.";
cout<<"\n Digite a opção desejada:";
cin>> opcao;
switch(opcao)
{ case 1: leitura();
cout<<"\n O resultado da soma foi:"<<soma(n1,n2);
break;
case 2: 
leitura();
cout<<"\n O resultado da subtração foi:"<<subtracao(n1,n2);
break;
case 3: 
leitura();
cout<<"\n O resultado da multiplicação foi:"<<multiplicacao(n1,n2);
break;
case 4: 
leitura();
if (verificaN2(n2)=='t')
{ cout<<"\n Não existe divisão por zero!"; }
else
{ cout<<"\n O resultado da divisão foi:"<<divisao(n1,n2); }
cout<<"\n \n";
break;
default:
	cout<<"\n Digite uma opção válida!";
	break;
case 5: 
leitura();
cout<<"\n A média é:"<<media(n1,n2);
break;
case 6: 
leitura();
cout<<"\n O resultado da potência é:"<<pow(n1,n2);
break;
case 7: 
pergunta();
cout<<"\n O resultado da raiz quadrada é:"<<sqrt(n1);
break;
case 8: 
pergunta();
cout<<"\n O resultado da raiz cúbica é:"<<cbrt(n1);
break;
}
} while (opcao!=0);
}
int main()
{
	setlocale(LC_ALL,"Portuguese");
	menu();
}
