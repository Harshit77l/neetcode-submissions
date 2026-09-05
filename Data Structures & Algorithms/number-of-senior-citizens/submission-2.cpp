class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;
        for(const string &d:details){
            int one=d[11]-'0';
            int two=d[12]-'0';
            int age=two+10*one;
            if(age>60){
                res++;
            }
        }
        return res;
    }
};