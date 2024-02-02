#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>
#include "Window_mgr.h"

extern std::ostream& storeOn(std::ostream &, Screen &);
// extern BitMap& storeOn(BitMap &, Screen &);


class Screen {
  friend void Window_mgr::clear(ScreenIndex);
  friend std::ostream& storeOn(std::ostream &, Screen &);

public:
  typedef std::string::size_type pos;

  Screen() = default;
  Screen(pos ht, pos wd, int n, char c):    //  why is this not working??
    height (ht), width (wd), contents (n, c) {} // need char c to be " "
  Screen(pos ht, pos wd, char c): 
    height (ht), width (wd), contents (ht * wd, c) {}

  char get() const {return contents[cursor];}
  inline char get(pos ht, pos wd) const;
  Screen &move(pos r, pos c);
  void some_member() const;
  Screen &set(char);
  Screen &set(pos, pos, char);
  Screen &display(std::ostream &os) {do_display(os); return *this;}
  const Screen &display(std::ostream &os) const {do_display(os); return *this;}

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;  
  mutable size_t access_ctr;  
  void do_display(std::ostream &os) const {os << contents;}
};

inline
Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

char Screen::get(pos r, pos c) const {
  pos row = r * width;
  return contents[row + c];
}

void Screen::some_member() const {
  ++access_ctr;
}

inline Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
  contents[r*width + col] = ch;
  return *this;
}

// Moved from Window_mgr.h so the friend statement can work
inline void Window_mgr::clear(ScreenIndex i) {
  Screen &s = screens[i];
  s.contents = std::string(s.height * s.width, ' ');
}

#endif