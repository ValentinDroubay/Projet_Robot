#include <iostream>
#include <cstdlib>
#include <ctime>

int nbAleatoire(){
    int nb = rand()%5;
    return nb;
}

void afficherTab(int tableau[5][5]){
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            std::cout<<"| "<< tableau[i][j]<<" ";
        }
        std::cout<<"|"<<std::endl;
    }
}

int main() {

    srand((unsigned int)time(0));

    int tableau[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            tableau[i][j] = 0;
        }
    }
    tableau[0][0] = 1;
    tableau[nbAleatoire()][nbAleatoire()] = 8;

    afficherTab(tableau);


    return 0;
}