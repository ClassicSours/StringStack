#include "StringStack.h"

StringStack::StringStack() {}

std::string StringStack::pop() {
  if(!stringstack.empty()) {
    return stringstack.pop();
  }
  return NULL;
}

void push(std::string value) {
  stringstack.push(value);
}

bool isEmpty() {
  return stringstack.empty();
}
