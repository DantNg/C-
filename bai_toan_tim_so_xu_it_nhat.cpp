#include <iostream>
#include <vector>
#include <string>
using namespace std;

static long so_xu=0;
int dequy(long S,int *V)
{
  int V_max=0;
    for(int i =0 ; i<6;i++)
    {
      if(V[i] > V_max && V[i] <S) V_max=V[i];
    }
  if(S==0) return 1;
  else
  {
    
    so_xu+=(S/V_max);
    S=S%V_max;
    return dequy(S,V);
  }
  
}

int main()
{
  //giá trị đồng xu
  int V[] = {1,2,5,10,20,50};
  //tổng cần tìm 
  long S = 6944774;
  
  //cách giải theo quy hoạch động
 /* 
  int MIN[S+1];
  //gán giá trị vô cực cho MIN i
  for (int i = 1; i <= S; i++)
  {
    MIN[i] = 10000;
  }
  
  MIN[0] = 0;
//quy hoạch động tìm xu
  for (int i = 1; i <= S; i++)
  {
    for (int j  = 0 ; j < 6; j++)
    {
      if(V[j] <= i && MIN[i-V[j]]+1 < MIN[i]) 
      {
        MIN[i] = MIN[i-V[j]]+1;
      }
    }
    
  }
  
 cout<<"so dong xu : "<<MIN[S]<<endl;
 */
 //cách giải theo đệ quy

dequy(S,V);
cout<<"so dong xu : "<<so_xu; 

  
}
