#pragma once
#ifndef __share_atd__
#define __share_atd__
// ��������� �������� ������ shape
#include "shape_atd.h"
namespace simple_shapes {
	// ���
	class share : public shape {
		int rad; // ������
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);     // ����� 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMShare(ofstream &ofst);
		void MMTetraidr(ofstream &ofst);
		share() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif

