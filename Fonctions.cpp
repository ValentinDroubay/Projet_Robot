//
// Created by val on 19.02.2021.
//
#include <iostream>
#include "Fonctions.h"

void afficherTab(int tableau[5][5]){
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            std::cout<<"| "<< tableau[i][j]<<" ";
        }
        std::cout<<"|"<<std::endl;
    }
    std::cout << "     " << std::endl;
}