///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Caleb Mueller <mc61@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"

int main() {
    Animal myFirstAnimal = Animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight(11.5, WeightUnit::KG );
    myFirstAnimal.printInfo();

    return 0;
}
