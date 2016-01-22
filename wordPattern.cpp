bool wordPattern(string pattern, string str) {
          unordered_map<string, char> match;
         unordered_map<char, string> match2;
         string strpattern(pattern), tmp;
         int i=0;
         //vector<string> tmpstr;
          
         if(!pattern.size() && !str.size())
             return true;
         if(!pattern.size() || !str.size())
             return false ;
          
         stringstream ss(str);
         while(ss >> tmp) {
          
         //string tmp = strtok(str," ");
         cout<<"-"<<tmp<<":"<<strpattern<<"-"<<match[tmp]<<endl;
         //for(int i=0; i<str.size(); i++) {
            if(match[tmp] == '\0' && match2.find(pattern[i]) == match2.end()) {
                 match[tmp] = pattern[i];
                 match2[pattern[i]] = tmp;
                 strpattern[i] = pattern[i];
                 cout<<match[tmp]<<endl;
             }
             else if(match[tmp] != pattern[i] || match2[pattern[i]] != tmp) {
                 cout<<tmp<<"-"<<pattern[i]<<"-"<<match[tmp]<<":"<<match2[pattern[i]]<<endl;
                 return false;
 
             }
             else {
                 strpattern[i] = match[tmp];
             }
             i++;
             //cout<<strpattern[i]<<endl;
         }
         cout<<":"<<pattern[i]<<":"<<i<<endl;
         if(pattern[i] != '\0') return false;
         return pattern==strpattern;
    }
}
