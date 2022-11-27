#include <math.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class DATE {
	private
		int _day, _month, _year;

	public
	DATE() {
		setDay(0);
		setMonth(0);
		setYear(0);
	}
	DATE(int a, int b, int c) {
		setDay(a);
		setMonth(b);
		setYear(c);
	}

	void setDay(int D) { if (0<D<=31)this->_day = D; }
	int getDay() { return _day; }
	void setMonth(int M) {if (0<M<=12) this->_month = M; }
	int getMonth() { return _month; }
	void setYear(int Y) { this->_year = Y; }
	int getYear() { return _year; }
	
	void showDATE1() {
		string MONTH;
		switch (int _month)
		{
		case 1: MONTH = "January"; break;
		case 2: MONTH = "February"; break;
		case 3: MONTH = "March"; break;
		case 4: MONTH = "April"; break;
		case 5: MONTH = "May"; break;
		case 6: MONTH = "June"; break;
		case 7: MONTH = "July"; break;
		case 8: MONTH = "August"; break;
		case 9: MONTH = "September"; break;
		case 10: MONTH = "October"; break;
		case 11: MONTH = "November"; break;
		case 12: MONTH = "December"; break;

		default: MONTH = "empty"
			break;
		}
		cout << _day << MONTH << _year << endl;
	
	}
	void showDATE2() { cout << _day << _month << _year << endl; }

};