#include <iostream>
#include<vector>
#include"Leqtori.h"
using namespace std;
int main()
{
	vector<Leqtori> s;
	Leqtori t;
	string fname, lname, status;
	int sagn, c=0;
	while (c < 4) {
		t.setFname(fname);
		t.setLname(lname);
		t.setSagn(sagn);
		t.setStatus(status);
		s.push_back(t);
		c++;
	}

	for (int i = 0; i < s.size(); i++) {
		if(s[i].getSagn(sagn) < s[i+1].setSagn(sagn))
	}
}
