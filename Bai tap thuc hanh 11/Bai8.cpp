#include<iostream.h>
#include<string.h>
using namespace std;
#define MAX 100
void chuanHoa(string &str){
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' ' && str[i + 1] == ' '){
			str.erase(str.begin() + i);
			i--;
		}
	}
}
int main(){
    string str,*p;
	cout << "Nhap xau: ";
	getline(cin, str);
    p = &str;
    chuanHoa(*p);
    cout<<"Xau sau khi chuan hoa : "<<*p<<endl;
  return 0;
}