#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(
            (s[i]=='R'&&s[i+1]=='B'&&s[i+2]=='L') ||
            (s[i]=='R'&&s[i+1]=='L'&&s[i+2]=='B') ||
            (s[i]=='L'&&s[i+1]=='B'&&s[i+2]=='R') ||
            (s[i]=='L'&&s[i+1]=='R'&&s[i+2]=='B') ||
            (s[i]=='B'&&s[i+1]=='L'&&s[i+2]=='R') ||
            (s[i]=='B'&&s[i+1]=='R'&&s[i+2]=='L')
        ){
            cout<<'C';
            i+=2;
        }
        else if (s[i]=='R')
        {
            cout<<'S';
        }else if (s[i] == 'B')
        {
            cout<<'K';
        }else if (s[i] == 'L')
        {
            cout<<'H';
        }
        
        
    }
    
    return 0;
}