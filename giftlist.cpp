// Author:   Chad Palmer
// Semester: Fall 2017
// Class:    Data Structures (COSC 2436-004)
// Lab: 4

#include<iostream>
#include<string>
#include<list>
#include "classdef.h"
using namespace std;

int main() {

    list<Kids> niceList;                    // empty list of kids objects
    string entry;

    cout << "Enter kid name: ";             // get kid name
    getline(cin, entry);

    while (entry != "") {
        Kids niceKid = addToList(entry);    // make a gift list and create kid object
        niceList.push_back(niceKid);        // add kid object to niceList
        cout << "Enter another name: ";     // repeat until blank entry
        getline(cin, entry);
    }
    cout << "\nSanta's nice list:" << endl;

    for (list<Kids>::iterator it = niceList.begin();       // display niceList
         it != niceList.end(); it++)
    {
        Kids kid = *it;
        displayObj(kid);
        cout << endl;
    }

    return 0;
}
