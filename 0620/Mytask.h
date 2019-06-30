#ifndef _MYTASK_H_
#define	_MYTASK_H_


#include"Configuration.h"
#include<queue>
#include"editdistance.h"
namespace wd
{
struct MyResult
{
	string word;//单词
	int iFreq;//词频
	int iDist;//最小距离
};
struct MyCompare
{
	bool operator()(const MyResult & r1,const MyResult & r2)
	{
		if(r1.iDist==r2.iDist)
		{	
			if(r1.iFreq==r2.iFreq)
			{	
				return r1.word>r2.word;//????
			}
			else
			{
				return r1.iFreq<r2.iFreq;
			}
		}
		else 
		{
			return r1.iDist>r2.iDist;
		}

	}
};
class Configuration;
class editdistance;
class MyTask
:Noncopyable
{
private:
	string queryWord;
	int peerfd;
	set<int>iset;
	priority_queue<MyResult,vector<MyResult>,MyCompare>resultQue;
public:
	MyTask(const string & _queryWord)//,int _peerfd)
	:queryWord(_queryWord)
	// ,peerfd(_peerfd)
	 ,resultQue()
	{}
	void execute();
	void queryIndexTable();
	void statistic();
	void distance(const string & rhs);
	//void response(Cache & cache);
	~MyTask(){}
};
}//end of wd;

#endif
