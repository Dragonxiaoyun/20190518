#include"Configuration.h"

namespace wd
{
class editdistance
{
private:
	string  s1,s2;
	int i;
	int len1,len2;
	int **d;
public:
editdistance(){}
~editdistance(){}
int min(int a,int b,int c)  
{  
    int tmp=a<b?a:b;  
    return tmp<c?tmp:c;  
}  
int editDistance(string s1,string s2 )  
{  
	char *p1=(char*)s1.c_str();
	char *p2=(char*)s2.c_str();
	len1=strlen(p1);
	len2=strlen(p2);
    d=new int*[len1+1];  
    for(int i=0;i<=len1;i++)  
        d[i]=new int[len2+1];  
    int j;  
    for(i=0;i<=len1;i++)  
        d[i][0]=i;  
    for(j=0;j<=len2;j++)  
        d[0][j]=j;  
    for(i=1;i<=len1;i++)  
    {  
        for(j=1;j<=len2;j++)  
        {  
            int cost=s1[i-1]==s2[j-1]?0:1;  
            int deletion=d[i-1][j]+1;  
            int insertion=d[i][j-1]+1;  
            int substitution=d[i-1][j-1]+cost;  
            d[i][j]=min(deletion,insertion,substitution);  
        }  
    }  
    return d[len1][len2];  
    for(int i=0;i<=len1;i++)  
    {  
        delete[] d[i];  
    }  
    delete[] d;  
}  
};


}///end of wd;
