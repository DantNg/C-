#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
  int A[] = {5, 3, 4, 8, 6, 7, 8, 5, 4,7,9,10,11,2,3,5,4,6,8,2,5,3,1};
  int n = sizeof(A) / sizeof(int);
  int S[n];

  int vitri_cuoi = 0;
  for (int i = 0; i < n; i++)
  {
    S[i] = 1;

    for (int j = vitri_cuoi; j < i; j++)
    {
      if (A[j] < A[i])
      {
        S[i]++;
      }
    }
    if (A[i] < A[i - 1] && i > 0)
    {
      for (int j = vitri_cuoi; j < i; j++)
      {
        cout<<A[j]<<" ";
      }
      
      vitri_cuoi = i;
      S[i] = 1;
      cout<<endl;
    }
   // cout << vitri_cuoi << " ";
  }
 
  int max=0;
  for (int i = 0; i < n; i++)
  {
    if (S[i]>max)
    {
      max=S[i];
    }
    
  }
  cout<<endl;
  cout<<"day con dai nhat : "<<max;
}