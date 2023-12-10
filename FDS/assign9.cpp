/*
A palindrome is a string of character that‘s the same forward and
backward. Typically, punctuation, capitalization,
and spaces are ignored. For example, “Poor Dan is ina droop” is a
palindrome, as can be seen by examining the
characters “poor danisina droop” and observing that they are the
same forward and backward.
One way to check for a palindrome is to reverse the
characters in the string and then
compare with them the original-in a palindrome,the sequence will be
identical.Write C++ program with functionsa)To print original string followed by reversed string using stack
b)To check whether given string is palindrome or not
*/
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
int palindrome(string s3,string s4)
{
 if(s3==s4)
 {
 cout<<"string is palindrome"<<endl;
 }
 else
 {
 cout<<"string is not palindrome"<<endl;
 }
}
int underflow(int top1,int len4)
{
 if(top1<0)
 {
 return 1;
 }
 else
 {
 return 0;
 }
}
char pop(char arr3[],int top,int len3)
{

 char rev1;
 int m=underflow(top,len3);
 if(m==1)
 {
 cout<<"stack Underflow"<<endl;
 }
 else
 {
 cout<<"elements popped from stack"<<" "<<arr3[top]<<endl;
 rev1=arr3[top];
 }

 return rev1;
 //cout<<"reversed String"<<" "<<ss;
}
int overflow(int i2,int len2)
{
 if(i2<len2)
 {
 return 0;
 }
 else
 {
 return 1;
 }
}
int push(char arr1[],int i1,char s1,int len1)
{
 int p=overflow(i1,len1);
 if(p==1)
 {
 cout<<"Stack Overflow"<<endl;
 }
 else
 {
 i1=i1+1;
 arr1[i1]=s1;
 cout<<"element pushed in stack is"<<" "<<arr1[i1]<<endl;

 }
}
int main() {
 string s="Poor dan is ina Droop";
 cout<<"original string :"<<" "<<s<<endl;
 // char rev='';
 s.erase(std::remove_if(s.begin(), s.end(), ::isspace),
 s.end());
 cout<<"string after removal of white spaces:"<<" "<<s<<endl;
 string revs="";
 char ch1;
 int len=s.length();
 char arr[len];
 cout<<"**** push operation on stack****"<<endl;
 for(int i=0;i<len;i++)
 {
 push(arr,i,s[i],len);
 }
 cout<<endl<<"***** pop operation on stack ****"<<endl;
 for(int i=len;i>0;i--)
 {
 ch1=pop(arr,i,len);
 revs+=ch1;
 }
 cout<<"original string"<<" "<<s<<endl;
 cout<<"reverse string"<<" "<<revs<<endl;
 ///convert both string in lower case
 transform(s.begin(), s.end(), s.begin(), ::tolower);
 transform(revs.begin(), revs.end(), revs.begin(), ::tolower);

 palindrome(s,revs);

 return 0;
}
