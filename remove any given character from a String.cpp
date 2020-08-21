#include<iostream>
#include <string>
using namespace std;
void removeCharacter(string s, char a){
    for(int i=0;i<s.length();){
        if(s[i]==a){
            s.erase(s.begin()+i);


        }
        else{
            i++;
        }
    }
    cout<<"\n Srting after removing character: ";
    cout<<s;

}

int main(){
string s;
char a;
cout<<"Enter String:";
cin>>s;
cout<<"\nEnter character which you want to remove:";
cin>>a;
removeCharacter(s,a);
return 0;
}
