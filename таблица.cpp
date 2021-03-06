#include "pch.h"
#include <iostream>
#include <iomanip>

void N_tabl(int n, char **s);
void C_tabl(int n, double *N);
void K_tabl(int n, double *N);
void tabl(int n, char **s, double *N);

void a() { setlocale(LC_ALL, "C"); }
void r() { setlocale(LC_ALL, "Russian"); }

using namespace std;
int main() {
	int n = 5;
	double N[5];
	N[0] = 124.563;
	N[1] = 136.562673;
	N[2] = 26724.563;
	N[3] = 123654.563;
	N[4] = 124.56774223;
	char **s;
	s = new char *[n];
	for (int i = 0; i < n; i++)
	{
		s[i] = new char[15];
	}
	tabl(n,s,N);
}

void tabl(int n, char **s, double *N)
{	
	char s1[15] = { "     п к      " };
	char s2[15] = { "      n       " };
	char s3[15] = { "      t       " };
	char s4[15] = { "      f       " };
	char s5[15] = { "      v       " };

	s[0] = s1;
	s[1] = s2;
	s[2] = s3;
	s[3] = s4;
	s[4] = s5;

	N_tabl(n, s);
	C_tabl(n, N);
	K_tabl(n, N);
	
}

void N_tabl(int n, char **s)
{
	a();cout << char(218) << setfill(char(196)) << setw(15);
	for (int i = 0; i < n-1; i++)
	{cout << char(194) << setfill(char(196)) << setw(15);}
	cout << char(191) << endl;

	for (int i = 0; i < n; i++)
	{cout << char(179); r(); cout << s[i]; a();}
	cout << char(179) << endl;

	cout << char(195) << setfill(char(196)) << setw(15);
	for (int i = 0; i < n - 1; i++)
	{cout << char(197) << setfill(char(196)) << setw(15);}
	cout << char(180) << endl;
}

void C_tabl(int n, double* N) {
	a(); for (int i = 0; i < n; i++)
	{
		cout << char(179) << " " << setfill(char(32)) << setw(12) << N[i] << " ";
	}
	cout << char(179) << endl;

	cout << char(195);
	cout << setfill(char(196)) << setw(15);
	for (int i = 0; i < n - 1; i++)
	{
		cout << char(197) << setfill(char(196)) << setw(15);
	}
	cout << char(180) << endl;
}

void K_tabl(int n, double *N) {
	a();for (int i = 0; i < n; i++)
	{cout << char(179) << " " << setfill(char(32)) << setw(12) << N[i] << " ";}
	cout << char(179) << endl;

	cout << char(192);
	cout << setfill(char(196)) << setw(15);
	for (int i = 0; i < n - 1; i++)
	{cout << char(193) << setfill(char(196)) << setw(15);}
	cout << char(217) << endl;
}