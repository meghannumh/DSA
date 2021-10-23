class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k=pat.size(), i=0, j=0;
	    unordered_map<char, int> mp;
	    for(int temp=0; temp<pat.size(); temp++) mp[pat[temp]]++;
	    int cnt = mp.size(), res=0;
	    while(j<txt.size()){
	        if(mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]] == 0) cnt--;
	        }
	        if(j-i+1<k) j++;
	        else if(j-i+1==k){
	            if(cnt==0) res++;
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1) cnt++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return res;
	}

};
