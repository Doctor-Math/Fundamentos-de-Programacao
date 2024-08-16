#include<iostream>
#include <locale.h>
using namespace std;
int main(){
	int qnum, ult, num, soma=0;
	float media;
	setlocale(LC_ALL,"Portuguese");
	cout<<("Quantos números quer digitar?")<<endl;
	cin>>qnum;
	ult=qnum;
	for(int qnum=1; qnum<=ult; qnum+=1){
	cout<<("Digite o ")<<qnum<<("º número.")<<endl;
	cin>>num;
	soma=soma+num;
	}
	media=soma/ult;
	cout<<("A média é ")<<media<<(".")<<endl;
}
