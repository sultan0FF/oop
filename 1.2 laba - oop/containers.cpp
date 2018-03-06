#include "container_atd.h"
namespace simple_shapes {
	// ������������� ����������
	container::container() : len(0) { }
	// ������� ���������� �� ���������
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}

	// ���� ����������� ����������
	void container::In(ifstream &ifst) {
		while (!ifst.eof()) {
			if (((cont[len] = shape::In(ifst)) != 0) && len < 99) {
				len++;
			}
		}
	}

	// ����� ����������� ����������
	//void container::Out(ofstream &ofst) {
	//	ofst << "Container contents " << len
	//		<< " elements." << endl;
	//	for (int i = 0; i < len; i++) {
	//		ofst << i << ": ";
	//		cont[i]->Out(ofst);
	//	}
	//}
	// ����� ����������� ����������
	void container::OutShare(ofstream &ofst) {
		ofst << "Only shares." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->OutShare(ofst);
		}
	}

} // end simple_shapes namespace
