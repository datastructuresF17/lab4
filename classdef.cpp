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
    int giftNum = 1;
    for(list<string>::iterator it = giftList.begin();
        it != giftList.end(); it++)
    {
        cout << giftNum << ": " << (*it) << endl;
        giftNum++;
    }
}

void Kids::addGift(string &gift) {
    giftList.push_back(gift);
}

Kids::~Kids() {}

Kids addToList(std::string &name) {
    string toy;
    list<string> wishList;

    cout << "Enter gifts for " << name << " followed by 'Enter':" << endl;
    getline(cin, toy);
    while (toy != "") {
        wishList.push_back(toy);
        //cout << endl;
        getline(cin, toy);
    }
    Kids newkid(name, wishList);
    return newkid;
}
