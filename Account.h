#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>



class Account {
public:
  void calculate() {amount += amount * interestRate;}
  // static members exist outside fo the class
  static double rate() {return interestRate;}  
  static void rate(double);

private:  
  std::string owner;
  double amount;
  static double interestRate;
  static double initRate;
  static constexpr int period = 30;  // constexpr so init inside defined outside
  double daily_tbl[period];

};

void Account::rate(double newRate) {  // initialises via a function
  interestRate = newRate;
}

double Account::interestRate = initRate;   // no need to repeat 
                                           // Account:: for initRate

constexpr int Account::period;             // initialiser in class def



#endif