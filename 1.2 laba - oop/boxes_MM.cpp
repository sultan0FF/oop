#include "box_atd.h"
using namespace std;

namespace simple_shapes {
	// �����������
	void box::MultiMethod(shape *other,
		ofstream &ofst) {
		other->MMBox(ofst);
	}}