/********************************************************************************
 * project     DC/DC buck-boost converter with digital control on the STM32F334 *
 *                                                                              *
 * file        main.cpp                                                         *
 * author      Ilya Galkin                                                      *
 * date        17.06.2020                                                       *
 * brief       Main program body                                                *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 * Include 
 ********************************************************************************/

#include "main.h"

/********************************************************************************
 * Main program body
 ********************************************************************************/

int main (void) {

    Periphery::Init();
    Application::Init();

    while(1) {}
}