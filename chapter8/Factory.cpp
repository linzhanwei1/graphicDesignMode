#include "Factory.h"

std::unordered_map<std::string, std::function<Factory *()>> FactoryHelper::s_createrMap;
