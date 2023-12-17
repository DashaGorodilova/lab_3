import Math;
#include<math.h>
#include<Windows.h>
#include<iostream>
using namespace Math;
double e = 2.71828;
Complex f(const Complex& z)
{
	Complex rezult;
	Complex u = z;
	Complex a = 1.0i;
	return rezult = 2 + 3 * a * exp(double(-u));
}
Rational f(const Rational& r)
{
	Rational u = r;
	Rational rezult;
	Rational a = (1, 2);
	rezult = 2 + 3 * a * exp(double(-u));
	return rezult;
}
double f(double x)
{
	double rezult;
	double a = 0.5;
	double u = x;
	rezult = 2 + 3 * a * exp(-u);
	return rezult;
}
void main()
{
	setlocale(LC_ALL, "rus");
	int m, s;
	double a, b, x;
	std::cout << "¬ведите реальную часть комплексного числа ";
	std::cin >> a;
	std::cout << "¬ведите мнимую часть комплексного числа ";
	std::cin >> b;
	std::cout << "¬ведите числитель дроби ";
	std::cin >> s;
	std::cout << "¬ведите знаменатель ";
	std::cin >> m;
	std::cout << "¬ведите вещЄственное число ";
	std::cin >> x;
	Math::Complex z = Math::Complex(a, b);
	Math::Rational r = Math::Rational(s, m);
	std::cout << "–езультат с комплексным числом: " << f(z) << std::endl;
	std::cout << "–езультат с рациональным числом: " << f(r) << std::endl;
	std::cout << "–езультат с вещественным числом: " << f(x) << std::endl;
}

