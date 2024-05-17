#ifndef Skyscraper_H
#define Skyscraper_H

#include <string>
#include <vector>

#include "Floor.h"

class Skyscraper {
 public:
  Skyscraper();
  virtual ~Skyscraper();

  void setName(std::string name);
  std::string getName();

  const Floor* getFloor(unsigned int floorNumber);
  Floor& addFloor();

  void print();

 private:
  std::string mName;
  std::vector<Floor> mFloors;
};

#endif  // Skyscraper_H