//5.1������
/*���������ڣ�����������֮�������������������������������ǹ涨����֮�������Ϊ����
�������� :
�ж������ݣ�ÿ�����������У��ֱ��ʾ�������ڣ���ʽΪYYYYMMDD
������� :
ÿ���������һ�У������ڲ�ֵ
����
20110412
20110422
���
11
*/
#include<iostream>
using namespace std;
class Date {
public:
	Date(int year, int month, int day) {
		if (month > 0 && month <= 12 && day > 0 && day < GetDay(year, month)) {
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "�Ƿ�����" << endl;
		}
	}
	int GetDay(int year, int  month) {

		int monthday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			monthday[2] = 29;
		}
		return monthday[month];
	}
	//���ڲ�ֵ
	bool operator == (const Date& d) {
		if (_year == d._year &&_month == d._month&&_day == d._day) {
			return true;
		}
		return false;
	}
	bool operator != (const Date& d) {
		if ((*this) == d) {
			return false;
		}
		return true;
	}
	bool operator > (const Date& d) {
		if (_year > d._year)
			return true;
		if (_year == d._year&&_month > d._month)
			return true;
		if (_year == d._year&&_month == d._month&&_day > d._day)
			return true;
		return false;
	}
	Date& operator+=(int day) {

		_day += day;
		while (_day > GetDay(_year, _month))
		{
			_day -= GetDay(_year, _month);
			_month++;
			if (_month == 13) {
				_month = 1;
				_year++;
			}
		}
		return *this;
	}
	int operator-(Date& d) {
		Date  d1(*this);
		if (d1 > d) {
			d1 = d;
			d = (*this);
		}
		int n = 1;
		while (d1 != d) {
			d1 += 1;
			++n;
		}
		return n;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main() {
	int date1, date2;
	int year1, month1, day1, year2, month2, day2;
	while (cin >> date1 >> date2) {
		year1 = date1 / 10000, month1 = date1 % 10000 / 100, day1 = date1 % 100;
		year2 = date2 / 10000, month2 = date2 % 10000 / 100, day2 = date2 % 100;
		Date d1(year1, month1, day1);
		Date d2(year2, month2, day2);
		cout << (d1 - d2) << endl;
	}
	return 0;
}