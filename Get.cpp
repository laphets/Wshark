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
		printf("���ڼ�⵱ǰ������ȷ��...\n");
		printf("��%d���ļ�����׼��������...\n",cnt); 
	    sprintf(op,"bin\\wget -O Download/%d.mp3 http://%s",cnt,ch);
	    system(op);
	    system("title Wshark");
	    printf("��%d�������ļ��Ѿ��������\n",cnt); 
	}
	printf("\n���е�%d�������ļ��Ѿ��������,��cd����DownloadĿ¼�鿴\n\n",cnt);
	printf("��Ȩ���У�\n�㽭ʡ������ѧ ������ \n�����ڶ�ʮ��ѧ ��־��\n\n"); 
	system("pause");
	return 0;
}
