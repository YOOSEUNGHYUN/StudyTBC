#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Object(��ü) ��� ���� �����Ϳ� ����� ������� ��
// Friend : name, address, age, height, weight, ...
//			print()

// �����͸� ���� ���� struct�� ����,
// ����� ���� ���� class�� ���� ���� �Ϲ����̴�.
// C ������ struct�� ����� ���� �� ����. C++�� ����

class Friend
{
public: //access specifier(public, private, protected) ����������
	string m_name;
	string address;
	int	   age;
	double height;
	double weight;
	// ���������� ���� �˷��ֱ� ���ؼ� ������ �տ� m_�� ���̱⵵�ϰ�
	// ���� �տ��� �ڿ� _ �� ���̱⵵ �Ѵ�.

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
	// Ŭ������ �޸𸮸� �������ϴ� ���� instanciation �̶���Ѵ�.
	Friend JJ{"Jack Jack", "Uptown", 2, 30, 100}; 
	// JJ�� Ŭ������ instance �ν��Ͻ���� �θ���.

	cout << &JJ << endl; // �̷����ϸ� �ּҰ� ���´�. ������ Friend��� Ŭ������ �� �� ����.
						 // �ֳ��ϸ� instanciation ���� ���� ���̶� �׷���.
	
	
	JJ.print();

	vector<Friend> my_friends;
	my_friends.resize(2); // ģ�� �θ� ������ ������ ����

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
