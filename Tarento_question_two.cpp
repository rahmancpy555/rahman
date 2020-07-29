/*
2. - Accept a String input from the stdin or file
- Print the count of words in the String. Space is assumed to be the separator between words
- Print the count of alphabets & numbers in the String

Eg. If the String input is
I like programming every 2 days
then the output should as below
Total words - 6
alphabets - 25
Numbers - 1

*/


#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int words=1,alphabets=0,digits=0;
   char str[200];
   cout<<"enter the string:";
   cin.getline(str,200);
   for(int i=0;str[i] != '\0';i++)
   {
       if(str[i] == ' ')
       {
           words=words+1;
       }
   }
   for(int i=0;str[i] != '\0';i++)
   {
       if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
       {
           alphabets=alphabets+1;
       }
   }
   for(int i=0;str[i] != '\0';i++)
   {
       if(str[i] >= '0' && str[i] <= '9')
       {
           digits=digits+1;
       }
   }
   cout<<"Total Words-"<<words<<"\n";
   cout<<"Alphabets-"<<alphabets<<"\n";
   cout<<"Numbers-"<<digits;
    
    return 0;
}
