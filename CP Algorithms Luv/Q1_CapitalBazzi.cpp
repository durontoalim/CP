#include <bits/stdc++.h>

using namespace std;

char upper(char c){
    return 'A' + (c - 'a');
}

int main()
{
    while(true){
        string str;
        cin>>str;

        if(str.size() == 0){
            break;
        }

        for (int i = 0; i < str.size(); ++i)
        {
            str[i] = upper(str[i]);
        }

        cout<<str<<endl;
    }

    return 0;
}