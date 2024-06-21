#include <CalcLetterChecker.h>


bool clc::isSign(const char &ch) {
  switch (ch) {
    case '-':
    case '+':
    case '/':
    case '*':
    case '^':
    case '.':
      return true;
  }
  return false;
}


bool clc::isNumeric(const char &ch) {
  return (
    ('0' <= ch) && (ch <= '9')
  );
}

bool clc::isFunction(const char* const &ch) {
  return (
    clc::keywords.count(ch)
  );
}