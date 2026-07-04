class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    
    unordered_map<char, int> freq;
    
    for(int i = 0; i < s.size(); i++)
        freq[s[i]]++;
    
    for(int j = 0; j < t.size(); j++)
        freq[t[j]]--;
    
    for(auto& [ch, cnt] : freq)
        if(cnt != 0) return false;
    
    return true;
}
};
