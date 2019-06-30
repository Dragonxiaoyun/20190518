#include"Configuration.h"

namespace wd
{
	vector<pair<string,int>> & Configuration::getConfigDict()
	{	
		//string word;
		//int count;
		//Dict getDict(filename);
		ifstream ifs(filepath);
			//("Dictionary.txt");
		while(ifs>>word>>count)
		{
			configDict.push_back(make_pair(word,count));
		}
		/*for(auto & iter:configDict)
		{
			cout<<iter.first<<" "<<iter.second<<endl;
		}
		*/
		return configDict;
		
	}
	map<string,set<int>> & Configuration::getConfigIndex(const string filepath1)
	{	
		int line=0;
		string s;
		ifstream ifs1(filepath1);
		while(getline(ifs1,word))
		{	
			++line;
			if(!(line%2))
			{	
				stringstream ss(word);
			while(ss>>count)
			{	
				configIndex[s].insert(count);
				//configIndex.insert(make_pair(word,count));
			}
			}
			else
			{
				s=word;
			}
		}
		return configIndex;		
	}
	
	
	
	
}//end id wd;
