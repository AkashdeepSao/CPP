#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n)
 {
	vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {   int k;
            for(k=j;k<n;K++)
            {
                if(arr[i]+arr[j]+arr[k]==0)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;

}