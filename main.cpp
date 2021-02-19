#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Robot.h"
#include "Fonctions.h"


int nbAleatoire(){
    int nb = rand()%5;
    return nb;
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
    robot.Reperage(tableau);
    robot.Course(robot.GetDx(),robot.GetDy(),tableau);


     // TEST //
    /*robot.AvancerDroite(tableau);
    robot.AvancerBas(tableau);
    robot.AvancerGauche(tableau);
    robot.AvancerHaut(tableau);*/






    std::cout <<std::endl<<"1 : Robot  |  8 : Ressource";


    return 0;
}