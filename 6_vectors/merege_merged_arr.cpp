#include<iostream>
#include<vector>
using namespace std;
void merge_sort(vector<int>&nums1,vector<int>&nums2,int m,int n){
    vector<int>store(m+n);
    int j=0,i=0,k=0,pos=0;
        for(i=0;i<m+n;i++){
            if (nums1[k]>nums2[j]){
                store[pos]=nums2[j];
                j++;pos++;
            }
            else {
                store[pos]=nums1[k];
                k++;pos++;
            }
        } 
        for(i=0;i<m+n;i++) {
            cout<<store[i]<<" ";
        }
}
int main(){

vector<int>nums1;
vector<int>nums2;
int m,n;
    cout<<"input";
    cin>>m;
    cin>>n;
    for(int i =0 ; i<m;i++)
    {
        int q;
        cin>>q;
        nums1.push_back(q);

    }
    for(int i =0 ; i<n;i++)
    {
        int q;
        cin>>q;
        nums2.push_back(q);

    }
    merge_sort(nums1,nums2,m,n);

}