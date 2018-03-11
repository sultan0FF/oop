#pragma once
#ifndef __box_atd__
#define __box_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// ��������������
	class box : public shape {
		int x, y, z; // ������, ������, �����
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);    // ����� 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMShare(ofstream &ofst);
		void MMTetraidr(ofstream &ofst);
		box() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif
