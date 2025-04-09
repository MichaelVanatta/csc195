#include <iostream>
using namespace std;

void set(int& i)
{
    i = 123;
}

void swap(int*p1, int*p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1;
    r = 40;

    set(i1);

    swap(&i1, &i2);

    int* p = nullptr;
    p = &i1;

    cout << i1 << endl; // value of i1
    cout << i2 << endl; // value of i2
    cout << &i1 << endl; // address of i1
    cout << &r << endl; // address of r, i.e. reference to i1
    cout << p << endl; // value of p, i.e. address of i1
    cout << &p << endl; // address of p
    cout << *p << endl; // dereference p, i.e. get hte value in the address stored int the pointer

    cout << "-------------------------------------------------------" << endl;

    int number1;
    int* hnum1 = new int(4);

    int* Arrnum = new int[4];
}
