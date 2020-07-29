/*
Suppose you have a sequence consisting of L’s and M’s where L denotes a descending and M denotes an ascending sequence. Take a sequence as an input and decode it to construct a number without repeated digits.
(For example:
MMLLMLML -> 125437698
MMMM -> 54321
LLLL-> 12345 )
*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char str[200];
   int n=0,c=0,final=0,j;
   cout<<"enter the pattern in combination of M and L:";
   cin.getline(str,200);
   for(int i=0;str[i] != '\0';i++)
   {
       n=n+1;
   }
   if(n>=9)
   {
       cout<<"You have entered a wrong input";
   }
   else
   {
   for(int i=0;i<n;i++)
   {
       int n_m=0;
       if(str[i]=='L')
       {
           j=i+1;
           while(str[j] == 'M' && j < n)
           {
               n_m=n_m+1;
               j=j+1;
           }
           if(i == 0)
           {
               c=n_m+2;
               final=final+1;
               cout<<final;
               cout<<c;
               
               final=c;
           }
           else
           {
               c=c+n_m+1;
               final=c;
               cout<<final;
           }
           for(int k=0;k<n_m;k++)
           {
               final=final-1;
               cout<<final;
               i=i+1;
           }
       }
       
       
      else if(str[i]=='M')
      {
          if(i == 0)
          {
          j=i+1;
          while(str[j] == 'M' && j < n)
          {
              n_m=n_m+1;
              j=j+1;
          }
          c=n_m+2;
          cout<<c;
          cout<<c-1;
          final=c-1;
          }
          else
          {
              final=final-1;
              cout<<final;
          }
           
      }
   }
   }
   
    return 0;
}
