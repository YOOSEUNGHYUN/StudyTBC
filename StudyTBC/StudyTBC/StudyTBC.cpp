#include <iostream>
// 동적 바인딩과 정적 바인딩

using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
	cin >> op;

	//static binding (early binding)
	//int result;
	//switch (op)
	//{
	//case 0: result = add(x, y); break;
	//case 1: result = subtract(x, y); break;
	//case 2: result = multiply(x, y); break;
	//}

	//cout << result << endl;

	// Dynamic binding (late binding)
	int(*func_ptr)(int, int) = nullptr;
	switch (op)
	{
	case 0: func_ptr = add; break;
	case 1: func_ptr = subtract; break;
	case 2: func_ptr = multiply; break;
	}

	cout << func_ptr(x, y) << endl;

	return 0;
}