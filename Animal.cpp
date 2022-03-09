///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Caleb Mueller <mc61@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"

using namespace std;
const string Animal::_kingdom = "Animalia";

// Animal Constructor Definitions
Animal::Animal(const std::string &species) : _species(species) {}

Animal::Animal(const std::string &species, Gender gender) : _species(species), _gender(gender) {}

Animal::Animal(const std::string &species, Gender gender, float weight) : _species(species), _gender(gender),
                                                                          _weight(weight) {}

Animal::Animal(Gender gender, float weight) : _gender(gender), _weight(weight) {}


// Animal Getter Definitions
const std::string &Animal::getKingdom() {
    return _kingdom;
}

const std::string &Animal::getSpecies() const {
    return _species;
}

Gender Animal::getGender() const {
    return _gender;
}

float Animal::getWeight() const {
    return _weight;
}

// Animal Setter Definitions
void Animal::setSpecies(const std::string &species) {
    _species = species;
}

void Animal::setGender(Gender gender) {
    _gender = gender;
}

void Animal::setWeight(float weight) {
    _weight = weight;
}

// Animal Method Functions
void Animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << "    Kingdom = [" << _kingdom << "]" << endl;
    cout << "    Species = [" << _species << "]" << endl;
    cout << "    Weight = [" << _weight << "]" << endl;
}

bool Animal::isValid() {
    return true;
}



