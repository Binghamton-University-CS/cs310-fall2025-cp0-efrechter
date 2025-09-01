#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;
int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Small Horse", 1999);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);
   AnimalsInZoo zoo;
   Animal elephant("Elephant", 1758);
   zoo.addAnimal(elephant);
   zoo.display();
   animal2.display();
   animal3.display();
   animal1->display();

   delete animal1;
   return 0;
}
