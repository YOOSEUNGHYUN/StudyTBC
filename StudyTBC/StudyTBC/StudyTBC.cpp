#include <iostream>		
#include <fstream>	//	file stream
#include <string>
#include <cstdlib>	//	exit()
#include <sstream>
using namespace std;

//	기본적인 파일 입출력

int main()
{
	//	writing
	if (true)
	{
		//	out file stream
		ofstream ofs("my_first_file.dat", ios::app);	//	ios::app, ios::binary
														//	append 모드도 가능 (파일 존재하면 그 뒤에 이어서 작업)
		//ofs.open("my_first_file.dat");

		if (!ofs)
		{
			cerr << "Couldn't open file " << endl;
			exit(1);
		}

		//	file writing
		//ofs << "Line 1" << endl;		//	ofs를 이용하면 텍스트로 저장이 된다.
		//ofs << "Line 2" << endl;

		//	binary로 저장할 떄는 이 데이터가 어디까지있는지 알 수 없다. 미리 약속을 해서 알고 있어야 함
		const unsigned num_data = 10;
		ofs.write((char*)&num_data, sizeof(num_data));

		for (int i = 0; i < num_data; ++i)
			ofs.write((char*)&i, sizeof(i));

		/*stringstream ss;
		ss << "Line 1" << endl;
		ss << "Line 2" << endl;
		string str = ss.str();

		unsigned str_length = str.size();
		ofs.write((char*)&str_length, sizeof(str_length));
		ofs.write(str.c_str(), str_length);*/

		//ofs.close();	//	not necessary
	}

	//	reading
	if (true)
	{
		//	input file stream
		ifstream ifs("my_first_file.dat"/*, ios::binary*/);

		if (!ifs)
		{
			cerr << "Cannot open file" << endl;
			exit(1);
		}

		while (ifs)
		{
			std::string str;
			getline(ifs, str);	// string으로 한줄씩 읽는다. 끝까지 읽으면 while문이 false 됨.

			std::cout << str << endl;
		}

		//	unsigned ineger가 저장되어 있으니까 읽어들여서 데이터가 몇개 있는지 확인 
		//unsigned num_data = 0;
		//ifs.read((char*)&num_data, sizeof(num_data));

		////	실제로 읽어들임
		//for (unsigned i = 0; i < num_data; ++i)
		//{
		//	int num;
		//	ifs.read((char*)&num, sizeof(num));

		//	std::cout << num << endl;
		//}

		/*unsigned str_len = 0;
		ifs.read((char*)&str_len, sizeof(str_len));

		string str;
		str.resize(str_len);
		ifs.read(&str[0], str_len);

		cout << str << endl;*/

		//ifs.close();	//	not necessary
	}

	return 0;
}