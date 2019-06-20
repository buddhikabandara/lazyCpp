#ifndef SPLIT_H_INCLUDED
#define SPLIT_H_INCLUDED


#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define pb push_back

vector<string> split(string str, string lim=" ")
{

	vector<string> arr;
	int pos = str.find(lim);
	string token;

	while (pos <= str.length())
	{
		arr.push_back(str.substr(0, pos));
		str.erase(0, pos + 1);
		pos = str.find(lim);

	}
	arr.pb((str));

	return arr;

}

#endif // SPLIT_H_INCLUDED
