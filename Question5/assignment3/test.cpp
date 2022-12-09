#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <iterator>
#include "test.h"
using namespace std;


//function takes in a map and using an iterator, outputs the data within the map.
//function is designed to work specifically for the 'stateDataMap' map (output formatting)
//FIXME
map<string, string>::iterator itr;
void stateDataMap(map<string, string> map) {
    for (itr = map.begin(); itr != map.end(); ++itr) {
        cout << itr->first << "'s capital is: " << itr->second << "." << endl;
    }
}


//function will be passed a map, and will prompt user to input a state name
//function will output text to console displaying state capital associated with state name given
void mapCapital(map<string, string> map) {
    string stateName;
    cout << "Enter a state you would like to find the capital of: ";
    getline(cin, stateName);

    //auto iterator that will find the map data pair
    auto it = map.find(stateName);

    //dereferencing iterator to output state capital associated with stateName.
    cout << "The capital of " << it->first << " is " << it->second << "." << endl;
}