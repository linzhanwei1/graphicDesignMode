#include "AbstractDisplay.h"
#include "CharDisplay.h"
#include "StringDisplay.h"

int main(int argc, char *argv[]) {
    AbstractDisplay *d1 = new CharDisplay("Hello");
    d1->display();

    AbstractDisplay *d2 = new StringDisplay("World");
    d2->display();

    delete d1;
    delete d2;

    return 0;
}
