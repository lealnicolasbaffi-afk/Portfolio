
#include "Jogo.h"
#include <iostream>
using namespace std;

void Jogo::iniciarPartida() {
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            this->Tabuleiro[i][j] = 0; // Inicializa todas as posições como vazias
        }
    }


//_________________________________________________________________________________//
        Peao *Bpeao[8];
            for (int i = 0; i < 8; i++) {
                Bpeao[i] = new Peao();
                this->Tabuleiro[1][i] = 1;
            }
        Peao *Ppeao[8];
            for (int i = 0; i < 8; i++) {
                Ppeao[i] = new Peao();
                this->Tabuleiro[6][i] = -1;
            }
    
//_________________________________________________________________________________//

        Cavalo *Bcavalo = new Cavalo();
            this->Tabuleiro[0][1] = 2;
        Cavalo *Bcavalo2 = new Cavalo();
            this->Tabuleiro[0][6] = 2;

        Cavalo *Pcavalo = new Cavalo();
            this->Tabuleiro[7][1] =-2;
        Cavalo *Pcavalo2 = new Cavalo();
            this->Tabuleiro[7][6] = -2;
//_________________________________________________________________________________//

        Torre *Btorre = new Torre();
            this->Tabuleiro[0][0] = 3;
        Torre *Btorre2 = new Torre();
            this->Tabuleiro[0][7] = 3;
        Torre *Ptorre = new Torre();
            this->Tabuleiro[7][0] = -3;
        Torre *Ptorre2 = new Torre();
            this->Tabuleiro[7][7] = -3;

//_________________________________________________________________________________//

        Bispo *Pbispo = new Bispo();
            this->Tabuleiro[7][2] = -4;
        Bispo *Pbispo2 = new Bispo();
            this->Tabuleiro[7][5] = -4;
        
        Bispo *Bbispo = new Bispo();
            this->Tabuleiro[0][2] = 4;
        Bispo *Bbispo2 = new Bispo();
            this->Tabuleiro[0][5] = 4;

//_________________________________________________________________________________//
        
        Rainha *Brainha = new Rainha();
            this->Tabuleiro[0][3] = 8;
        Rei *Brei = new Rei();
            this->Tabuleiro[0][4] = 5;


        Rainha *Prainha = new Rainha();
            this->Tabuleiro[7][3] = -8;
        Rei *Prei = new Rei();
            this->Tabuleiro[7][4] = -5;

//_________________________________________________________________________________//
     Movimento();
}
void Jogo::PrintTabuleiro() {
    // Implementação do método para imprimir o tabuleiro
    for (int i=0; i<5; i++) {
        std::cout <<"" << std::endl;
    }


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (this->Tabuleiro[i][j] == 0) {
                std::cout << ".  "; // Representa uma posição vazia
            } else {
                if (this->Tabuleiro[i][j] < 0)
                {
                    std::cout <<this->Tabuleiro[i][j]<<" ";
                }
                 if (this->Tabuleiro[i][j] > 0)
                {
                    std::cout <<this->Tabuleiro[i][j]<<"  ";
                }
           
            }
        }
        std::cout << std::endl;
    }
    // Aqui você pode adicionar a lógica para exibir o estado atual do tabuleiro no console
}
void Jogo::Movimento(){
    while(Brei->estavivo() && Prei->estavivo()){
        PrintTabuleiro();

    }
}