//Longest substring in alphabetical order 
#include<iostream>
using namespace std;
int main(){
    string s="";
    string longestSubstr="";
	string currentSubstr="";   
	cout<<"kindly write down the word: "<<endl;
	cin>>s;
	for(int i=0;i<s.length();i++){
         if(i==0 || s[i]>=s[i-1]){
            currentSubstr+=s[i];
        } 
        else{
            if(currentSubstr.length()>longestSubstr.length()){
                longestSubstr=currentSubstr;
            }
            currentSubstr=s[i]; 
        }
    }
    if(currentSubstr.length()>longestSubstr.length()){
        longestSubstr=currentSubstr;
    }
    cout<<"Longest substring in alphabetical order is: "<<longestSubstr<<endl;
    return 0;
}
