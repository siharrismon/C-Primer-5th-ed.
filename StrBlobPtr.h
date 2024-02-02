#pragma once

#include "StrBlobPtr.fwd.h"
#include "StrBlob.fwd.h"

#include <string>
#include <memory>

#include <vector>
#include <stdexcept>
#include <initializer_list>


class StrBlobPtr {

public:
  StrBlobPtr(): curr(0) {}
  StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {} 
  std::string& deref() const;
  StrBlobPtr& incr();

private:
  std::shared_ptr<std::vector<std::string>> 
                       check(std::size_t, const std::string&) const;
  std::weak_ptr<std::vector<std::string>> wptr;
  std::size_t curr;                 

};

