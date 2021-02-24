//
// Created by val on 20.02.2021.
//
#include <ctime>
#include <cstdlib>
#include "Fonctions.h"
#ifndef PROJET_ROBOT_RESSOURCES_H
#define PROJET_ROBOT_RESSOURCES_H


class Ressources {

private:
    int m_x;
    int m_y;
    int m_form;

public:

Ressources();
int getX();
int getY();
int getForm();



};


#endif //PROJET_ROBOT_RESSOURCES_H
