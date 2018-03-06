#pragma once
#ifndef __shape_atd__
#define __shape_atd__
#include <fstream>
using namespace std;
namespace simple_shapes {
	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����, 
	// �������� ���������� 
	class shape {
	public:
		// �������������, ���������� � ���� ������ �� ����-��
		static  shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ����
		virtual void Out(ofstream &ofst) = 0;     // �����
		//-------
		virtual double V() = 0; // ���������� ������
		//-------
		bool Compare(shape &other);
		//-------
	};
} // end simple_shapes namespace
#endif
