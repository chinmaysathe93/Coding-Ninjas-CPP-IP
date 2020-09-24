#include<map>
int makeAnagram(char str1[], char str2[]){
	map<char,int> m,m2;
    map<char,int>::iterator itr;
    int count=0;

    for(int i=0;str1[i]!='\0';i++){
        m[str1[i]]++;
    }
    
    for(int i=0;str2[i]!='\0';i++){
        if(m.find(str2[i])!=m.end())
            m[str2[i]]--;
        else
            m2[str2[i]]++;
    }
    
    for(itr=m.begin();itr!=m.end();itr++){
        count+= abs(itr->second);
    }
    for(itr=m2.begin();itr!=m2.end();itr++){
        count+= abs(itr->second);
    }
    return count;
    
}
