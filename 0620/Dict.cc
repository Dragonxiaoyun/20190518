
#include"Dict.h"

namespace wd
{	
	//void CreateDict::build_Dict(const string & filename)
	void CreateDict::build_Dict()
	{	
		ifstream ifs(_filename);
		string word;
		while(ifs>>word)
		{
		for(int i=0;i!=word.size();++i)
		{
			if(!isalpha(word[i]))
				break;
		
		string::iterator it;
		for(it=word.begin();it!=word.end();++it)
		{		
			*it=tolower(*it);
		}		
		word.erase(remove_if(word.begin(),word.end(),::ispunct),word.end());
		++dict[word];
		}
		}
	}

		void CreateDict::print_Dict()
		{	
			ofstream ofs("Dict.txt");
			for(auto & iter1:dict)
			{	
				ofs<<iter1.first<<" "<<iter1.second<<endl;
			}
		}
		
	void CreateDict::read_Dict()//vector?????
	{	
				
		for(map<string,int>::iterator iter=dict.begin();iter!=dict.end();++iter)
		{
			nary.push_back(*iter);
		}
		ofstream ofs("Dictionary.txt");
		for(int i=0;i!=nary.size();i++)//vetor????????
		{
			ofs<<nary[i].first<<" "<<nary[i].second<<endl;
		}
		
	}
	void CreateDict::read_print_Dict()
	{
		for(auto & iter4:nary)
		{
			cout<<iter4.first<<" "<<iter4.second<<endl;
		}
	}
	
	
}//endof wd;
			//·???ļ???ô???Ҳ?֪??


