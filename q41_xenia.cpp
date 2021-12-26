 #include<iostream>
  using namespace std; 

  int main()

  {
      long long int  n,m,i,j,x=1,cn=0;
      cin>>n>>m;

      int a[m];
      for( i=0; i<m; i++) cin>>a[i];

      for ( i=0; i<m; i++)

      {
          if( a[i]>x)
          {
              cn+=a[i]-x;
              x=a[i];
          }
          if( a[i]<x)
          {
              cn+=n-x+a[i];
              x=a[i];
          }
      }
      cout<<cn<<endl;

  }