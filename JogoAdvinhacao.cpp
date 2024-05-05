#include<iostream>
using namespace std;

int main(){
    cout<<"------------------------------------" << endl;
    cout<<"--Bem vindos ao jogo de advinhacao--" << endl;
    cout<<"------------------------------------" << endl;
    cout<< "Selecione o nivel de dificuldade"<< endl;
    cout<< "(F) facil -- (M) Medio -- (D) Dificil"<< endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_tentativas;
    if(dificuldade == 'F'){
        numero_tentativas = 15;
    }
    else if(dificuldade == 'M'){
        numero_tentativas = 10;
    }
    else{
        numero_tentativas = 5;
    }

    const int NUMERO_SECRETO = 42;
    int tentativas = 0;
    double pontos = 1000.0;

    bool nao_acertou = true;

    for(tentativas = 1; tentativas <= numero_tentativas; tentativas++){
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
            cout<< "Voce acertou o numero secreto em " <<tentativas<< " tentativas" <<endl;
            nao_acertou = false;
            break;
        }
        else if(maior)
            cout<<"Seu palpite foi maior do que o numero secreto" <<endl;
        else
            cout<<"Seu palpite foi menor do que o numero secreto" <<endl;

        cout <<endl;    
    }

    cout<< "Fim de jogo" <<endl;
    if(nao_acertou){
        cout<< "Voce perdeu! Tente novamente" <<endl;
    }
    cout.precision(2);
    cout<< fixed;
    cout<< "Sua pontuacao foi: "<<pontos<<" pontos." <<endl;
    cout <<endl;

    return 0;
}

