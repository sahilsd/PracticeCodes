bool canWrite(const string &L, const string &M) 
{
         unordered_map<char, int> hash;

        for(int i=0; i<L.size(); i++) 
            hash[L[i]]++;
        for(const char &c : M) {
            auto it = hash.find(c);
            if(it != hash.end()) {
                if(--it->second == 0)
                    hash.erase(it);
                if(hash.empty())
                    return true;
            }
        }
        return hash.empty();
}

