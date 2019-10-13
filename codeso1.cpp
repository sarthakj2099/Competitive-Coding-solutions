#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105],a,d,b;
    cin>>n;
    int ar2[n];
    for(int i=1;i<101;i++) arr[i]=-1;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar2[i];
    }

    for(int i=0;i<n;i++)
    {
        a=ar2[i];
        if(arr[a]!=-1) {sum+=arr[a]; cout<<"oye\n";}
        else
        {
            arr[i]=0;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                b =ar2[j];
                //cout<<j<<endl;
                for(int k=0;k<n;k++)
                {
                    if(k==i||k==j) continue;
                    else{d= a+b+ar2[k];
                    if(d%a==0&&(d%b!=0||d%ar2[k]!=0)) {arr[a]++;
                        cout<<i<<" "<<j<<" "<<k<<endl;}
                }}
            }
            sum+=arr[a];
        }
        //cout<<arr[a] << " ";
    }
    cout<< sum;
}
