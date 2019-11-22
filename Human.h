//
// Created by rafael rios garcia on 11/19/19.
//
#include <iostream>

#ifndef AIRPORT_HUMAN_H
#define AIRPORT_HUMAN_H


class Human {
private:
    std::string name;
    int height;
    int weight;
public:
    std::string getName();
    int getHeight();
    int getWeight();

    void setName(std::string);
    void setHeight(int);
    void setWeight(int);
};


#endif //AIRPORT_HUMAN_H
