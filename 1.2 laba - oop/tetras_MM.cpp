#include "tetraidr_atd.h"
using namespace std;

namespace simple_shapes {
	// мультиметод
	void tetraidr::MultiMethod(shape *other,
		ofstream &ofst) {
		other->MMTetraidr(ofst);
	}}