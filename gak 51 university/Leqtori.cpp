#include "Leqtori.h"
#include<string>
#include<iostream>
using namespace std;
Leqtori :: Leqtori() {
}
void Leqtori:: print_leqtori() {
	cout << "saxeli: " << fname << " \t" << "gvari: " << lname << "\t"
		<< "sagnebis raodenoba: " << sagn << "\t" << "statusi: " << status << endl;
}

void Leqtori:: setFname(string) {
	this->fname = fname;
}
void Leqtori:: setLname(string) {
	this->lname = lname;
}
void Leqtori:: setStatus(string) {
	this->status = status;
}
void Leqtori:: setSagn(int) {
	this->sagn = sagn;
}

string Leqtori:: getFname() {
	return this->fname;
}
string Leqtori:: getLname() {
	return this->lname;
}
string Leqtori:: getStatus() {
	return this->status;
}
int Leqtori:: getSagn() {
	return this->sagn;
}