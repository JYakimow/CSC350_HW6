#include <iostream>
#include <string.h>
using namespace std;

//string jsonInput = "[{“fname”:”val1”, “lname”: “val2”, “sums”:[1,2,3]},{“fname”:”val3”, “lname”:”val4”}]";
string jsonInput = "hello";

string parseJSON(string jsonInput)
{
    //char jsonStringArr [jsonInput.length()];
    int jsonInputLength = jsonInput.length();
    for(int i = 0; i < jsonInputLength; i = i + 1)
    {
        //jsonStringArr[i] = jsonInput[i];
        cout << jsonInput[i] << endl;
    }
    
    return "wip test";
}

int main(int argc, char** argv)
{
    cout << "main hello world" << endl;
    //cout << parseJSON("a") << endl;
    parseJSON(jsonInput);
    
    return 0;
}