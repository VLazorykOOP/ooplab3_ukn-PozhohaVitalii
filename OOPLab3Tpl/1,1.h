#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;
class DATE {
private:
	int day;
	int month;
	int year;

public:
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

	void setDay(int D) { if (0<D<=31)this->day = D; }
	int getDay() { return day; }
	void setMonth(int M) {if (0<M<=12) this->month = M; }
	int getMonth() { return month; }
	void setYear(int Y) { this->year = Y; }
	int getYear() { return year; }
	
	void showDATE1() {
		string MONTH;
		switch (month)
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

		default: MONTH = "empty";
			
		}
		cout << day << MONTH << year << endl;
	
	}
	void showDATE2() { cout << day <<"." << month << "." << year << endl; }

};



class VECTOR {
private:
	float x, y, z;
	string state;

public:
	VECTOR() {
		x = 0;
		y = 0;
		z = 0;
	}
	VECTOR(float A) {
		x = A;
		y = A;
		z = A;
	}
	VECTOR(float * Mass) {
		if (Mass == nullptr) {
			state = "ERROR CODE[0001]";
			cout << state << endl;
		}
		else {
			x = Mass[0];
			y = Mass[1];
			z = Mass[2];
		}
	}
	VECTOR(const VECTOR & EX) {
		x = EX.x;
		y = EX.y;
		z = EX.z;
		state = EX.state;
	}


	void showAll() { cout << x <<"   "<< y <<"   " << z << endl; }
	void SSetRand(float a = 10, float b = 3, float c = 7) {
		x = a;
		y = b;
		z = c;
	}
	float GGetRand() {
		int random;
		random = rand() % 100 + 1;
		
		if (random < 33)return x;
		else if (66 > random > 33) return y;
		else return z;
		
	}
	void Plus(const VECTOR& other) {
		x = x + other.x;
		y = y + other.y;
		z = z + other.z;
	}
	void Minus(const VECTOR& other) {
		x = x - other.x;
		y = y - other.y;
		z = z - other.z;
	}
	void VProduct(const VECTOR& other) {
		float x1, y1, z1;
		x1 = (y * other.z) - (z * other.y);
		y1 = (x * other.z) - (z * other.x);
		z1 = (x * other.y) - (y * other.x);
		x = x1;
		y = y1;
		z = z1;
	}
	void Deplicate(short int A) {
		float x1, y1, z1;
		if (A != 0) {
			x1 = x / A;
			y1 = y / A;
			z1 = z / A;
			x = x1;
			y = y1;
			z = z1;
		}
		else { state = "ERROR CODE [0002]"; }
		cout << state << endl;
	}
	bool Bilshe(const VECTOR& other){
		if (x > other.x && y > other.y && z > other.z)return 1;
		else return 0;
	}
	bool Menshe(const VECTOR& other) {
		if (x < other.x && y < other.y && z < other.z)return 1;
		else return 0;
	}
	bool Rivno(const VECTOR& other) {
		if (x == other.x && y == other.y && z == other.z)return 1;
		else return 0;
	}


	VECTOR& operator = (const VECTOR & other) {
		x = other.x;
		y = other.y;
		z = other.z;
		state = other.state;
		return *this;
	}
	~VECTOR() {
		cout <<" PbB: "<< state<<this<< endl;
	}
};

class VECT {
private:
	int Namb;
	long* G = nullptr;
	
public:
	
	VECT() { 
		
		Namb = 5;
		G = new long[Namb];
		for (int i = 0; i < Namb; i++) { G[i] = 0; }
	}
	VECT(int N) {
		this->Namb = N;
		G = new long[Namb];
		for (int i = 0; i < Namb; i++) { G[i] = 0; }
	}
	int GetNamb() { 
		int TEMP1 = this->Namb;
		return TEMP1; }

	long* GetPointerG() { return G; }


	void ShowVect() { 
		for (int i = 0; i < Namb; i++) { cout << G[i] << " "; }
		cout << endl;
	}
	void InitN(int N) {
		this->Namb = N;
		G = new long[Namb];
		for (int i = 0; i < Namb; i++) { G[i] = 0; }
	}
	void Init1N(int N, double Val) {
		this->Namb = N;
		G = new long[Namb];
		for (int i = 0; i < Namb; i++) { G[i] = Val; }
	}
	void DefaultV(long Element){
		for (int i = 0; i < Namb; i++) {
			G[i] = Element;
		}
	}
	long ElemByIndV(int i) {
		return G[i];
	}

	~VECT() { delete[] G; }
};

class MATRIX {
private:
	int m;
	VECT* V;
	string state;

public:
	MATRIX() {
		m = 5;
		state = "good";
		V = new VECT[m];
	}
	MATRIX(int N) {
		m = N;
		state = "good";
		V = new VECT[N];
		for (int i = 0; i < N; i++) { V[i].InitN(N); }
	}
	MATRIX(int N, int M, double value) {
		m = N;
		state = "good";
		V = new VECT[N];
		for (int i = 0; i < N; i++) { V[i].Init1N(M, value); }
	}
	MATRIX(const MATRIX & OTHER) {
		m = OTHER.m;
		state = OTHER.state;
		V = new VECT[m];
		for (int i = 0; i < m; i++) { V[i].InitN(OTHER.V[i].GetNamb()); }
		for (int i = 0; i < m; i++) { 
			for (int j = 0; j < OTHER.V[i].GetNamb(); j++) { 
			//	cout<< OTHER.V[i].GetPointerG()[j]<<endl;
			//	cout << OTHER.V[j].GetNamb() << endl;
				V[i].GetPointerG()[j] = OTHER.V[i].GetPointerG()[j];
			}
		}

	}

	void ShowMatrix() {
		for (int i = 0; i < m; i++) { V[i].ShowVect(); }
	
	}
	void Default(long Elem) {
		for (int i = 0; i < m; i++) {
			V[i].DefaultV(Elem);
		}
	}
	long ElemByInd(int i, int j){
		if (i >= m || j >= V[i].GetNamb()) {
			state = "OUT OF THE RANGE";
			cout << state << endl;
			return 0;
		}
		else
		{
		return V[i].ElemByIndV(j);
		}
		
	}
	void Plus(const MATRIX & OTHER){
	if (m==OTHER.m && V[0].GetNamb() == OTHER.V[0].GetNamb()){
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < OTHER.V[i].GetNamb(); j++) {
				V[i].GetPointerG()[j] += OTHER.V[i].ElemByIndV(j);
			}
		}
	}
	else { state = "NONE EQUAL MATRIX"; }
	}
	void Minus(const MATRIX& OTHER) {
		if (m == OTHER.m && V[0].GetNamb() == OTHER.V[0].GetNamb()) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < OTHER.V[i].GetNamb(); j++) {
					V[i].GetPointerG()[j] -= OTHER.V[i].ElemByIndV(j);
				}
			}
		}
		else { state = "NONE EQUAL MATRIX"; }
	}
	void Multiplication(const MATRIX& OTHER) {
		if (m == OTHER.m && V[0].GetNamb() == OTHER.V[0].GetNamb()) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < OTHER.V[i].GetNamb(); j++) {
					V[i].GetPointerG()[j] *= OTHER.V[i].ElemByIndV(j);
				}
			}
		}
		else { state = "NONE EQUAL MATRIX"; }
	}
	void Div(long F) {
		if (F!=0) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < V[i].GetNamb(); j++) {
					V[i].GetPointerG()[j] /= F;
				}
			}
		}
		else { state = "DIV BY ZERO"; }
	}
	bool Bilshe(int a, int b, int c, int d) {
		if (ElemByInd(a,b) > ElemByInd(c,d))return true;
		else
		{
			return false;
		}
	}
	bool Menishe(int a, int b, int c, int d) {
		if (ElemByInd(a, b) < ElemByInd(c, d))return true;
		else
		{
			return false;
		}
	}
	bool Rivne(int a, int b, int c, int d) {
		if (ElemByInd(a, b) == ElemByInd(c, d))return true;
		else
		{
			return false;
		}
	}
	~MATRIX(){
		delete[] V;
	}

};

