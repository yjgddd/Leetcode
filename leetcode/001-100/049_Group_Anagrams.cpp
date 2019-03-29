/*将变位词集合起来，变位词就是同样的单词交换字母顺序，“eat”和“ate”就是一组变位词。本题要求
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
这个和编程珠玑的一个例子很相似。可以给变位词相同的标签，用哈希表实现，每一个单词作为key，它的value即对单词内部排序后得到的单词，那么一组变位词他们的
标签都一样。比如["ate","eat","tea"],标签都是aet。然后对原来的vetor根据标签排序，使得相同标签的“聚集”在一起，相同标签组成一个vetor,返回结果。
由于用了sort，效率不是很高。应该还可以优化。
，
*/
map <string,string> s;
bool compare(string a,string b)
{
    return s[a]<s[b];
}
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i;
        vector<vector<string>> ans;
        vector<string> temp;
        for(i=0;i<strs.size();i++)
        {
            string t=strs[i];
            sort(t.begin(),t.end());
            s[strs[i]]=t;
        }
        sort(strs.begin(),strs.end(),compare);
        temp.push_back(strs[0]);
        for(i=1;i<strs.size();i++)
        {
            if(s[strs[i]]==s[strs[i-1]]) temp.push_back(strs[i]);
            else
            {
                ans.push_back(temp);
                temp.clear();
                temp.push_back(strs[i]);
            }
        }
      ans.push_back(temp);
      return ans;
    }

};
