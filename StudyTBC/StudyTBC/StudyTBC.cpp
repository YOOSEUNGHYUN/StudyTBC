#include <iostream>		
#include <fstream>	//	file stream
#include <string>
#include <cstdlib>	//	exit()
#include <sstream>
using namespace std;

//	파일의 임의 위치 접근하기

int main()
{
	const string filename = "my_file.txt";

	//	make a file
	{
		ofstream ofs(filename);

		for (char i = 'a'; i <= 'z'; ++i)
			ofs << i;
		ofs << endl;

	//	read the file
		{
			ifstream ifs("my_file.txt");

			ifs.seekg(5);//ifs.seekg(5, ios::beg);
			cout << (char)ifs.get() << endl;

			ifs.seekg(5, ios::cur);
			cout << (char)ifs.get() << endl;

			//ifs.seekg(-5, ios::end);

			/*ifs.seekg(0, ios::end);
			cout << ifs.tellg() << endl;*/	//	 현재 위치 알려줌

			/*string str;
			getline(ifs, str);

			cout << str << endl;*/
		}

		{
			//fstream iofs(filename, ios::in | ios::out);
			fstream iofs(filename);

			iofs.seekg(5);
			cout << (char)iofs.get() << endl;	// read

			iofs.seekg(5);
			iofs.put('A');	//	write
		}

		return 0;
	}

}