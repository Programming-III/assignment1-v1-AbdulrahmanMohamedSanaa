#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

 class Reptile : public Animal{
   private:
   Animal* animal;
   int capacity;
   int currentCount;
   public:
    enclosure(capacity,currentCount);
    ~enclosure();
    void addAnimal(animal* a);
    void displayAnimals();
 };
 
 #endif
