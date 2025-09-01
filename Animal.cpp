#include "Animal.h"

Animal::Animal(string speciesName, unsigned int discoveryYear) {
         species = speciesName;
         year_discovered = discoveryYear;
	}

Animal :: Animal() : species(""), year_discovered(0) {};

	void Animal:: display() const{
         cout << species << " [" << year_discovered << "]" << endl;
      }


