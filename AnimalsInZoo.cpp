#include "AnimalsInZoo.h"
#include <iostream>

using namespace std;

 
AnimalsInZoo::AnimalsInZoo() {
    numAnimals = 0;
    // Animal's default constructor will be called automatically.
}

AnimalsInZoo::AnimalsInZoo(const Animal& a)
    : numAnimals(1), animal(a) {}


void AnimalsInZoo::addAnimal(const Animal& a) {
    animal = a;
    numAnimals = 1;
}

void AnimalsInZoo::display() const{
    cout << "DEBUG: display() called" << endl;
    cout << "Number of animals: " << numAnimals << endl;
    if (numAnimals == 1) {
        animal.display();
    }
}
