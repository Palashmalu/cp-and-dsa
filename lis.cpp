
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n ; cin >> n;
   int arr[n];
   for( int i = 0 ;  i < n ; i++) {
      cin >> arr[i];
   }
   
   vector<int> temp;
   int len = 1;
   temp.push_back(arr[0]);
   for( int i = 1 ; i < n ; i++) {
      if( arr[i] > temp.back()) {
         temp.push_back(arr[i]);
         len++;
      }
      else {
         int ind = lower_bound( temp.begin() , temp.end() , arr[i]) - temp.begin() ;
         temp[ind] = arr[i];
      }
      
   }
   
   cout << temp.size() << " ";
