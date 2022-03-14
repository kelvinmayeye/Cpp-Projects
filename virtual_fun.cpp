#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived the virtual fun fun Function" << endl;
    }
};

int main(){
	Derived bs;
	bs.print();
}
