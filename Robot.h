#ifndef PROJET_ROBOT_ROBOT_H
#define PROJET_ROBOT_ROBOT_H



class Robot {

private:
    int m_form = 1;
    int m_x = 0;
    int m_y = 0;

public:
    Robot();
    int GetForm();
    int GetX();
    int GetY();
    int AvancerDroite(int tableau[5][5]);
    int AvancerBas(int tableau[5][5]);
    int AvancerHaut(int tableau[5][5]);
    int AvancerGauche(int tableau[5][5]);


};


#endif
