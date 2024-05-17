#ifndef Floor_H
#define Floor_H

#include <iostream>
#include <string>

class Floor {
 public:
  Floor();

  unsigned int getCarpetColour();
  void setCarpetColour(unsigned int colour);
  bool getHasFibre();
  void setHasFibre(bool hasFibre);

 private:
  std::string mTenant;
  unsigned int mCarpetColour;
  bool mHasFibre;
};

#endif /* defined(Floor_H) */