#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Robot.h"
#include "Ressources.h"
#include "Fonctions.h"




int main() {

    srand((unsigned int)time(0));
    Robot robot;
    Ressources ressources;
    Ressources ressources1;

    int tableau[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            tableau[i][j] = 0;
        }
    }
    tableau[0][0] = robot.GetForm();
    tableau[ressources.getX()][ressources.getY()] = ressources.getForm();
    tableau[ressources1.getX()][ressources1.getY()] = ressources1.getForm();
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