#include "PrintBanner.h"
#include <iostream>

int main(int argc, char **argv) {
    Print *print = new PrintBanner(std::string("HelloWorld"));

    print->printStrong();
    print->printWeak();

    delete print;

    return 0;
}
