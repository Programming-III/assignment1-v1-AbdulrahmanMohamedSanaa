#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

 class Reptile : public Animal{
   private:
   bool isVenomous;
   public:
    Reptile(string name, int age, bool isHungry,bool isVenomous);
    ~Reptile();
 };
 
 #endif
