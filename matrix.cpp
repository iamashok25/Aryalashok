#include<iostream>
using namespace std;
class matrix
{
    int i,j,n,mat[10][10],sum;
    public:
    void readmatrix();
    void sumdigonal();

};
void matrix :: readmatrix()
{
    cout<<"Enter order of matrix:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
        cin>>mat[i][j];
    }
}
}
void matrix :: sumdigonal()
{
    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i=j)
            {
                sum=sum+mat[i][j];
            
            }
        }
}
cout<<"The sum is ="<<sum;
}
int main()
{
    matrix mat;
    mat.readmatrix();
    mat.sumdigonal();
    return 0;
}
