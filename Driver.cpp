#include <iostream>
#include <string.h>
using namespace std;

string jsonInput = "[{“fname”:”val1”, “lname”: “val2”, “sums”:[1,2,3]},{“fname”:”val3”, “lname”:”val4”}]";
//string jsonInput = "[mac[h]ine]";

string parseJSON(string jsonInput)
{
    char jsonStringArr [jsonInput.length()];
    string jsonString = jsonInput;
    //jsonString.erase(1,1);
    int jsonInputLength = jsonInput.length();
    int counter = 0;
    /*
    for(int i = 0; i < jsonInputLength; i = i + 1)
    {
        jsonStringArr[i] = jsonInput[i];
    }
    */
    cout << "initial string: " + jsonInput << endl;

    for(int i = 0; i < jsonInputLength; i++)
    {
        //jsonStringArr[i] = jsonInput[i];
        //char leftBracket = '[';
        if (jsonString[i] == '[')
        {
            counter++;
            //string counterString = to_string(counter);
            //cout << "count: " + counterString << endl;

            if (counter == 1)
            {
                jsonString.erase(i,i+1);
                //counter--;
            }
            //cout << jsonString << endl;
        }
        else if (jsonString[i] == ']')
        {
            counter--;
            //string counterString = to_string(counter);
            //cout << "count: " + counterString << endl;

            if (counter == 0)
            {
                jsonString.erase(i,i);
                //counter--;
            }
            //cout << jsonString << endl;
        }
        //cout << jsonString[i] << endl;
        /*
        string bucketString = to_string(i);
        string counterString = to_string(counter);
        cout << jsonString + " step: " + bucketString + " count: " + counterString << endl;
        */
    }
    jsonString = "new string: " + jsonString;
    return jsonString;
}

int main(int argc, char** argv)
{
    //cout << "main hello world" << endl;
    //cout << parseJSON("a") << endl;
    cout << parseJSON(jsonInput) << endl;

    /*
    string s = "temp";
    s.erase(0,1);
    cout << s << endl;
    */
    
    return 0;
}