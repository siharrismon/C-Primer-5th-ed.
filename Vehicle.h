#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

class Vehicle {
public:
  //constructors
  // default
  Vehicle(std::string make, std::string name, unsigned made, std::string col, 
          unsigned cc, unsigned seating): 
          manufacturer (make), model (name), year (made), colour (col), 
          capacity (cc), seats (seating) {}
  // delegating constructors
  Vehicle(): Vehicle("", "", 1901, "", 0, 0) {}
  Vehicle(std::string make): Vehicle(make, "", 1901, "", 0, 0) {}
  Vehicle(std::string make, std::string name): 
          Vehicle(make, name, 1901, "", 0, 0) {}
  Vehicle(std::string make, std::string name, unsigned made): 
          Vehicle(make, name, made, "", 0, 0) {}
  Vehicle(std::string make, std::string name, unsigned made, std::string col): 
          Vehicle(make, name, made, col, 0, 0) {}
  Vehicle(std::string make, std::string name, unsigned made, std::string col, 
          unsigned cc): Vehicle(make, name, made, col, cc, 0) {}
  Vehicle(std::string make, std::string name, unsigned made, std::string col, 
          unsigned cc, unsigned seating): Vehicle(make, name, made, col, cc, 
          seating) {}

  private:
    // data members
    std::string manufacturer, model, colour;
    unsigned year, capacity, seats;



};



#endif