class Solution
{
public:
    void moveZeroes(vector<int> &a)
    {
        int n = a.size() ;
        for (int i = 0,j=0; j < n && i<n-1; i++,j++)
        {
            if (a[i] == 0)
            {
                while (j < n && a[j] == 0)
                {
                    j++;
                }
                if(j<n)
               swap(a[i], a[j]);
            }
        }
    }
};