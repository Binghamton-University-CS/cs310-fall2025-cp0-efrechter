#include "Animal.h"

class AnimalsInZoo {
private:
    int numAnimals;
    Animal animal;

public:
    AnimalsInZoo();
    AnimalsInZoo(const Animal& a);
    void addAnimal(const Animal& a);
    void display() const;
};
