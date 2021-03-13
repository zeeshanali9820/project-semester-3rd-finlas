#include <stdlib.h>
#include <iostream> 
#include <stdio.h>
#include <cstdlib> 
#include <cstring>
#include <cctype>
using namespace std;
/*
class string has not been granted so I wrote my
*/
class String {
private:
char *pStr;
int _size;
public:
String() {
pStr = NULL;
_size = 0;
}
void Upit()
{
for (int i = 0; i < pStr[i]; i++)
pStr[i] = toupper(pStr[i]);
}
String(char *str) {
_size = strlen(str) + 1;
pStr = new char[_size];
strcpy(pStr, str);
}
int size() {
return _size;
}
~String() {
delete []pStr;
}
friend ostream &operator; << (ostream &os;, String &obj;) {
for(int i = 0; i < obj.size(); i++)
os <<obj.pStr[i];
return os;
}
};
int main(){
String str("Blablabla");
str.Upit();
cout << str;
system&#40;"pause"&#41;;
return 0;
}
