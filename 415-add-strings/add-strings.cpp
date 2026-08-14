class Solution {
public:
    string addStrings(string num1, string num2) {
                int carry=0;
        int i=num1.length()-1;
        int j=num2.length()-1;
        std::string ans;
        while(i>=0&&j>=0){
            int sumLast=num1[i]-'0'+num2[j]-'0'+carry;
            if(sumLast>9){
                carry=1;
                ans+=sumLast%10+'0';
            }
            else{
                carry=0;
                ans+=sumLast+'0';
            }
            i--;j--;
        }
        while(i>=0){
            int sumLast=num1[i]-'0'+carry;
            if(sumLast>9){
                carry=1;
                ans+=sumLast%10+'0';
            }
            else{
                carry=0;
                ans+=sumLast+'0';
            }
            i--;
        }
        while(j>=0){
            int sumLast=num2[j]-'0'+carry;
            if(sumLast>9){
                carry=1;
                ans+=sumLast%10+'0';
            }
            else{
                carry=0;
                ans+=sumLast+'0';
            }
            j--;
        }
        if(carry!=0){
            ans+="1";
        }
        std::reverse(ans.begin(),ans.end());
        return ans;
        
    }
};