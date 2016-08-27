#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
const int maxn=100+10;
string line;
int cnt=0;
char ch[maxn],op[maxn];
int main()
{
	system("title Wshark");
	freopen("get.sb","r",stdin);
	system("md Download");
	while(getline(cin,line))
	{
		//cout<<111<<endl;
		if(line[0]!='m'||!(line[1]>='0'&&line[1]<='9'))
			continue;
		//cout<<line<<endl;
		memset(ch,0,sizeof(ch));
		memset(op,0,sizeof(op));
		for(int i=0;i<16;i++)
			ch[i]=line[i];
		for(int i=17;i<line.size();i++)
			ch[i-1]=line[i];
		//cout<<ch<<endl;
		cnt++;
		printf("\n");
		printf("正在检测当前链接正确性...\n");
		printf("第%d个文件正在准备被加载...\n",cnt); 
	    sprintf(op,"bin\\wget -O Download/%d.mp3 http://%s",cnt,ch);
	    system(op);
	    system("title Wshark");
	    printf("第%d个音乐文件已经下载完毕\n",cnt); 
	}
	printf("\n所有的%d个音乐文件已经下载完毕,请cd进入Download目录查看\n\n",cnt);
	printf("版权所有：\n浙江省义乌中学 罗文卿 \n北京第二十中学 储志华\n\n"); 
	system("pause");
	return 0;
}
