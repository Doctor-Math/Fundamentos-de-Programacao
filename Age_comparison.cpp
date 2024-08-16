#include <iostream>
#include <locale.h>
#include <conio.h> 
#include <time.h>
#include <stdio.h>
#include <windows.h> 
using namespace std; 
int somaMaisD(int somadezoito,int idadex){
    if (idadex>=18){
        return somadezoito=somadezoito+idadex;
    }
    else{
        return somadezoito=somadezoito;
    }
}
    int MaiorQue(int quantidade,int idadex){
        if (idadex>=18){
        return quantidade=quantidade+1;
    }
    else{
        return quantidade=quantidade;
    }
}
    int MenorQue(int quantidademenor,int idadex){
        if (idadex<18){
        return quantidademenor=quantidademenor+1;
    }
    else{
        return quantidademenor=quantidademenor;
    }
}
     int somaidade(int somaida, int idad){
    	return somaida=somaida+idad;
	}
	int mediaz(int medias, int somas){
		return medias=somas/10;
	}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int i=1, idade=0, soma=0, somad=0, somaisD=0, qntd=0, media=0, quantm=0, qntdm=0, quant=0, respI=0, respII=0, respIII=0, respIV=0, somasi=0, mediaI=0;
cout<<"\n Digite 10 idades conforme indicado a seguir: "<<endl;
Sleep (1000);
    do{
    cout<<"\n Digite a "<<i<<"ª idade: ";
    cin>>idade;
    somasi=somaidade(soma,idade);
    respIV=respIV+somasi;
    somaisD=somaMaisD(somad,idade);
    respI=respI+somaisD;
    qntd=MaiorQue(quant,idade);
    respII=respII+qntd;
    qntdm=MenorQue(quantm,idade);
    respIII=respIII+qntdm;
    i++;
}while(i<=10);
    mediaI=mediaz(media,respIV);
cout<<"\n"<<respII<<" idade(s) é (são) maior(es) ou igual(is) a 18.";
cout<<"\n"<<respIV<<" é a soma de todas as idades.";
cout<<"\n"<<respIII<<" idade(s) é (são) menor(es) que 18.";
cout<<"\n"<<mediaI<<" é a média das idades.";
cout<<"\n"<<respI<<" é a soma das idades maiores que 18";
}
