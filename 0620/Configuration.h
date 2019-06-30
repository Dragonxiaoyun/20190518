#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include"Index.h"
#include<sstream>
namespace wd
{

class Configuration
{
private:
string filepath;
string filepath1;
vector<pair<string,int>>configDict;
map<string,set<int>>configIndex;
string word;
int count;

public:
Configuration(const string &_filepath)
:filepath(_filepath)
{}

vector<pair<string,int>> & getConfigDict();
map<string,set<int>> & getConfigIndex(const string  filepath1);

};
}//end of wd;
#endif
