#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

bool IsTheWordPalindrome(std::string str)
{

    int i , j = str.length()-1;
    for(  i = 0  ; i < j; i++ , j--  )
    {
        if(str[i] == str[j])
        {
            //pass
        }
        else
        {
            return false;
        }
    }
    return true;

}


int main()
{
std::string str = "DAD";
std::vector<std::string> stringVec;
stringVec.push_back("DAD");
stringVec.push_back("1881");
stringVec.push_back("PINK FLOYD");

for(std::vector<std::string>::iterator itor = stringVec.begin(); itor!= stringVec.end(); itor++)
{
bool result =  IsTheWordPalindrome(*itor);
if(result == false)
std::cout<<*itor<<" IS NOT A PALINDROME WORD"<<std::endl;
else
std::cout<<*itor<<" IS A PALINDROME WORD"<<std::endl;
}
}
