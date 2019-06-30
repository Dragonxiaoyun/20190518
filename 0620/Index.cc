#include"Index.h"

namespace wd
{
	void CreateIndex::build_Index()
	{
		//_getDict->build_Dict();
		//_getDict->read_Dict();
		string wor;
		for(int i=0;i!=(_getDict->nary).size();i++)

		{	
			wor=(_getDict->nary)[i].first;//没有指针，单纯的一个值
			//for(int k=0;k!=wor.size();k++)
		for(string::iterator it1=wor.begin();it1!=wor.end();++it1)
			{	
				//string s=(string)wor[k];
				//string s=wor[k];
				//index[s].insert(i);//map中插入second是这样的
				//char s1=*it1;
				//string * s=(string*);
				//string s=(string)s1;
				index[*it1].insert(i);
			}
		}
	}
	void CreateIndex::read_Index()
	{	
		ofstream ofs("Index.txt");
		for(auto & iter5:index)
		{
			ofs<<iter5.first<<endl;
			//cout<<iter5.first<<endl;
			//	<<iter5.second<<endl;

			for(auto & iter6:iter5.second)
			{
				ofs<<iter6<<" ";
			}
			ofs<<endl;
		}
	}
	void CreateIndex::print_Index()
	{	
		//for(map<string,set<int>>::iterator it2=index.begin();it2!=index.end();++it2)
		for(auto & it2:index)
		{
				for(set<int>::iterator it3=(it2.second).begin();it3!=(it2.second).end();++it3)
				{cout<<it2.first<<" "<<*it3<<endl;}
		}
	}
}//end of wd;
