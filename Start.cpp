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
void init()
{
	system("Get_Interface.bat");
	freopen("interface.sb","r",stdin);
	printf("��ѡ��ӿڣ����س�\n"); 
	
	string data;
	int nm=0,k=0;
	char inter[10][50];
	memset(inter,0,sizeof(inter)); 
	while(getline(cin,data))
	{
		cout<<data<<endl;
		k++;
		for(int i=3;i<data.size();i++)
		{
			inter[k][i-3]=data[i];
			if(data[i]=='}')
				break;
		}
		//cout<<inter[k]<<endl;
	}
	freopen("CON","r",stdin);
	scanf("%d",&nm);
	char ope[100];
	memset(ope,0,sizeof(ope));
	printf("��������Ԥ����ץ��ʱ��\n");
	int tim=0;
	scanf("%d",&tim);
	sprintf(ope,"cmd /c \"bin\\tshark  -i \"%s\"  -a duration:%d -R \"http and http.request.method == GET\" -T fields -e http.host -e http.request.uri > get.sb\"",inter[nm],tim);
	system(ope);
}
int main()
{
	printf("���ڽ���Ԥ����...\n");
	printf("���ڶ�ȡ�����ļ�...\n");
	init();
	system("Get.exe");
	return 0;
}
