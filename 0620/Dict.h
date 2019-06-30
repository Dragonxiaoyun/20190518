#ifndef _DICT_H__
#define _DICT_H__

#include<string.h>
#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<vector>
#include<map>
#include<set>
#include<fstream>
#include<istream>
#include<cstring>
#include<iterator>
#include <algorithm>
#include"Noncopyable.h"
using namespace std;

namespace wd
{
class CreateDict
:Noncopyable
{
private:
	map<string,int>dict;
	string _filename;
	vector<pair<string,int>>nary;
	
public:
	friend class CreateIndex;
	CreateDict(const string & filename)
	:_filename(filename)
	{}
	~CreateDict()
	{}
	
//	void build_Dict(const string & filename);
	void build_Dict();
	void read_Dict();
	void read_print_Dict();
	void print_Dict();	
};

}//end of wd;

#endif//DICT_H
