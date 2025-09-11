// ¦b°®½_¯ó°ï¸Ì§ä°w
//haystack: sadbutsad
//needle: sad
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();
        for(int i=0; i <= H - N; i++) {
            if( haystack.substr(i, N) ==needle) return i;
        }

        return -1;
    }
};
