//-------------------------------------
#include <iostream>
#include <fstream>
#include "Singleton.h"
#include "Header.h"
//-------------------------------------
using namespace std;
//-------------------------------------
const char INPT[] = "Duomenys.txt";
const char OTPT[] = "Rezultatai.txt";
const int Cn = 100;
const int Cm = 100;
//-------------------------------------
void ivedimas (int A[Cn][Cm], int & n1, int & n2);
void MokVidurkis (int A[Cn][Cm], int n1, int n2);
void MokVidSpaus (int A[Cn][Cm], int n1, int n2);
//-------------------------------------
int main()
{
	ivedimas (Singleton::Instance()-> A, Singleton::Instance()-> n1, Singleton::Instance()-> n2);
	MokVidurkis (Singleton::Instance()-> A, Singleton::Instance()-> n1, Singleton::Instance()-> n2);
	MokVidSpaus (Singleton::Instance()-> A, Singleton::Instance()-> n1, Singleton::Instance()->  n2);
	cout << vezys;


	
	return 0;
}
//-------------------------------------
void ivedimas (int A[Cn][Cm], int & n1, int & n2)
{
	ifstream fd ("Duomenys.txt");
	fd >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		for (int k = 0; k < n2; k++)
		{
			fd >> A[i][k];
			A[i][n2] = 0;
		}
	}
	fd.close();
}
//-------------------------------------
void MokVidurkis (int A[Cn][Cm], int n1, int n2)
{
	for (int i = 0; i < n1; i++)
	{
		for (int k = 0; k < n2; k++)
		{
			A[i][n2] += A[i][k];
		}
		A[i][n2] = A[i][n2] / n2;
	}
}
//-------------------------------------
void MokVidSpaus (int A[Cn][Cm], int n1, int n2)
{
	ofstream fv (OTPT);
	fv << "Mokiniu vidurkiai:" << endl;
	for (int i = 0; i < n1; i++)
	{
		fv << i + 1 << ". " << A[i][n2] << endl;
	}
	fv.close();
}
//-------------------------------------