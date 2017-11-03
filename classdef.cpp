#include<iostream>
#include<string>
#include<list>
#include "classdef.h"
using namespace std;

Kids::Kids() {
  name = " ";
}

Kids::Kids(std::string &newkid, std::list<std::string> &gifts) {
    setName(newkid);
    setList(gifts);
}

void Kids::setName(std::string &kid) {
    name = kid;
}

void Kids::setList(std::list<std::string> &list) {
    giftList = list;
}

void Kids::displayGifts() {
    
}
