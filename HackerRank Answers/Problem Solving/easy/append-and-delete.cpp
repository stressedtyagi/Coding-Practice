#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	Case 1 : Delete something
				- s.len > t.len 
	Case 2 : Append something
				- s.len < t.len
	Case 3 : Delete some and append something
				- 
	Case 4 : Delete whole and append whole
	Case 5 : Do nothing
	*/

    string s , t;
    int k;
    cin >> s >> t >> k;
    int sl = s.length();
	int tl = t.length();

	if(s == t){	//CASE 5
		if (k%2 == 0 || k >= sl+tl) {
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
	}else{	//CASE 2
		int i = 0;
		while (s[i] == t[i]) {
			i++;	
		}
		int cost  = sl - i + tl - i;
		if(cost%2 == k%2 && k >= cost || k>= sl + tl) {
			cout << "Yes" << endl;
		}else {
			cout << "No" << endl;
		}
	}
	// else if (sl > tl){
	// 	int i = 0;
	// 	while (s[i] == t[i]) {
	// 		i++;	
	// 	}
	// 	int cost =  sl - i + tl - i;
	// 	if(k >= cost && )
	// }
/*
    while(k > 0){
		// cout << "\n!!AT START!!" << endl;
		// cout << "K : " << k << endl;
		// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;

		if(s.substr(0,e) == t.substr(0,e) && e){
			// cout << "Condition 1 " << endl;
			// cout << "K : " << k << endl;
			// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
			if(s.substr(0,e) != t){
				// cout << "Condition 1 : IF " << endl;
				// cout << "K : " << k << endl;
				// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
				while(s.substr(0,e) != t && k){
					if(e >= s.length())
						s += t[e];
					else 
						s[e] = t[e];
					e++;
					k--;
				}
				// cout << "Condition 1 : IF : after " << endl;
				// cout << "K : " << k << endl;
				// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
		    }else {
				// cout << "Condition 1 : else " << endl;
				// cout << "K : " << k << endl;
				// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
				if(k >= t.length()){
					// cout << "Condition 1 : else : if " << endl;
					// cout << "K : " << k << endl;
					// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
					while(k != t.length()){
						k--;
						if(e > 0)
							e--;
					}
					// cout << "After e : " << e <<endl;
					while(k){
						s[e] = t[e];
						e++;
						k--;
					}
					// cout << "Condition 1 : else : if : after " << endl;
					// cout << "K : " << k << endl;
					// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
				}else if (k < t.length()){
						// cout << "Condition 1 : else : else" << endl;
						// cout << "K : " << k << endl;
						// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
						break;
				}	
		    }
	    }else if(e == 0){
			// cout << "Condition 2" << endl;
			// cout << "K : " << k << endl;
			// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
		    if(k >= t.length()){
				// cout << "Condition 2 : IF " << endl;
				// cout << "K : " << k << endl;
				// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
			    while(k != t.length()){
				    k--;
			    }
			    while(k){
					s[e] = t[e];
					e++;
					k--;
				}
				// cout << "Condition 2 : AFTER IF " << endl;
				// cout << "K : " << k << endl;
				// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
	        }else if (k < t.length()){
					// cout << "Condition 2 : else " << endl;
					// cout << "K : " << k << endl;
					// cout << "S : " << s.substr(0,e) << ", T : " << t.substr(0,e) << endl;
				    break;
		    }
	    }else {
			// cout << "Main Else " << endl;
		    e--;
			k--;
	    }
		
    }
    if(s.substr(0,e) == t && k%2 == 0){
	    cout << "Yes" << '\n';
    }else {
	    cout << "No" << '\n';
    }
*/    
    return 0;
}
