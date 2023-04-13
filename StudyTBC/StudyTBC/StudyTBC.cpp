#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;
	//int 4byte = 32bit
	cout << std::bitset<32>(pixel_color) << endl;

	unsigned char red = (pixel_color & red_mask)>>16;
	unsigned char green = (pixel_color & green_mask)>>8;
	unsigned char blue = pixel_color & blue_mask;
	
	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;

	return 0;
}


