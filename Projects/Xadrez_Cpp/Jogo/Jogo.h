#ifndef JOGO_H
#define JOGO_H

#include "tipos/Torre.h"
#include "tipos/Cavalo.h"
#include "tipos/Rei.h"
#include "tipos/Rainha.h"
#include "tipos/Bispo.h"
#include "tipos/Peao.h"

class Jogo {
public:
    int Tabuleiro[8][8]; // Matriz do tabuleiro 8x8
    void iniciarPartida(); // Método para iniciar a partida
    // Outros métodos e atributos do jogo
    void PrintTabuleiro(); // Método para imprimir o tabuleiro
    void Movimento();
};
#endif
