#include <bits/stdc++.h>
using namespace std;

void main()
{
    int i,j=0;
    int tmp1,tmp2;
    int dtln,kln,sum;
    string data,key,cipher;
    cout << "Enter String:";
    cin >> data;
    cout << "Enter Key:";
    cin >> key;
    dtln = data.size();
    kln = key.size();
    // Sender Side
    for(i=kln;i<dtln;i++)
    {
        if(data[i]==32)
        {
            i++;
        }
        key[i] = key[j];
        j++;
    }
    for(i=0;i<dtln;i++)
    {
        if(data[i]==32)
        {
            cipher[i]=' ';
            i++;
        }
        else if(data[i]<=90 && data[i]>=65)
        {
            tmp1=data[i]-65;
        }
        else if(data[i]<=123 && data[i]>=97)
        {
            tmp1=data[i]-97;
        }
        tmp2=key[i]-64;
        sum=tmp1+tmp2;
        if(sum>26)
        {
            sum=sum-26;
            cipher[i]=sum+64;
        }
        else
        {
            cipher[i]=sum+64;
        }
    }
    cout << cipher << endl;
    //RECEIVER SIDE
    cout << "Receiver Side" << endl;
    for(i=0;i<cipher.size();i++)
    {
        tmp1=cipher[i]-64;
        tmp2=key[i]-65;
        sum=tmp1-tmp2;
        if(sum<0)
        {
            sum=sum+26;
            cipher[i]=sum+64;
        }
        else
        {
            cipher[i]=sum+64;
        }
    }
    cout << "Cipher Text:" << endl;
    cout << cipher << endl;
}
