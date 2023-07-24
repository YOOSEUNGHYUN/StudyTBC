#include <iostream>
#include <string>
// 순수 가상 함수, 추상 기본 클래스, 인터페이스 클래스

using namespace std;

class Animal
{
protected: 
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const = 0;	// pure virtual function

	/*virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}*/
};

//void Animal::speak() const	// the body of the pure virtual function
//{
//	cout << m_name << " ??? " << endl;
//}

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	virtual void speak() const
	{
		cout << m_name << " Mooo " << endl;
	}
};

int main()
{
	//Animal ani("Hi");
	//ani.speak();

	Cow cow("hello");
	cow.speak();
	return 0;
}