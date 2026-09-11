#include "Jogo.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Bem-vindo ao Jogo de Xadrez!" << endl;
    cout << "Desenvolvido por: github.com/NicolasLeal-afk" << endl;
    cout << "Versão: 0.1" << endl;
    cout << "Deseja iniciar uma nova partida? (s/n): ";
    char resposta;
    cin >> resposta;
    if (resposta == 's' || resposta == 'S') {
        Jogo *jogo = new Jogo();
        jogo->iniciarPartida();
        jogo->PrintTabuleiro();
        delete jogo;
    }
    else if (resposta == 'n' || resposta == 'N') {
        cout << "Saindo do jogo. Até a próxima!" << endl;
    }
    else {
        cout << "Opção inválida. Saindo do jogo." << endl;
    }
    return 0;
}