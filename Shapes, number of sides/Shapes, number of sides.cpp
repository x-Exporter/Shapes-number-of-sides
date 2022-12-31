#include <iostream>

using namespace std;

class Figure
{
protected:
	int amount_size = 0;
	string name = "Фигура";
public:
	int get_size()
	{
		return amount_size;
	}
	string get_name()
	{
		return name;
	}
};

class Triangle : public Figure
{
public:
	Triangle(int amount_size,string name)
	{
		this->amount_size = amount_size;
		this->name = name;
	}
};

class Quadrangle : public Figure
{
public:
	Quadrangle(int amount_size, string name)
	{
		this->amount_size = amount_size;
		this->name = name;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Figure figure;
	Triangle triangle(3,"Треугольник");
	Quadrangle quadrangle(4,"Четырехугольник");
	cout << "Количество сторон:" << endl;
	cout << figure.get_name() << ": " << figure.get_size() << endl;
	cout << triangle.get_name() << ": " << triangle.get_size() << endl;
	cout << quadrangle.get_name() << ": " << quadrangle.get_size();
}