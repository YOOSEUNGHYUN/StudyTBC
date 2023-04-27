#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> //std::time()

using namespace std;

//unsigned int PRNG() // Pseudo Random Number Generator
//{
//	static unsigned int seed = 5523; // seed number
//
//	seed = 825379 * seed + 2396403;
//
//	return seed % 32768;
//

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
	for (int count = 1; count <= 100; ++count)
	{
		cout << getRandomNumber(5,8) << "\t";

		if (count % 5 == 0) cout << endl;
	}

	return 0;
}



