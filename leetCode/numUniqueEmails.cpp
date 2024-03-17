class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> ans;
        for(string &email : emails){
            string newMail;
            for(char c: email){
                if(c=='+' || c == '@') break;
                if(c!='.') newMail +=c;
            }
            newMail += email.substr(email.find('@'));
            ans.insert(newMail);
        }
        return ans.size();
    }
};
