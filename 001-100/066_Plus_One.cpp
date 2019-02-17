class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i,len=digits.size();
        digits[len-1]+=1;
         for(i=len-1;i>0;i--)
          {
            if(digits[i]==10)
            {
              digits[i]-=10;
              digits[i-1]+=1;  
            }
          }
         if(digits[0]==10) 
         {
             digits[0]-=10;
             digits.insert(digits.begin(),1);
         }
    return digits;
    }
};
