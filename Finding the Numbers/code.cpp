#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	//code
	map<int, int> m;
	vector<int> v, single;
	int N, i, x, j, T;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    for(i=0; i< (2*N)+2; i++)
	    {
	        cin>>x;
	        m[x]++; //counts number of occurences
	        if(m[x]==1)
	        {
	            v.push_back(x); //stores unique elements;
	        }
	    }
	    j =0;
	    for(i=0; i<v.size(); i++)
	    {
	        if(m[v[i]]%2==1)
	        {
	            single.push_back(v[i]); //stores unpaired numbers
	            j++;
	        }
	        if(j==2)
	        {
	            break;
	        }
	    }
	    if(single[0]>single[1])
	    {
	        cout<<single[1]<<" "<<single[0];
	    }
	    else
	    {
	        cout<<single[0]<<" "<<single[1];
	    }
	    cout<<endl;
	    single.clear();
	    v.clear();
	    m.clear();
	}
	return 0;
}
