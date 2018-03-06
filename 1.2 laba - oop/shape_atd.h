#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {
	// Класс, обобщающает все имеющиеся фигуры.
	// Является абстрактным, обеспечивая, тем самым, 
	// проверку интерфейса 
	class shape {
	public:
		// иденитфикация, порождение и ввод фигуры из пото-ка
		static  shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ввод
		virtual void Out(ofstream &ofst) = 0;     // вывод
		virtual void OutShare(ofstream &ofst); // вывод только шаров
	};
	// Вывод данных только для прямоугольника
		void shape::OutShare(ofstream &ofst) {
			ofst << endl;  // пустая строка
		}

} // end simple_shapes namespace
#endif
