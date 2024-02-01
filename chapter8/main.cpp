#include "Factory.h"
#include "ListFactory.h"
#include <cassert>
#include <iostream>
#include <memory>
#include <string>

int main() {
    std::shared_ptr<Factory> factory(FactoryHelper::getFactory("ListFactory"));
    assert(factory != nullptr);
    std::shared_ptr<Link> people(factory->createLink("人民日报", "http://www.people.com.cn/"));
    std::shared_ptr<Link> gmw(factory->createLink("光明网", "http://www.gmw.cn/"));
    std::shared_ptr<Link> us_yahoo(factory->createLink("us_yahoo", "http://www.yahoo.com/"));
    std::shared_ptr<Link> jp_yahoo(factory->createLink("jp_yahoo", "http://www.yahoo.com.jp/"));
    std::shared_ptr<Link> google(factory->createLink("google", "http://www.google.com"));

    std::shared_ptr<Tray> trayNews(factory->createTray("new"));
    trayNews->add(people.get());
    trayNews->add(gmw.get());

    std::shared_ptr<Tray> trayYahoo(factory->createTray("yahoo!"));
    trayYahoo->add(us_yahoo.get());
    trayYahoo->add(jp_yahoo.get());

    std::shared_ptr<Tray> traySearch(factory->createTray("traySearch"));
    trayYahoo->add(trayYahoo.get());
    trayYahoo->add(google.get());

    std::shared_ptr<Page> page(factory->createPage("LinkPage", "tao"));
    page->addItem(trayNews.get());
    page->addItem(traySearch.get());
    page->output();

    return 0;
}
