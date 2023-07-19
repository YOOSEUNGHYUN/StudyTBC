#include <iostream>
// 가상함수와 다형성
// Virtual Functions and Polymorphism
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	
	A& ref = c;
	ref.print();

	return 0;
}