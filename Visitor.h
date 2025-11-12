#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;
 class Reptile : public Animal{
   private:
   string visitorName;
   int ticketsBrought;
   public:
   Visitor(string visitorName, int ticketsBrought);
   ~Visitor();
    void displayInfo();
 };
 
 #endif
