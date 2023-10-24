#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int x, y;
	    scanf("%d%d", &x, &y);
	    
	    if(x >= y) printf("YES\n");
	    else printf("NO\n");
	}
	
	return 0;
}

