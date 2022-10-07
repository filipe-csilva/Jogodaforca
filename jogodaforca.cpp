#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <ctime>

using namespace std;

map<char, bool> chutou;

bool letra_existe(string palavra_secreta, char chute){
    // for(int i = 0; i < palavra_secreta.size(); i++){
    //     if(chute == palavra_secreta[i]){
    //         return true;
    //     }
    // }
    for(char letra : palavra_secreta){
        if(chute == letra){
             return true;
        }
    }
    return false;
}

int main(){
    const string PALAVRA_SECRETA = "MELANCIA";
    //cout << PALAVRA_SECRETA << endl;

    cout << "*************************************" << endl;
    cout << "*     JOGO DA FORCA DO FILIPAO      *" << endl;
    cout << "*************************************" << endl;


    bool nao_acertou = true;
    bool nao_inforcou = true;

    while(nao_acertou && nao_inforcou){

        for(char letra : PALAVRA_SECRETA){
            if(chutou[letra]){
                cout << letra << " ";
            }else{
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Digite uma letra: ";
        char chute;
        cin >> chute;

        chutou[chute] = true;

        if(letra_existe(PALAVRA_SECRETA, chute)){
            cout << endl << "Você acertou! Seu chute está na palavra." << endl;
        }else{
            cout << endl << "Você errou! Seu chute não está na palavra." << endl;
        }
    }
}