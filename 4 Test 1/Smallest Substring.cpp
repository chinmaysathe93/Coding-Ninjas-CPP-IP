#include <iostream>
using namespace std;

#include<cstring>
#include<unordered_map>
char ans[10000];

char* findMinSubstringContainingString(char *large, char *small){
    unordered_map<char,int> m,temp;
    unordered_map<char,int>::iterator itr;    
    int Slen = strlen(small);
    int Llen = strlen(large);
    
    // Return if small string in null or of 1 character
    if(Slen<2)
        return small;
    
    bool looper = true;
    int right=0,left=0;
    int result[3] ={Llen};
    
    for(int i=0;i<Slen;i++){
        m[small[i]]++;
       	temp[small[i]]++;
    }
    
    while(looper){
        //Find the first common element between the strings
        while(m.find(large[left])==m.end())
        	left++;
        right=left;
        
        while(!m.empty()){
            
            if(right>=Llen){
                looper=false;
                break;
            }
            
            itr = m.find(large[right]);
            if(itr!=m.end()){
                itr->second--;
            	if(itr->second < 1)
                    m.erase(itr);
            }
            
            right++;
        }
        right--;
        
        if(result[0]>(right-left) && looper==true){
            result[0] = right-left;
            result[1] = left;
            result[2] = right;
        }
        
        // Re-fill original map using temp map
        m.insert(temp.begin(),temp.end());
        left++;
    }
    
    int j=0;
    for(int i=result[1];i<=result[2];i++){
        ans[j] = large[i];
        j++;
    }
    ans[j] = '\0';
    
    return ans;
}

int main() {
    char S[1000000], T[1000];
    cin.getline(S, 1000000);
    cin.getline(T, 1000);
    char *ans = findMinSubstringContainingString(S, T);
    if(ans) {
        cout << ans << endl;
    }
    else {
        cout << "null" << endl;
    }
}
