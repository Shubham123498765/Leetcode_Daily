//RUNTIME: 27 - 30 MS
//TIME COMPLEXITY: O(n * n), where n is the number of rows/cols in our parameter isConnected
//SPACE COMPLEXITY: O(n), where n is the number of rows/cols in our parameter isConnected

class Solution {

class UnionFind{
private:
    std::vector<int> rank;
    std::vector<int> parent;

public:
    int provinceCount;

    UnionFind(const int& n)
    {
        parent = std::vector<int>(n);
        rank = std::vector<int>(n);
        provinceCount = n;

        for(int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    int find(const int& n)
    {
        if(parent[n] != n)
        {
            parent[n] = find(parent[n]);
        }

        return parent[n];
    }

    void unionNodes(const int& childA, const int& childB)
    {
        int parentA = find(childA);
        int parentB = find(childB);

        if(parentA == parentB)
        {
            return;
        }

        if(rank[parentA] > rank[parentB])
        {
            parent[parentB] = parent[parentA];
        }
        else if(rank[parentB] > rank[parentA])
        {
            parent[parentA] = parent[parentB];
        }
        else
        {
            parent[parentA] = parent[parentB];
            ++rank[parentB];
        }

        --provinceCount;
        return;
    }
};
public:

    int findCircleNum(vector<vector<int>>& isConnected) {
        
        //implement union-find
        //union nodes a and b where isConnected[a][b] = 1
        //return the number of unique parents

        UnionFind uf(isConnected.size());

        for(int row = 0; row < isConnected.size(); row++)
        {
            for(int col = 0; col < isConnected[row].size(); col++)
            {
                if(isConnected[row][col] == 1)
                {
                    uf.unionNodes(row, col);
                }
            }
        }

        return uf.provinceCount;
    }
};