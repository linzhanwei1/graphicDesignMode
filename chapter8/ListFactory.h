#pragma once

#include "Factory.h"
#include "ListLink.h"
#include "ListPage.h"
#include "ListTray.h"

class ListFactory : public Factory {
public:
    Link *createLink(const std::string &caption, const std::string &url) override {
        return new ListLink(caption, url);
    }
    Tray *createTray(const std::string &caption) override {
        return new ListTray(caption);
    }
    Page *createPage(const std::string &title, const std::string &author) override {
        return new ListPage(title, author);
    }
};

static int ListFactoryInit = []() -> int {
    std::cout << "1" << std::endl;
    FactoryHelper::registerFactory("ListFactory", []() { return new ListFactory; });
    return 0;
}();
