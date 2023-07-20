#include <iostream>
// 공변 반환형
// override, final, covariant return type
using namespace std;

class A
{
public:
	void print() { cout << "A" << endl; }
	virtual A* getThis() { 
		cout << "A::getThis()" << endl; 
		return this; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; } // final 하면 오버라이드 못한다.
	virtual B* getThis() {
		cout << "B::getThis()" << endl;
		return this;
	}
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};


int main()
{
	A a;
	B b;
	//C c;
	
	A& ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;

	return 0;
}