#include <iostream>
#include <string>
#include <map>
using namespace std;
#include "test.h"

int main() {
	//initializing the map
	map <string, string> stateDataMap

	//adding data pairs to the map
	{ { "Nebraska", "Lincoln"}, { "New York", "Albany" }, { "Ohio", "Columbus" }, { "California", "Sacramento" }, { "Massachusetts", "Boston" }, { "Texas", "Austin" } };

	//changing the capital of california to los angeles
	stateDataMap["California"] = "Los Angeles";

	//function call
	mapCapital(stateDataMap);

	cout << endl;

	
}