#ifndef PROJET_ROBOT_ROBOT_H
#define PROJET_ROBOT_ROBOT_H
#include "Fonctions.h"

class Robot {

private:
    int m_form = 4;
    int m_x = 0;
    int m_y = 0;
    int m_dx = 0;
    int m_dy = 0;

public:
    Robot();
    int GetForm();
    int GetDx();
    int GetDy();
    int AvancerDroite(int tableau[5][5]);
    int AvancerBas(int tableau[5][5]);
    int AvancerHaut(int tableau[5][5]);
    int AvancerGauche(int tableau[5][5]);
    int Reperage(int tableau[5][5]);
    void Retour(int dx, int dy, int tableau[5][5]);
    void Course(int dx, int dy, int tableau[5][5]);
    ~Robot();

};


#endif
