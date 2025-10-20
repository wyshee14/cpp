# include <iostream>
# include <string>

//Pseudocode:
// 1. Open the file, read the file
// 2. Getline reads from buffer and stores in std::string line (no need manual buffer size allocation)
// 2. find for the occurence of s1 from line
// 3. replace with s2
// 4. writes into a new file
int main()
{
    std::string str = "There are two needles in the big needles";
    std::string s1 = "needles";
    std::string s2 = "noodles";
    std::string result;
    std::size_t currentPos = 0;

    std::size_t foundPos = str.find(s1, currentPos);
    while (foundPos != std::string::npos)
    {
        str.erase(foundPos, s1.length());
        std::cout << str << std::endl;
        str.insert(foundPos, s2);
        std::cout << str << std::endl;
        currentPos = foundPos + s1.length();
        foundPos = str.find(s1, currentPos);
    }
    // while (foundPos != std::string::npos)
    // {
    //     std::cout << "Found at: " << foundPos << std::endl;
    //     std::cout << "currentPos: " << currentPos << std::endl;
    //     std::cout << "pos: " << foundPos << std::endl;
    //     result += str.substr(currentPos, foundPos - currentPos);
    //     std::cout << "Sub: " << result << "]" << std::endl;
    //     result += s2;
    //     std::cout << "Sub: " << result << "]" << std::endl;
    //     currentPos = foundPos + s1.length();
    //     foundPos = str.find(s1, currentPos);
    // }
    // result += str.substr(currentPos);
    // std::cout << "Sub: " << result << "]" << std::endl;
    // else
    //     std::cout << "Substring not found" << std::endl;

}