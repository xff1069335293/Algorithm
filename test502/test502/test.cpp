//5.2日期类
//题目描述
//设计一个程序能计算一个日期加上若干天后是什么日期。
//输入描述 :
//输入第一行表示样例个数m，接下来m行每行四个整数分别表示年月日和累加的天数。
//输出描述 :
//输出m行，每行按yyyy - mm - dd的个数输出。
//示例1
//输入
//1
//2008 2 3 100
//输出
//2008 - 05 - 13
#include<iostream>
using namespace std;
class Date {
public:
	Date(int year, int month, int day) {
		if (month > 0 && month < 13 && day>0 && day <= Getmonthday(year, month)) {
			_year = year;
			_month = month;
			_day = day;
		}
		else {
			cout << "日期非法" << endl;
		}
		
	}
	int Getmonthday(int year, int month) {
		static int monthdays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			monthdays[2] = 29;
		}
		else {
			monthdays[2] = 28;
		}
		return monthdays[month];
	}

	//日期+天数
	Date operator+(int day) {
		Date d(*this);
		d._day += day;
		while (d._day > Getmonthday(d._year, d._month)) {
			d._day -= Getmonthday(d._year, d._month);
			++d._month;
			if (d._month == 13) {
				d._year++;
				d._month = 1;
			}
		}
		return d;
	}
	void Display() {
		printf("%04d-%02d-%02d\n", _year, _month, _day);
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	int n = 1;
	int year, month, day, days;
	cin >> n;
	while (n) {
		while (cin >> year >> month >> day >> days) {
			Date d(year, month, day);
			d = (d + days);
			d.Display();
		}
		--n;
	}
	return 0;
}