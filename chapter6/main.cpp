#include "Manager.h"
#include "MessageBox.h"
#include "Product.h"
#include "UnderlinePen.h"
#include <cassert>
#include <iostream>
#include <string>

using namespace std;

int main() {
    Manager  mgr;
    Product *p1 = new MessageBox("Hello");
    mgr.Register("MB", p1);
    // p1->use("World");

    auto p2 = mgr.Create("MB");
    p2->use("World");

    Product *p3 = new UnderlinePen("Pretty");
    mgr.Register("Pen", p3);
    // p3->use("Gril");

    auto p4 = mgr.Create("Pen");
    p4->use("Gril");

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
