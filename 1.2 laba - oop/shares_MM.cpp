#include "share_atd.h"
using namespace std;

namespace simple_shapes {
	// �����������
	void share::MultiMethod(shape *other,
		ofstream &ofst) {
		other->MMShare(ofst);
	}}