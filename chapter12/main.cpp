#include "Display.h"
#include "FullBorder.h"
#include "SideBorder.h"
#include "StringDisplay.h"
#include <cassert>

int main() {
    Display *d1 = new StringDisplay("Hello");

    assert(d1->getRow(-1).empty());
    Display *d2 = new SideBorder(d1, '#');
    Display *d3 = new FullBorder(d2);

    d1->show();
    d2->show();
    d3->show();
    Display *d4 = new SideBorder(new FullBorder(new FullBorder(new SideBorder(new FullBorder(new StringDisplay("Hello, World")), '*'))), '/');
    d4->show();

    delete d1;
    delete d4;

    return 0;
}
