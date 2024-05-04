#include<iostream>
using namespace std;

int main(){
    cout<<"------------------------------------" << endl;
    cout<<"--Bem vindos ao jogo de advinhacao--" << endl;
    cout<<"------------------------------------" << endl;

    const int NUMERO_SECRETO = 42;
    int tentativas = 0;

    bool nao_acertou = true;

    while(nao_acertou){
        tentativas++;
        cout<<"Tentativa " <<tentativas<<endl;    
        int chute;
        cout<<"Digite seu palpite: ";
        cin >> chute;

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

    cout << "Fim de jogo" <<endl;
    cout<< "Voce acertou o numero secreto em " <<tentativas<< " tentativas" <<endl;

    return 0;
}

