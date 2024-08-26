class Solution {
    public:
    bool areRotations(string s1,string s2){
       if(s1.length()!=s2.length()){
         return false;  
       }
       string str3 = s1+s1;
       return (str3.find(s2)!=string::npos);
    }
};
