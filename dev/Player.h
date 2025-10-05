#pragma once

#include <string>
#include <vector>

#include "Factories.h"
#include "Units.h"

class Player {
 public:
  std::vector<Unit> units;
  int gold;
  std::string name;
  Player(AbstractFactory& factory, std::string _name);
  void createUnit(int unitid, AbstractFactory& factory);
};

Unit& idtounit(int, Unit&);
