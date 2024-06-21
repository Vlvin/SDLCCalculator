#pragma once
#include <map>


namespace clc {
  static std::map<const char*, int> keywords;
  bool isSign(const char &ch);
  bool isNumeric(const char &ch);
  bool isFunction(const char* const &ch);
}