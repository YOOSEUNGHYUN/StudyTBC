#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Object(객체) 라는 것은 데이터와 기능을 묶어놓은 것
// Friend : name, address, age, height, weight, ...
//			print()

// 데이터를 넣을 때는 struct를 쓰고,
// 기능을 넣을 때는 class를 쓰는 것이 일반적이다.
// C 에서는 struct에 기능을 넣을 수 없다. C++은 가능

class Friend
{
public: //access specifier(public, private, protected) 접근지정자
	string m_name;
	string address;
	int	   age;
	double height;
	double weight;
	// 멤버변수라는 것을 알려주기 위해서 변수명에 앞에 m_를 붙이기도하고
	// 요즘엔 앞에나 뒤에 _ 를 붙이기도 한다.

	void print()
	{
		cout << m_name << " " << address << " " << age << " " << height << " "
			<< weight << endl;
	}
};


void print(const string &name, const string &address, const int &age, 
	const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " << height << " " 
		<< weight << endl;
}

int main()
{
	// 클래스가 메모리를 갖도록하는 것을 instanciation 이라고한다.
	Friend JJ{"Jack Jack", "Uptown", 2, 30, 100}; 
	// JJ를 클래스의 instance 인스턴스라고 부른다.

	cout << &JJ << endl; // 이렇게하면 주소가 나온다. 하지만 Friend라는 클래스는 찍어볼 수 없다.
						 // 왜냐하면 instanciation 되지 않은 것이라 그렇다.
	
	
	JJ.print();

	vector<Friend> my_friends;
	my_friends.resize(2); // 친구 두명 저장할 공간이 생김

	//my_friends[0].print();
	//my_friends[1].print();

	for (auto& ele : my_friends)
		ele.print();

	/*vector<string> name_vec;
	vector<string> addr_vec;
	vector<int>    age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/

	return 0;
}
