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
		//------
		double V(); // ���������� ������
		//------
		tetraidr() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif