//
// Created by rafael rios garcia on 11/19/19.
//

#include "Human.h"

std::string Human::getName() {
    return name;
}
int Human::getHeight(){
    return height;
}
int Human::getWeight() {
    return weight;
}
void Human::setName(std::string Name) {
    name = Name;
}
void Human::setHeight(int Height) {
    height = Height;
}
void Human::setWeight(int Weight) {
    weight = Weight;
}
