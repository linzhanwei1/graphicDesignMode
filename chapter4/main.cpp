#include "Factory.h"
#include "IDCardFactory.h"

int main() {
    Factory *fac  = new IDCardFactory();
    Product *pro1 = fac->create("lucy");
    Product *pro2 = fac->create("liLei");
    Product *pro3 = fac->create("hanMeiMei");

    pro1->use();
    pro2->use();
    pro3->use();

    delete fac;
    delete pro1;
    delete pro2;
    delete pro3;

    return 0;
}
