#include "tetraidr_atd.h"
using namespace std;

namespace simple_shapes {
	// �����������
	void tetraidr::MultiMethod(shape *other,
		ofstream &ofst) {
		other->MMTetraidr(ofst);
	}}