#include <iostream>
#include "Robot.h"



Robot::Robot() : m_form{1}, m_x {0}, m_y(0), m_dx{0}, m_dy{0} {}
int Robot::GetForm() {
    return m_form;
}
int Robot::GetDx(){
    return m_dx;
}
int Robot::GetDy(){
    return m_dy;
}

int Robot::AvancerDroite(int tableau[5][5]){
    m_x += 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y][m_x-1] = 0;
    afficherTab(tableau);
    return m_x;
}
int Robot::AvancerBas(int tableau[5][5]){
    m_y += 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y-1][m_x] = 0;
    afficherTab(tableau);
    return m_y;
}
int Robot::AvancerHaut(int tableau[5][5]){
    m_y -= 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y+1][m_x] = 0;
    afficherTab(tableau);
    return m_y;
}
int Robot::AvancerGauche(int tableau[5][5]){
    m_x -= 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y][m_x+1] = 0;
    afficherTab(tableau);
    return m_x;
}
int Robot::Reperage(int tableau[5][5]) { // fonction qui " calcul la distance de la ressource
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tableau[i][j] == 8 ) {
                std::cout << " ressource detecter en (" << j << ", " << i << ")" << std::endl;
                m_dx = j;
                m_dy = i;
            return m_dx,m_dy;
            }
        }
    }
}
void Robot::Course(int dx, int dy, int tableau[5][5]) { // Fonction du chemin robot ressource
    for (int i = 0; i < dx ; ++i) {
        if (dx > 0) {
             AvancerDroite(tableau);
        } else if (dx < 0) {
             AvancerGauche(tableau);
        }
}
    for (int i = 0; i < dy ; ++i) {
        if (dy > 0) {
            dy * AvancerBas(tableau);
        } else if (dy < 0) {
            dy * AvancerHaut(tableau);
        }
    }
    if (dx == 0 && dy == 0){
        std::cout << "vous etes sur la ressource " << std::endl;
    }
}
