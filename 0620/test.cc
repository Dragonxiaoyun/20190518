

//#include"Dict.h"
//#include"Index.h"
//#include"Configuration.h"
#include"Mytask.h"
int main(void)
{
	wd::CreateDict newdict("english.txt");
	//newdict.build_Dict("The_Holy_Bible.txt");
	//wd::CreateDict newdict("/home/xiaodragon/20190518/0613/test.txt");
	//wd::CreateDict newdict("english.txt");
	newdict.build_Dict();
	
	newdict.read_Dict();
	
	//vector<string,set<int>>  test1;
	/*wd::Configuration con1("Dictionary.txt");
	vector<pair<string,int>>test1(con1.getConfigDict());
	ofstream ofs("test1.txt");
	for(auto & iter7:test1)
	{	
		//ofstream ofs("test1.txt");
		ofs<<iter7.first<<" "<<iter7.second<<endl;
	}
	*/
	//wd::Configuration con2("Dict.txt");
	/*map<string,set<int>>test2(con2.getConfigIndex("Index.txt"));
	ofstream ofs("test2.txt");
	for(auto & iter8:test2)
	{
		ofs<<iter8.first<<endl;
		for(auto & iter9:iter8.second)
		{
			ofs<<iter9<<" ";
			//ofs<<endl;
		}
		ofs<<endl;
	}
	*/
	//newdict.print_Dict();
//	newdict.read_print_Dict();
	wd::CreateIndex newindex(&newdict);
	newindex.build_Index();
	newindex.read_Index();
	//newindex.print_Index();
	wd::MyTask mytask("next");
	mytask.queryIndexTable();
	mytask.statistic();
	return 0;

	
}
