//Author shuruizhe

#include <bits/stdc++.h>

using namespace std;
ifstream fin1;
ifstream fin2;

void eraAll(string& str,const char c) {
    string::iterator it;
    for(it=str.begin();it!=str.end();it++) {
        if(*it=='-') {
            str.erase(it);
            it--;
        }
    }
}

int main(){
    char name1[50],name2[50];
    long s=0;
    long double p;
    cout << "键入第一个文件名: ";
    scanf("%s",name1);
    cout << "键入第二个文件名: ";
    scanf("%s",name2);
    fin1.open(name1);
    fin2.open(name2);
    string str1((istreambuf_iterator<char>(fin1)),istreambuf_iterator<char>());
    string str2((istreambuf_iterator<char>(fin2)),istreambuf_iterator<char>());
    eraAll(str1,' ');
    eraAll(str1,'   ');
    eraAll(str1,'\n');
    eraAll(str1,'\0');
    eraAll(str2,' ');
    eraAll(str2,'   ');
    eraAll(str2,'\n');
    eraAll(str2,'\0');
    int len=str1.length()>str2.length()?str1.length():str2.length();
    for(int i=0;i<len;i++) {
        s+=(str1[i]==str2[i]);
    }
    p=(long double)(s)/len*100;
    cout << "类似的 / 总字符: " << s << " / " << len << endl;
    cout << "匹配相似度百分比: " << p << "%";
    system("pause>nul");
    return 0;
}
