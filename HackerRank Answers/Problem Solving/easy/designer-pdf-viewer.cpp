#include <bits/stdc++.h>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int max_height = INT32_MIN;
    for(int i = 0; i < word.length(); i++){
        int word_height = h[(int)word[i] - 97];
        if(max_height < word_height){
            max_height = word_height;
        }
    }
    return max_height * word.length();
}

int main() {
    vector<int> h(26);
    for (int i = 0; i < 26; i++) {
        cin >> h[i];
    }

    string word;
    cin >> word;

    int result = designerPdfViewer(h, word);
    cout << result << "\n";

    return 0;
}
