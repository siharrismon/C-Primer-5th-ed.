#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person;                         // declaration

class Person {

public:
  friend std::istream &read(std::istream &is, Person &record);
  friend std::ostream &print(std::ostream &os, const Person &record);

  Person() = default;
  Person(std::string &s): called (s) {}  
  Person(std::string &s, std::string &t): called (s), lives (t) {}

  std::string name() {return called;}    // returns a person's name
  std::string address() {return lives;}  // returns a person's address

  std::istream &read(std::istream &is, Person &record);
  std::ostream &print(std::ostream &os, const Person &record);

private:
  std::string called;                    // holds a person's name
  std::string lives;                     // holds a person's address

};

std::istream &Person::read(std::istream &is, Person &record)
{
  is >> record.called >> record.lives;
  return is;
}

std::ostream &Person::print(std::ostream &os, const Person &record)
{
  os << record.called << " " << record.lives;
  return os;   
}

#endif