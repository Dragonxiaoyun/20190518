#ifndef __INDEX_H__
#define __INDEX_H__

#include"Dict.h"
//using namespace std;

namespace wd
{
class CreateDict;
class CreateIndex
:Noncopyable
{
private:
	//string filename;
	CreateDict * _getDict;
	map<char,set<int>>index;
	//string::iterator it1;
public:
	CreateIndex(CreateDict * getDict)
	:_getDict(getDict)
	{}
	~CreateIndex(){}
	//CreateIndex &operator[]()
	//{}
		
	void build_Index();
	void read_Index();
	void print_Index();	

};
}//end of wd
#endif//INDEX_H_
