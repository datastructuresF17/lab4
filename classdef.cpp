#include<iostream>
#include<string>
#include<list>
#include "classdef.h"
using namespace std;

kids::kids() {
  name = " ";
}

kids::kids(std::string &newkid) {
  name = newkid;
}
