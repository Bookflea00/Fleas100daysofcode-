https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long>bag;
        for(int i=0;i<n;i++)
        {
            long long candy_count;
            cin>>candy_count;
            bag.insert(candy_count);

        }
        long long total_candy=0;
        for(int i=0;i<k;i++)
        {
          auto it=--(bag.end());
          int candy_count_eaten=*it;
          total_candy+=candy_count_eaten;
          bag.erase(it);
          bag.insert(candy_count_eaten/2);

        }
        cout<<total_candy<<endl;


    }
}

https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew

#include<bits/stdc++.h>
using namespace std;
int main()
{   set<string>s;
    int t;
    cin>>t;
    while(t--)
    {   s.clear();
        int n;
        cin>>n;
        while(n--)
        {
            string si;
            cin>>si;
            s.insert(si);


        }
        for(auto it:s)
        {
            cout<<it<<endl;
        }
    }
}

https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA
#include<bits/stdc++.h>
using namespace std;
int main()
{   unordered_set<long long>s;
    int t;
    cin>>t;
    while(t--)
    {
        s.clear();
      long long n,m;
      cin>>n>>m;

    
    while(n--)
    {
    long long value;
        cin>>value;
        s.insert(value);
    }
    while(m--)
    {
        long long value;
        cin>>value;
        if(s.find(value)!=s.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {cout<<"NO"<<endl;
        }
        s.insert(value);
    }
    
    
    }
}
