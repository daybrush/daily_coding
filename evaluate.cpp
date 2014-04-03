class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        vector<int> v;
        for(int i =0; i < tokens.size(); ++i) {
            string s = tokens[i];
            if(s == "+" || s == "-" || s == "*" || s == "/") {
                int n1 = v[v.size() - 2];
                int n2 = v[v.size() - 1];
                v.pop_back();
                v.pop_back();
                if(s == "+") {
                    v.push_back(n1 + n2);
                } else if(s == "-") {
                    v.push_back(n1 - n2);
                } else if(s == "*") {
                    v.push_back(n1 * n2);
                } else if(s == "/") {
                    v.push_back(n1 / n2);
                }
                
            } else {
                //number
                int number = stoi(s);
                v.push_back(number);
            }
        }
        return v[0];
    }
};
