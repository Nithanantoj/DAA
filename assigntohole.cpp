#include <bits/stdc++.h>
using namespace std; 

int assingtohole(int mices[],int holes[],int m,int h){
	 
	 sort(mices,mices+m);
	 sort(holes,holes+h);
	 
	 int max = 0;
	 
	 for(int i = 0; i < m; ++i)
    {
        if (max < abs(mices[i] - holes[i]))
            max = abs(mices[i] - holes[i]);
    }
    return max;
}

int main(){
	int mices[] = {3,2,-4};
	
	int holes[] = {0,-2,4};
	
	int m = sizeof(mices)/sizeof(mices[0]);
	
	int h = sizeof(holes)/sizeof(holes[0]);
	
	int maxdiff = assingtohole(mices,holes,m,h);
	
	cout<<maxdiff;
}
