#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Robot.h"

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
std::cout << "     " << std::endl;
}


int main() {

    srand((unsigned int)time(0));
    Robot robot;

    int tableau[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            tableau[i][j] = 0;
        }
    }
    tableau[0][0] = robot.GetForm();
    tableau[nbAleatoire()][nbAleatoire()] = 8;
    afficherTab(tableau);

    /*robot.AvancerDroite(tableau);
    afficherTab(tableau);
    robot.AvancerBas(tableau);
    afficherTab(tableau);
    robot.AvancerGauche(tableau);
    afficherTab(tableau);
    robot.AvancerHaut(tableau);
    afficherTab(tableau);*/





    std::cout <<std::endl<<"1 : Robot  |  8 : Ressource";


    return 0;
}