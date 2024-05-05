#include<iostream>
using namespace std;

int main(){
    cout<<"------------------------------------" << endl;
    cout<<"--Bem vindos ao jogo de advinhacao--" << endl;
    cout<<"------------------------------------" << endl;

    const int NUMERO_SECRETO = 42;
    int tentativas = 0;
    double pontos = 1000.0;

    bool nao_acertou = true;

    while(nao_acertou){
        tentativas++;
        cout<<"Tentativa " <<tentativas<<endl;    
        int chute;
        cout<<"Digite seu palpite: ";
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - pontos_perdidos;

        cout<<"Seu chute foi: " <<chute <<endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout<<"Parabens! Voce acertou!" <<endl;
            nao_acertou = false;
        }
        else if(maior)
            cout<<"Seu palpite foi maior do que o numero secreto" <<endl;
        else
            cout<<"Seu palpite foi menor do que o numero secreto" <<endl;

        cout <<endl;    
    }

    cout<< "Fim de jogo" <<endl;
    cout<< "Voce acertou o numero secreto em " <<tentativas<< " tentativas" <<endl;
    cout.precision(2);
    cout<< fixed;
    cout<< "Sua pontuacao foi: "<<pontos<<" pontos." <<endl;
    cout <<endl;

    return 0;
}

