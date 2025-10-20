# include <iostream>
# include <fstream>     // ofstream (create and write) + ifstream (read)

std::string replaceMyText(std::string& str, const std::string& s1, const std::string& s2)
{
    std::size_t currentPos = 0;

    std::size_t foundPos = str.find(s1, currentPos);
    while (foundPos != std::string::npos)
    {
        str.erase(foundPos, s1.length());
        str.insert(foundPos, s2);
        currentPos = foundPos + s1.length();
        foundPos = str.find(s1, currentPos);
    }
    return str;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Argument must be 4: ./program <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string myText;
    std::string changedString;
    std::string result;
    
    if (filename.empty() || s1.empty() || s2.empty())
    {
        std::cerr << "Arguments cannot be empty" << std::endl;
        return 1;
    }

    // Read from the file 
    // ifstream creates an object MyReadFile
    // open the file using std::ios::in (default mode of istream)
    // std::filebuf is a stream buffer class act as a temperory buffer
    // characters read are stored in this buffer
    // getline read from this buffer
    std::ifstream MyReadFile(filename);
    if (!MyReadFile)
    {
        std::cerr << "Failed to open input file" << std::endl;
        return 1;
    }
    // std::filebuf* buf = MyReadFile.rdbuf();
    // Check if the file is exist/open successfully 
    if (!MyReadFile.is_open())
    {
        std::cerr << "Failed to open outfile.txt\n";
        return 1;
    }
    // extract line by line, delimiter '\n'
    while (std::getline(MyReadFile, myText))
    {
        changedString = replaceMyText(myText, s1, s2);
        result.append(changedString);
        result.append("\n");
    }

    MyReadFile.close();

    std::string outfile = filename.append(".replace");
    // Create and write to file
    std::ofstream MyOutFile(outfile);
    if (!MyOutFile)
    {
        std::cerr << "Failed to create outfile" << std::endl;
        return 1;
    }
    MyOutFile << result;
    MyOutFile.close();

    return 0;
}