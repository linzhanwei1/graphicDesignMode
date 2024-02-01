#include "Director.h"
#include "HTMLBuilder.h"
#include "TextBuilder.h"
#include "iostream"

int main(int argc, char *argv[]) {
    TextBuilder *builder1 = new TextBuilder();
    HTMLBuilder *builder2 = new HTMLBuilder();

    Director director(builder1);
    director.construct();
    std::string result = builder1->getResult();
    std::cout << result << std::endl;

    Director director2(builder2);
    director2.construct();
    std::string result2 = builder2->getResult();
    std::cout << result2 << std::endl;

    delete builder1;
    delete builder2;

    return 0;
}
