#ifndef _STRINGSTACK_
#define _STRINGSTACK_

#include <string>
#include <queue>
#include "TrueStack.h"

class StringStack : public TrueStack {
  public:
    std::string pop();
    void push(std::string);
    bool isEmpty();
    StringStack();
  private:
    std::queue<std::string> stringstack;
}
