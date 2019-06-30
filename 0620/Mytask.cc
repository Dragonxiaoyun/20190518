
#include"Mytask.h"

namespace wd
{
void MyTask::execute()
{

}
void MyTask::queryIndexTable()
{	
	//t count;
	//set<int> iset;
	string s;
	Configuration con4("Dict.txt");
	map<string,set<int>>word_map(con4.getConfigIndex("Index.txt"));
	for(int i=0;i!=queryWord.size();++i)
	{	
		s=queryWord[i];
		for(auto & iter:word_map[s])
		{	
			iset.insert(iter);
		}
	}
/*	ofstream ofs1("querytable.txt");
	for(auto iter1:iset)
	{
		ofs1<<iter1<<endl;
	}
*/	
}
void MyTask::statistic()
{
	set<int>query_set(iset);	
	MyResult r;
	Configuration con5("Dictionary.txt");
	vector<pair<string,int>>word_vec=con5. getConfigDict();
	for(auto iter2:query_set)
	{	
		MyResult myresult;
		editdistance edit_dis;
		myresult.word=word_vec[iter2].first;
		myresult.iFreq=word_vec[iter2].second;
		char * s3=(char*)queryWord.c_str();
		char * s4=(char*)(word_vec[iter2].first).c_str();
		myresult.iDist=edit_dis.editDistance(s3,s4);	
		resultQue.push(myresult);
	}

	ofstream ofs("priorityQue.txt");
	while(!resultQue.empty())
	{	
		r=resultQue.top();
		ofs<<r.word<<" "
		   <<r.iFreq<<" "
		   <<r.iDist<<" "<<endl;
		resultQue.pop();
	}
}
void MyTask::distance(const string & rhs)
{

}
/*void MyTask::response(Cache & cache)
{

}
*/

}//end of wd;

