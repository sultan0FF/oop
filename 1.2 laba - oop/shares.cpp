#include "share_atd.h"
using namespace std;

namespace simple_shapes {
	// ���� ���������� ����
	void share::InData(ifstream &ifst)
	{
		ifst >> rad;
		shape::InData(ifst);
	}
}
namespace simple_shapes {
	// ����� ���������� ����
	void share::Out(ofstream &ofst)
	{
		ofst << "It is Sphere: r = "
			<< rad << endl;
		shape::Out(ofst);
		ofst << endl;
	}
}
	namespace simple_shapes {
	void share::OutShare(ofstream &ofst) 
	{
		Out(ofst);
	}
} // end simple_shapes namespace
