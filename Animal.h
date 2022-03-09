///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Caleb Mueller <mc61@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

#include <iostream>
#include <string>

enum Gender { UNKNOWN_GENDER, MALE, FEMALE };

const float UNKNOWN_WEIGHT = -1;

class Animal {
public:
    // Constructors
    Animal(const std::string &species);
    Animal(const std::string &species, Gender gender);
    Animal(const std::string &species, Gender gender, float weight);
    Animal(Gender gender, float weight);

    // Getters
    static const std::string &getKingdom();
    const std::string &getSpecies() const;
    Gender getGender() const;
    float getWeight() const;

    // Setters
    void setSpecies(const std::string &species);
    void setGender(Gender gender);
    void setWeight(float weight);

    // Methods
    void printInfo();
    bool isValid();


private:
    static const std::string _kingdom;
    std::string _species; // Required
    enum Gender _gender{UNKNOWN_GENDER};
    float _weight{UNKNOWN_WEIGHT};
};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
