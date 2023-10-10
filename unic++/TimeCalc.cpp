#include<iostream>
using namespace std;

struct TimeRec {
	int hours;
	int minutes;
};

// �ð��� ���ϴ� �Լ�
// �μ� TimeRec &t1 ������ �ð�
// �μ� const TimeRec &t2 :���� �ð�
// ��ȯ�� ����
void AddTime(TimeRec& t1, const TimeRec& t2) {
	t1.minutes += t2.minutes;
	t1.hours += t2.hours + t1.minutes / 60;
	t1.minutes %= 60;
}


//�ð��� ���ϴ� �Լ�
//�μ� TimeRec &t :������ �ð�
//     int minutes :���� �� ������ �ð�
//��ȯ�� ����
void AddTime(TimeRec& t, int minutes) {
	t.minutes += minutes;
	t.hours += t.minutes / 60;
	t.minutes %= 60;
}

int main() {
	TimeRec tRec1 = { 2,30 };
	TimeRec tRec2 = { 1,45 };

	cout << tRec1.hours << "�ð�" << tRec1.minutes << "�� +";
	cout << tRec2.hours << "�ð�" << tRec2.minutes << "�� =";
	AddTime(tRec1, tRec2);
	cout << tRec1.hours << "�ð�" << tRec1.minutes << "��" << endl;


	cout << tRec1.hours << "�ð�" << tRec1.minutes << "�� + ";
	cout << "135�� = ";
	AddTime(tRec1, 135);
	cout << tRec1.hours << "�ð�" << tRec1.minutes << "��" << endl;
	return 0;
}