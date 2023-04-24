#include <iostream>
#include <unordered_set>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <fstream>
#include <vector>
using namespace std;
int main(){
	string line;
	ifstream in("in.txt");
	ofstream out("out.txt");
	unordered_map<string,bool> mp;
	vector<string> seq;
	vector<string> callStack;
	while(getline(in,line)){
		if(line.find("hw3d")!= decltype(line)::npos)
		{
			// mp[line]=true;
			seq.push_back(line);
			stringstream ss(line);
			string kmdCallFunction;
			ss >> kmdCallFunction;
			ss >> kmdCallFunction;
			if(!mp[kmdCallFunction])
			{
				callStack.push_back(kmdCallFunction);
				mp[kmdCallFunction]=true;
			}
		}
	}
	out << "KMDFunction Call Stack:" << endl;
	for(auto it: callStack)
		out << it <<endl;
	out << "-----------------------------" << endl;
	// seq.erase(unique(seq.begin(),seq.end()),seq.end());
	for(auto it : seq)
		out << it << endl;
	
	return 0;
}