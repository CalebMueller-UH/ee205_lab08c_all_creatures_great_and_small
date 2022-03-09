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

//const UnitOfMeasure Animal::DEFAULT_UNIT_OF_MEASURE = UnitOfMeasure::LBS;
const UnitOfMeasure Animal::DEFAULT_UNIT_OF_MEASURE = UnitOfMeasure::KG;

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

void Animal::setWeight(float weight, UnitOfMeasure units) {
    switch(units)
    {
        case(UnitOfMeasure::LBS):
        {
            if(DEFAULT_UNIT_OF_MEASURE == UnitOfMeasure::LBS){
                _weight = weight;
            } else
            {
                //Default weight is KGS, do conversion
                _weight = weight / LBS_PER_KG;
            }
            break;
        }
        case(UnitOfMeasure::KG):
        {
            if(DEFAULT_UNIT_OF_MEASURE == UnitOfMeasure::KG){
                _weight = weight;
            } else
            {
                //Default weight is LBS, do conversion
                _weight = weight * LBS_PER_KG;
            }
            break;
        }
        default:
            break;
    }
}

// Animal Method Functions
void Animal::printInfo() {
    if(this->isValid())
    {
        std::string units_literal;
        switch(DEFAULT_UNIT_OF_MEASURE){
            case(UnitOfMeasure::LBS):
            {
                units_literal = "lbs";
                break;
            }
            case(UnitOfMeasure::KG):
            {
                units_literal = "kg";
                break;
            }
        }
        cout << "Animal Fields" << endl;
        cout << "    Kingdom = [" << _kingdom << "]" << endl;
        cout << "    Species = [" << _species << "]" << endl;
        cout << "    Weight  = [" << _weight << " " << units_literal << "]" << endl;
    }else
    {
        cout << "Animal info has invalid entries and could not be printed" << endl;
    }
}

bool Animal::isValid() {
    if(_species.length() > 0 && _weight > 0){
        return true;
    }
    return false;
}



