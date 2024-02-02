#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>

struct Sales_data;                    // class declaration/ prototype

// function prototypes part of the class interface
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

// class definition
struct Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend std::istream &read(std::istream &is, Sales_data &item);
  friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:
  // constructors
  // default constructor
  Sales_data(std::string s, unsigned cnt, double rev): 
             bookNo (s), units_sold (cnt), revenue (rev * cnt) 
            {std::cout << "Three variable constructor" << std::endl;}
  // delegating constructors           
  Sales_data(): Sales_data("", 0, 0) 
            {std::cout << "First delegating constructor" << std::endl;}
  Sales_data(std::string s): Sales_data(s, 0, 0) 
            {std::cout << "Second delegating constructor" << std::endl;}                      
  Sales_data(std::istream &is) 
            { read(is, *this); std::cout << "Third delegating constructor" 
            << std::endl;}

  // function prototypes and definitions
  std::string isbn() const {return bookNo;}
  Sales_data& combine(const Sales_data&);
  double avg_price() const;

private:
  // data members
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
   
};


// function definitions

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;

  return *this;   // using this as we need to access the object as a whole
}

// inline only in the definition is the norm
inline double Sales_data::avg_price() const
{
  if (units_sold)
    return revenue / units_sold;
  else
    return 0;  
}

std::istream &read(std::istream &is, Sales_data &item)
{
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;   
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

#endif