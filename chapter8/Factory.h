#pragma once

#include "Item.h"
#include "Link.h"
#include "Page.h"
#include "Tray.h"
#include <functional>
#include <unordered_map>

class Factory {
public:
    virtual Link *createLink(const std::string &caption, const std::string &url)  = 0;
    virtual Tray *createTray(const std::string &caption)                          = 0;
    virtual Page *createPage(const std::string &title, const std::string &author) = 0;
    virtual ~Factory() {
    }
};

class FactoryHelper {
public:
    static void registerFactory(const std::string &name, std::function<Factory *()> createCallback) {
        s_createrMap.insert(std::make_pair(name, createCallback));
    }
    static Factory *getFactory(const std::string &name) {
        auto it = s_createrMap.find(name);
        return it->second();
    }

private:
    static std::unordered_map<std::string, std::function<Factory *()>> s_createrMap;
};

// std::unordered_map<std::string, std::function<Factory *()>> FactoryHelper::s_createrMap;
