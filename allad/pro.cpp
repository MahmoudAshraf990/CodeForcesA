#include<iostream>
#include<map>
#include<stack>
#include<algorithm>




using namespace std;

 string removeDuplicates(string s, int k) {
        
        stack<map<char, int>> st;
        map<char, int> temp;
        temp[s[0]]++;
        st.push(temp);
        temp.erase(s[0]);
        map<char, int>::iterator it = st.top().begin();
        for(int i=1; i<s.size(); i++){
            if(!st.empty()){
                if(it->second == k)
                    st.pop();
                    
                it = st.top().begin();
               
               
                if(it->first == s[i])
                    it->second++;
                else{
                    //map<char, int> temp2;
                    temp[s[i]]++;
                    st.push(temp);
                    temp.erase(s[i]);  
                        //
                } 
            }
            else{
                    //map<char, int> temp2;
                temp[s[i]]++;
                st.push(temp);
                temp.erase(s[i]);  
                    //
            } 
        }
        it = st.top().begin();
        if(it->second == k)
            st.pop();
        string result = "";
        while(!st.empty()){
           map<char, int>::iterator tt = st.top().begin();
            while(tt->second != 0){
                result += it->first;
                it->second--;
            }
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
        
    }
int main(){
    cout<<removeDuplicates("deeedbbcccbdaa", 3);
}