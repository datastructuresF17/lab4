#ifndef CLASSDEF_H
#define CLASSDEF_H

// class prototypes

class Kids {
private:
    std::string name;
    std::list<std::string> giftList;
public:
    Kids();
    Kids(std::string &newkid, std::list<std::string> &gifts);
    void setName(std::string &kid);
    void setList(std::list<std::string> &list);
    void displayGifts();
    void addGift(std::string &gift);
    //void getName();
    ~Kids();
};

// function prototypes

Kids addToList(std::string &name);

#endif // CLASSDEF_H
