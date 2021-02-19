#include "Robot.h"


Robot::Robot() : m_form{1}, m_x {0}, m_y(0){}
int Robot::GetForm() {
    return m_form;
}
int Robot::GetX(){
    return m_x;
}
int Robot::GetY(){
    return m_y;
}
int Robot::AvancerDroite(int tableau[5][5]){
    m_x += 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y][m_x-1] = 0;
    return m_y;
}
int Robot::AvancerBas(int tableau[5][5]){
    m_y += 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y-1][m_x] = 0;
}
int Robot::AvancerHaut(int tableau[5][5]){
    m_y -= 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y+1][m_x] = 0;

}
int Robot::AvancerGauche(int tableau[5][5]){
    m_x -= 1;
    tableau[m_y][m_x] = m_form;
    tableau[m_y][m_x+1] = 0;
    return m_y;
}
