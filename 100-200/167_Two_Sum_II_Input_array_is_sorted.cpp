//我的手残复杂度很高的AC代码
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j,len=numbers.size();
        vector <int> answer;
        for(i=0;i<len;i++)
        {
            if(numbers[i]>target) break;
            for(j=i+1;j<len;j++)
            {
                if(numbers[i]+numbers[j]==target) 
                {
                    answer.push_back(i+1);
                    answer.push_back(j+1);
                    return answer;
                }
            }
        }
    }
};
//看了看别人的改了改，很优秀
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,len=numbers.size(),j=len-1;
        while(i<j)
        {
             if(numbers[i]+numbers[j]==target) 
             {
                 vector <int> ans{i+1,j+1};
                 return ans;
             }
             else if(numbers[i]+numbers[j]>target) 
             {
                 j--;
             }
            else 
            {
                i++;
            }     
        }
        
    }
};
