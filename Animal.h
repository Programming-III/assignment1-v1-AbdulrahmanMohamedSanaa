#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
 class Animal {
   protected:
   string name;
   int age;
   bool isHungry;
   
   
   public:
   Animal(string name, int age, bool isHungry);
   ~Animal();
   void feed();
 }
 
 #endif
