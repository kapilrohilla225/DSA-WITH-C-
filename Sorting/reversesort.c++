    //selection sort in desending order
    #include<bits/stdc++.h>
    using namespace std;

    vector<int> selectionSort(vector<int>arr){
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            int maxIndex = i;
            for(int j=i+1;j<n;j++){
                if(arr[maxIndex] < arr[j]){
                    maxIndex = j;
                }
            }
            swap(arr[maxIndex],arr[i]);
        }
        return arr;
    }

    int main()
    {
        vector<int>arr = {64, 25, 12, 22, 11};
        vector<int>result = selectionSort(arr);
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    return 0;
    }