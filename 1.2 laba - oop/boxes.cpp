#include "box_atd.h"
using namespace std;
namespace simple_shapes {
	// ���� ���������� ���������������
	void box::InData(ifstream &ifst)
	{
		ifst >> x >> y >> z;
	}
} // end simple_shapes namespace

using namespace std;
namespace simple_shapes {
	// ����� ���������� ���������������
	void box::Out(ofstream &ofst)
	{
		ofst << "It is Box: x = " << x
			<< ", y = " << y << ", z = " << z << endl;
	}
} // end simple_shapes namespace
