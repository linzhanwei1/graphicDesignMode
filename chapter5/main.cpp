#include "Singleton.h"
#include <iostream>
#include <string>

using namespace std;

class Apple : public Singleton<Apple> {
    friend Singleton<Apple>;

public:
    void show() {
        cout << __FUNCTION__ << endl;
    }

    ~Apple() {
        cout << __FUNCTION__ << endl;
    }

protected:
    Apple() {
    }
};

class Orange : public Singleton<Orange> {
    friend Singleton<Orange>;

public:
    void show() {
        cout << __FUNCTION__ << endl;
    }
    ~Orange() {
        cout << __FUNCTION__ << endl;
    }

protected:
    Orange() {
    }
};

int main() {
    Apple::GetInstance().show();
    cout << &Apple::GetInstance() << endl;
    Apple::GetInstance().show();
    cout << &Apple::GetInstance() << endl;

    Orange::GetInstance().show();
    cout << &Orange::GetInstance() << endl;
    Orange::GetInstance().show();
    cout << &Orange::GetInstance() << endl;
    Orange::GetInstance().show();
    cout << &Orange::GetInstance() << endl;

    return 0;
}
