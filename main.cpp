#include <iostream>
using namespace std;
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



 Animal::Animal(string name, int age, bool isHungry) : name(name),age(age),isHungry(isHungry) {};
 Animal::Animal(string name, int age, bool isHungry) : name(""),age(0),isHungry(false) {};
 Reptile::Reptile(string name, int age, bool isHungry,bool isVenomous): Animal(), isVenomous(false) {};
 Reptile::Reptile(string name, int age, bool isHungry,bool isVenomous): Animal(name,age,isHungry), isVenomous(isVenomous) {};
  mammal::mammal(string name, int age, bool isHungry,string fur): Animal(), isVenomous(false) {};
 mammal::mammal(string name, int age, bool isHungry,string fur): Animal(name,age,isHungry), fur("fur") {};
  Bird::Bird(string name, int age, bool isHungry,float wingspan): Animal(), isVenomous(false) {};
 Bird::Bird(string name, int age, bool isHungry,float wingspan): Animal(name,age,isHungry), isVenomous(isVenomous) {};
enclosure::enclosure(int capacity, int currentCount) : capacity(0), currentCount(0) {};
enclosure::enclosure(int capacity, int currentCount) : capacity(capacity), currentCount(currentCount) {};
  Visitor::Visitor(string name, int ticketBrought): name(""), ticketBrought(0) {};
 Visitor::Visitor(string name, int ticketBrought): name(name), ticketBrought(ticketBrought) {};

voidAnimal::feed(){
    cout << "feed"
}


int main()
{
    

    return 0;
}
