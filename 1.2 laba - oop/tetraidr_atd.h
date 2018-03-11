#pragma once
#ifndef __tetraidr_atd__
#define __tetraidr_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// ��������
	class tetraidr : public shape {
		int a; // ����� ����� 
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);     // ����� 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMShare(ofstream &ofst);
		void MMTetraidr(ofstream &ofst);
		tetraidr() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif