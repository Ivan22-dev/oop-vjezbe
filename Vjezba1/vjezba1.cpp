#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <iomanip>
int main()
{
	bool flag;
	std::cout << "unesi " << true << " - " << false << std::endl;
	std::cin >> flag;
	std::cout << std::boolalpha << flag << '\n';
	std::cout << std::showbase << std::hex;
	std::cout << std::uppercase << 77<< '\n';
	std::cout << std::noboolalpha << flag << '\n';
	std::cout << std::nouppercase << 77 << '\n';
	int a = 255;
	std::cout << "hex " << std::hex << a<< std::endl;
	std::cout << "dec " << std::dec << a << std::endl;
	std::cout << "oct " << std::oct << a << std::endl;
	double pi = 3.141592;
	std::cout << "default:\n";
	std::cout << pi << '\n';
	std::cout << "fixed:\n" << std::fixed;
	std::cout << pi<< '\n';
	std::cout << "default:\n";
	std::cout << pi << '\n';
	std::cout << "scientific:\n" << std::scientific;
	std::cout << pi << '\n';
	int n = -77;
	std::cout.width(6); std::cout << std::left << n << '\n';
	std::cout.width(6); std::cout << std::right << n << '\n';
	std::cout << "pi = " << std::scientific << std::uppercase;
	char a[10], b[10];
	std::istringstream iss("one \n \t two");
	iss >> std::noskipws;
	iss >> a >> std::ws >> b;
	std::cout << a << ", " << b << '\n';
	int a = 100;
	int b = 200;
	std::cout << b << std::endl << a + b;
	std::endl(std::cout);
	std::ofstream outfile ("test.txt");
	for (int n=0; n<50; n++)
		outfile << n << std::flush;
	outfile.close();
	double f = 3.14159;
	std::cout << std::setprecision(5) << f << '\n';
	std::cout << std::fixed;
	std::cout << std::setprecision(9) << f << '\n';
	std::cout << std::setbase(16);
	std::cout << 110 << std::endl;
	std::cout << std::setfill('x') << std::setw(7);
	std::cout << 77 << std::endl;
	std::cout << std::hex;
	std::cout << std::setiosflags(std::ios::showbase | std::ios::uppercase);
	std::cout << 100<< std::endl;
	std::cout << std::hex << std::setiosflags(std::ios::showbase);
	std::cout << 100 << std::endl;
	std::cout << std::resetiosflags(std::ios::showbase) << 100 << std::endl;
}