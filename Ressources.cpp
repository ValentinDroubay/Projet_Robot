//
// Created by val on 20.02.2021.
//

#include "Ressources.h"

Ressources::Ressources() :  m_form {8}, m_x{nbAleatoire()}, m_y {nbAleatoire()} {}


int Ressources::getX(){
    return m_x;
}

int Ressources::getY(){
return m_y;
}


int Ressources::getForm(){
    return m_form;
}