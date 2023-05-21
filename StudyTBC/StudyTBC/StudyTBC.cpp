#include <iostream>
#include <cmath> // sin(), cos()

using namespace std;

// 보통 입력은 앞에 두고 출력으로 나갈것들은 뒤에 둔다.
void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180.0;
	const double radians = degrees * pi;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	return 0;
}
