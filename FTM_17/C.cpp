#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k, arr[26]= {0};

    string str, str_sub;

    cin>>k>>str;

    if(str.length()%k!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(int i=0; str[i]; i++)
    {
        arr[str[i]-'a']++;
        // cout<<str[i]<< ' ' <<arr[str[i]-'a']<<endl;
    }

    for(int i=0; i<26; i++)
    {
        if(arr[i]%k!=0)
        {

            cout<<"-1"<<endl;
            return 0;
        }
        str_sub.append(arr[i]/k,i+'a');
    }

    while(k--)
    {
        cout<<str_sub;
    }



    /*
    string str;
    string str2="Writing ";
    string str3="print 10 and then 5 more";

    // used in the same order as described above:
    str.append(str2);                       // "Writing "

    cout<<str<<endl;

    str.append(str3,2,2);                   // "10 "
    cout<<str<<endl;
    str.append("dots are cool",5);          // "dots "
    cout<<str<<endl;
    str.append("here: ");                   // "here: "
    cout<<str<<endl;
    str.append(10u,'.');                    // ".........."
    cout<<str<<endl;
    str.append(str3.begin()+8,str3.end());  // " and then 5 more"
    cout<<str<<endl;
    str.append<int>(5,0x2E);                // "....."

    cout << str << '\n';
    */


}
