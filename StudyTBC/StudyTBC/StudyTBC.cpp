#include <iostream>
using namespace std;
// nested types in class

class Fruit
{
public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}