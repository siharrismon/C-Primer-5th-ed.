#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <string>
#include <iostream>
#include <vector>
#include "Screen.h"

class Window_mgr {
public:
  using ScreenIndex = std::vector<Screen>::size_type;

  void clear(ScreenIndex);

private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};  
};

// clear function moved to Screen.h so friend statement works

#endif
