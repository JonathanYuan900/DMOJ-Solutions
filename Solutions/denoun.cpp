#include <bits/stdc++.h>
 
using namespace std;

int main() {

    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;  cin >> N;
    cin.ignore();

    string sentence, word;
    while(N--){
        int count{0};

        getline(cin, sentence);

        istringstream iss{sentence};

        while(iss >> word){
            if(isupper(word[0])){
                count++;
            }
        }

        cout << count << "\n";
    }


    return 0;
}
