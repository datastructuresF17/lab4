// Author:   Chad Palmer
// Semester: Fall 2017
// Class:    Data Structures (COSC 2436-004)
// Lab: 4

#include<iostream>
#include<string>
#include<list>
#include<memory>
#include "classdef.h"
using namespace std;

int main() {

    list<Kids> niceList;  // empty list of kids objects
    string entry;

    cout << "Enter kid name: ";
    getline(cin, entry);

    while (entry != "") {
        Kids niceKid = addToList(entry);
        niceList.push_back(niceKid);
        cout << "Enter another name: ";
        getline(cin, entry);
    }

    cout << "DONE" << endl;

    // Goal: create a dynamic list of kids objects using smart pointers


    return 0;
}
