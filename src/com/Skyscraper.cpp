#include <iostream>

#include "Skyscraper.h"

Skyscraper::Skyscraper() {}
Skyscraper::~Skyscraper() {}

void Skyscraper::setName(std::string name) { mName = name; }

std::string Skyscraper::getName() { return mName; }

const Floor* Skyscraper::getFloor(unsigned int floorNumber) {
  if (floorNumber < mFloors.size())
    return &mFloors[floorNumber];
  else
    return NULL;
}

Floor& Skyscraper::addFloor() {
  mFloors.push_back(Floor());
  return mFloors[mFloors.size() - 1];
}

void Skyscraper::print() {
  for (int i = 0; i < mFloors.size(); i++) {
    Floor floor = mFloors[i];
    std::cout << "Storey: " << i
              << " Fibre: " << (floor.getHasFibre() ? "y" : "n")
              << " Carpet Colour: " << floor.getCarpetColour() << std::endl;
  }
}