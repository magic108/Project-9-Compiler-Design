#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ll parsers for left to right
	//~ is blank
	string chart[16][11] = { {"s5","~","~","~","~","s4","~","~","1","2","3" },{"~","s6","s7","~","~","~","~","acc","~","~","~"},{"~","r3","r3","s8","s9","~","r3","r3","~","~","~"},
	{"~","r6","r6","r6","r6","~","r6","r6","~","~","~"},{"s5","~","~","~","s4","~","~","10","2","3"},{"~","r8","r8","r8","r8","~","r8","~","~","~" },{"s5","~","~","~","~","s4","~","~","~","11","3"},
	{ "s5","~","~","~","~","s4","~","~","~","12","3" },{ "s5","~","~","~","~","s4","~","~","~","~","13" },{ "s5","~","~","~","~","s4","~","~","~","~","14" },{"~","s6","s7","~","~","~","s15","~","~","~","~"},
	{"~","r1","r1","s8","s9","~","r1","r1","~","~","~"},{ "~","r2","r2","s8","s9","~","r2","r2","~","~","~" },{ "~","r4","r4","r4","r4","~","r4","r4","~","~","~" },{ "~","r5","r5","r5","r5","~","r5","r5","~","~","~" },
	{ "~","r7","r7","r7","r7","~","r7","r7","~","~","~" }
	};
	string input;
	int state, column;
	cout << "Enter input string terminating with $:";
	cin >> input;
}