#pragma once

#include "StrBlob.h"


StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il): 
    data(std::make_shared<std::vector<std::string>>(il)) {}

inline void StrBlob::check(size_type i, const std::string &msg) const {
  if (i >= data->size()) {
    throw std::out_of_range(msg);
  }
}

inline std::string& StrBlob::front() {
  check(0, "front on emtpy StrBlob");
  return data->front();
}

inline std::string& StrBlob::back() {
  check(0, "back on emtpy StrBlob");
  return data->back();
}

inline std::string& StrBlob::front() const {
  check(0, "front on emtpy StrBlob");
  return data->front();
}

inline std::string& StrBlob::back() const {
  check(0, "back on emtpy StrBlob");
  return data->back();
}

inline void StrBlob::pop_back() {
  check(0, "pop-back on emtpy StrBlob");
  return data->pop_back();
}

StrBlobPtr StrBlob::begin() {
  return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
  return StrBlobPtr(*this, data->size());
}  

