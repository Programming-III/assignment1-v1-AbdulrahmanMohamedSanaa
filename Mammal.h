#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
 class mammal: public Animal{
   private:
   string fur;
   public:
    mammal(string name, int age, bool isHungry,string fur);
    ~mammal();
 };
 
 #endif
