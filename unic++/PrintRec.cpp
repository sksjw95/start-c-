#include <iostream>
using namespace std;

struct SalesRec {
	char pID[10];
	int dYear, dMonth, dDate;
	char deliveraddr[40];
};

void PrSalesRec(const SalesRec& srec);

int main() {
	SalesRec s = { "C25TV001",2019,11,15,
	"����� ���籸 ���з� 86" };
	PrSalesRec(s);
	return 0;
}

void PrSalesRec(const SalesRec& srec) {
	cout << "ǰ���ڵ� : " << srec.pID << endl;
	cout << "������� : " << srec.dYear << " ��";
	cout << srec.dMonth << "��";
	cout << srec.dDate << "��" << endl;
	cout << "����ּ� : " << srec.deliveraddr << endl;

}


