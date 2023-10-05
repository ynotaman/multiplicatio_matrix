  #include<iostream>
using namespace std;
int main ()
{
    int n , m ,a[n][m] ,k, b[n][m] ;
    cout << " enter the number of rows : "<<endl ;
    cin>>n;
    cout <<"enter the number of coloumns : "<<endl; 
    cin>>m;
    cout <<"enter the matrix element  of A : " << endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0 ; j<m;j++)
        {
            cin>>a[i][j];

        } cout<<endl;
    }
    cout <<"enter the matrix element  of B : " << endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0 ; j<m;j++)
        {
            cin>>b[i][j];

        } cout<<endl;
    }
         int c[n][m];
    for (int i=0 ; i<n ; i++)
    {  
        for (int j = 0 ; j<m ; j++)
        {    c[i][j]=0;
        
            for (int k=0;k<n;k++)
            {
            c[i][j] += a[i][k]*b[k][j];

            } 
        }
        cout<<endl;
    }
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cout<<c[i][k]<<" ";

        } cout<<endl;
    }
    return 0;
}
