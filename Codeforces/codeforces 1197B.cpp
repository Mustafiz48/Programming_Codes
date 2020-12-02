#include<bits/stdc++.h>
using namespace std;
int n;
stack<int> st;
int pil[1234567];

int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>pil[i];
    }
    const int N = sizeof(pil) / sizeof(int);
    int maxe=*max_element(pil, pil + N);
    int maxi=distance(pil, max_element(pil, pil + N));
    st.push(pil[maxi]);

//    cout<<maxi<<endl;
    if(maxi==0)
        {
            int i=1;

            while(1){
            if(pil[maxi+i]<st.top()&& i<n-1)
                {
                    st.push(pil[maxi+i]);
                    pil[maxi+i]=0;
                    i++;
                    continue;
                }
            else if (pil[maxi+i]>st.top()&& i<=n-1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }


        }

    }

        else if (maxi==n-1)
        {
             int i=1;

            while(1){
            if(pil[maxi-i]<st.top()&& i<n-1)
                {
                    st.push(pil[maxi-i]);
                    pil[maxi-i]=0;
                    i++;
                    continue;
                }
            else if (pil[maxi-i]>st.top()&& i<=n-1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            else
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }

        }
        else
        {
            int left_index=1,right_index=1;
            int s=st.size();

            while(1)
            {
                if(st.size()==n-1)
                {
                    if(pil[maxi-left_index]!=0)
                    {
                        if(pil[maxi-left_index]<st.top())
                        {
                            cout<<"YES"<<endl;
                            return 0;
                        }
                        else
                        {
                            cout<<"NO"<<endl;
                            return 0;
                        }

                    }
                    else
                    {
                        if(pil[maxi+right_index]<st.top())
                        {
                            cout<<"YES"<<endl;
                            return 0;
                        }
                        else
                        {
                            cout<<"NO"<<endl;
                            return 0;
                        }                    }
                }


                if(pil[maxi-left_index]>pil[maxi+right_index])
                {
                    if(pil[maxi-left_index]<st.top()){

                    st.push(pil[maxi-left_index]);
                    pil[maxi-left_index]=0;
                    left_index++;
                    continue;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                else
                {
                    if(pil[maxi+right_index]<st.top()){

                    st.push(pil[maxi+right_index]);
                    pil[maxi+right_index]=0;
                    right_index++;
                    continue;}
                    else
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                if(st.size()==n)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }

                if(s==st.size())
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                else
                {
                    s=st.size();
                }
            }
        }

    return 0;
}
