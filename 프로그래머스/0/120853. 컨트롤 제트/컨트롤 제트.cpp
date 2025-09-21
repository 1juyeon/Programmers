#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int temp = 0;
    istringstream ss(s);
    vector<string> store;
    string stringBuffer;

    while (getline(ss, stringBuffer, ' '))
    {
        store.push_back(stringBuffer);
    }

    int length = store.size();

    for (int i = 0; i < length; i++)
    {
        if (store[i] == "Z")
        {
            answer -= temp;
        }
        else
        {
            temp = stoi(store[i]);
            answer += temp;
        }
    }

    return answer;
}