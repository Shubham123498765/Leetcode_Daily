class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {
     stack <int> st;
     vector <int> ans,nge;
     for (int i = num2.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && num2[i] >= st.top())
        {
            st.pop();
        }
        if (st.empty())
        {
            nge.push_back(-1);
        }
        else
        {
            nge.push_back(st.top());
        }
        st.push(num2[i]);
    }
    // ans.resize(num1.size(), -1);
    reverse(nge.begin(), nge.end());
    for (int i = 0; i < num1.size(); i++)
    {
        for (int j = 0; j < num2.size(); j++)
        {
            if (num1[i] == num2[j])
            {
                ans.push_back(nge[j]);
            }
        }
    }   
    return ans;
    } 
};