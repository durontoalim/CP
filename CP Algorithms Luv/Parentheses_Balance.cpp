#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> symbols = {

    {'[', -1 },
    {'{', -2 },
    {'(', -3},
    {']', 1 },
    {'}', 2 },
    {')', 3}

};

string isBalanced(string s);

int main(){

    int N;
    cin>>N;
    cin.ignore();
    while (N--)
    {
        string str;
        getline(cin,str);

        cout<<isBalanced(str)<<endl;
    }
    
    return 0;
}



string isBalanced(string s){

    long long int len = s.length();

    stack <char> st;
    
        for(char t: s){
            if(symbols[t] < 0){
                st.push(t);
            }
            else{
                if( st.empty() ) return "No";
                char top = st.top();
                st.pop();
                if(symbols[top] + symbols[t] != 0) return "No";
            }
        }
        if(st.empty()) return "Yes";
        return "No";

}