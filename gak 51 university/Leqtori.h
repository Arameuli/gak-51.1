#pragma once
#include<string>
using namespace std;
class Leqtori
{
private:;
	   string fname, lname, status;
	   int sagn;
public:;
	  Leqtori();
	  void print_leqtori();

	  void setFname(string);
	  void setLname(string);
	  void setStatus(string);
	  void setSagn(int);

	  string getFname();
	  string getLname();
	  string getStatus();
	  int getSagn();
};

