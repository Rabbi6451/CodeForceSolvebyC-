#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack <char>st;
    for(char c:s){
        if(c=='(')st.push(c);
        else{
            if(st.empty()){
                cout<<"NO\n";
                return 0;
            }
            st.pop();
        }
    }
    cout<<(st.empty()?"YES\n":"NO\n");
}