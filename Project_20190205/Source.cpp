#include<iostream>
#include<iomanip>
#include<Windows.h>

using namespace std;

////  Project_20190205

void change_number(int &n)
{
	n *= 10;
}


//Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной 
//B(A — входной, B — выходной параметр; оба параметра являются вещественными).С помощью этой процедуры найти третьи степени пяти данных чисел.

void powerA3(int A, int &B)
{
	B = A * A*A;
}

	//Описать процедуру PowerA234(A, B, C, D), вычисляющую вторую, третью и четвертую степень числа A и возвращающую эти степени соответственно в переменных B, C и D(A — входной, B, C, D — выходные
	//параметры; все параметры являются вещественными).С помощью этой процедурынайтивторую, третьюичетвертуюстепеньпятиданныхчисел.

void powerA234(int A, int &B,  int &C, int &D)
{
	B = A * A;
	C = A * A*A;
	D= A * A*A*A;
}


//Proc3.Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее арифметическое AMean = (X + Y) / 2 и среднее геометрическое 
//GMean = √X·Y двух положительных чисел X и Y(X и Y — входные, AMeanиGMean—выходныепараметрывещественноготипа).
//Спомощью этой процедуры найти среднее арифметическое и среднее геометрическое для пар(A, B), (A, C), (A, D), если даны A, B, C, D.

/*
void Mean(int X, int Y, float& AMean, float& GMean)
{
	AMean = (X + Y) / 2;
	GMean = sqrt(X*Y);
}


int main()
{
	int a, b, c, d;
	float AMean, GMean;
	
		cin >> a >> b >> c >> d;
		Mean(a, b, AMean, GMean);
		cout << AMean << " " << GMean << endl<<endl;

		Mean(a, c, AMean, GMean);
		cout << AMean << " " << GMean << endl << endl;

		Mean(a, d, AMean, GMean);
		cout << AMean << " " << GMean << endl << endl;


	system("pause");

}*/

//Proc4. Описать процедуру TrianglePS(a, P, S), вычисляющую по стороне a равностороннеготреугольникаегопериметр P = 3·aи
//площадьS = a2·√3 / 4 (a — входной, P и S — выходные параметры; все параметры являются вещественными).
//С помощью этой процедуры найти периметры и площади трех равносторонних треугольников с данными сторонами.

/*
void  TrianglePS(float a, float& P, float& S)
{
	P = 3 * a;
	S = pow(a,2)*(sqrt(3.0/4));
}


int main()
{
	float a, P, S;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		TrianglePS(a, P, S);
		cout << P << "  " << S << endl << endl;
	}

	system("pause");

}*/

//Proc5.ОписатьпроцедуруRectPS(x1, y1, x2, y2, P, S), вычисляющую периметрP и площадь S прямоугольника со сторонами, 
//параллельными осям координат, по координатам(x1, y1), (x2, y2) его противоположных вершин(x1, y1, x2, y2 — входные, 
//P и S — выходные параметры вещественного типа).С помощью этой процедуры найти периметры и площади трех прямоугольников с данными противоположными вершинами.
/*
void  RectPS(float x1, float y1, float x2, float y2, float& P, float& S)
{
	float a,b;
	a = sqrt(pow((x2 - x1), 2));
	b = sqrt(pow((y2 - y1), 2));
	
	P = a * b;
	S = 2*(a+b);
}


int main()
{
	float a, P, S;

	for (int i = 0; i < 3; i++)
	{
		float x1, x2, y1, y2;
		cin >> x1>>x2>>y1>>y2;
		RectPS(x1, x2, y1, y2, P, S);
		cout << P << "  " << S << endl << endl;
	}

	system("pause");

}*/

//Proc6.Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого положительного числа K, 
//а также их сумму S(K — входной, C и S — выходные параметры целого типа).С помощью этой процедуры найти количество
//и сумму цифр для каждого из пяти данных целых чисел.

/*
void  DigitCountSum(int K, int& C, int& S)
{
	C = 0;
	S = 0;

	while(K)
	{
		C++;
		S += K % 10;
		K /= 10;
	}


}


int main()
{
	int K,C,S;

	for (int i = 0; i < 5; i++)
	{
		cin >> K;
		DigitCountSum(K, C, S);
		cout << C << "  " << S << endl << endl;
	}

	system("pause");

}
*/


//Proc7.Описать процедуру InvertDigits(K), меняющую порядок следования цифр целого положительного числа K на обратный
//(K — параметр целого типа, являющийся одновременно входным и выходным).С помощью этой процедуры поменять порядок 
//следования цифр на обратный для каждого из пяти данных целых чисел.


void  DigitCountSum(int K, int& C, int& S)
{
	C = 0;
	S = 0;

	while (K)
	{
		C++;
		S += K % 10;
		K /= 10;
	}


}


int main()
{
	int K, C, S;

	for (int i = 0; i < 5; i++)
	{
		cin >> K;
		DigitCountSum(K, C, S);
		cout << C << "  " << S << endl << endl;
	}

	system("pause");

}