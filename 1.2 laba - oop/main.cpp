#include <iostream>
#include <fstream>
#include "container_atd.h"
#include "shape_atd.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream in;
	in.open("in.txt");
	if (!in.is_open())
	{
		cout << "Ошибка, файл не найден";
		return -1;
	}
	if (in.fail())
	{
		cout << "Ошибка с файлом";
		return -1;
	}
	if (in.eof())
	{
		cout << "Ошибка, файл пуст";
		return -1;
	}
	ofstream out;
	out.open("out.txt");
	if (!out.is_open())
	{
		cout << "Ошибка с файлом";
		return -1;
	}

	cout << "Start" << endl;

	simple_shapes::container* begin = new simple_shapes::container;
	begin->In(in);
	begin->Sort();
	begin->Out(out);

	cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}