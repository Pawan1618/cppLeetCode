class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1=0;
        int v2=0;
        for(int i=0;i<version1.size()-1;i++){
            if(version1[i]!='.'||version1[i]!='0'){
                v1=v1*10+version1[i];
            }
        }
        for(int i=0;i<version2.size()-1;i++){
            if(version2[i]!='.'||version2[i]!='0'){
                v2=v2*10+version2[i];
            }
        }
        if(v1>v2){
            return 1;
        }
        if(v1<v2){
            return -1;
        }
        if(v1==v2){
            return 0;
        }
        return 0;
        

        
    }
};
