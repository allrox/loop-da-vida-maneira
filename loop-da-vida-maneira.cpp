#include <iostream>
#include <locale.h>
using namespace std;

//Uma aplica��o para uma vida mais legal e produtiva
//@AllRox #HumanLearning
int hoje = 0, ontem = -1;
void loopDaVidaManeira();

int main(){

	setlocale(LC_ALL,"Portuguese");
	loopDaVidaManeira();

}

void loopDaVidaManeira(){
	
    while (hoje>ontem){
        cout<<"\nRespeite a tudo e todos";
        cout<<"\nN�o seja um babaca com ningu�m";
        cout<<"\nSeja �tico";
        cout<<"\nProcure ser humilde";
        cout<<"\nAprenda algo novo";
        cout<<"\nComprometa-se";
        cout<<"\nSeja respons�vel com o meio ambiente";
        cout<<"\nIndependente da velocidade, progrida";
        hoje++;
    }
    
}
