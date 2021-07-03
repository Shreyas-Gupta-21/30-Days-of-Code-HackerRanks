#include <iostream>

using namespace std;

int main()
{
    int n,i,c,j,k,a[900],b[900];
    cin >> n;
    if (n>=1 && n<=1000)
    {
      for (int i=0;i<n;i++)
        {
        cin>>c;
        if (c>=1 && c<=10000)
            a[i]=c;
        }
      
      for (j=0,k=n-1;k>=0,j<n;j++,k--)
        b[j]= a[k];
        
      for (int i=0;i<n;i++)
        cout<<b[i]<<" ";
        
      cout<<endl;    
    }   
    return 0;
}
