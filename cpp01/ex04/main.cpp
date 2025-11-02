/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:32:05 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:32:05 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>     // ofstream (create and write) + ifstream (read)

std::string replaceMyText(std::string& str, const std::string& s1, const std::string& s2)
{
	// Find for the first occurence of s1
	std::size_t foundPos = str.find(s1, 0);
	while (foundPos != std::string::npos)
	{
		// erase the string length(2nd) from the position(1st)
		str.erase(foundPos, s1.length());
		// insert the str(2nd) into the position (1st)
		str.insert(foundPos, s2);
		// find all the occurence throught the string
		foundPos = str.find(s1, foundPos + s1.length());
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

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "Arguments cannot be empty" << std::endl;
		return 1;
	}

	// Read from the file
	// input file stream (ifstream) creates an object MyReadFile
	// open the file using std::ios::in (default mode of istream)
	// std::filebuf is a stream buffer class act as a temperory buffer
	// characters read are stored in this buffer
	// getline read from this buffer
	// c++98 oncept c-string(const char*) as a parameter for std::ifstream
	// std::string is only accepted for c++11
	// c_str() convert std::string to c-string with '\0'
	std::ifstream MyReadFile(filename.c_str(), std::ifstream::in);
	if (!MyReadFile)
	{
		std::cerr << "Failed to open input file" << std::endl;
		return 1;
	}
	// std::filebuf* buf = MyReadFile.rdbuf();
	// Check if the file is exist/open successfully
	// Handle no permission file
	if (!MyReadFile.is_open())
	{
		std::cerr << "Failed to open outfile.txt\n";
		return 1;
	}

	std::string myText;
	std::string changedString;
	std::string result;

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
	// ofstream constructor (const char *filename, ios_base::openmode mode = ios_base::out)
	// ostream base constructor passed to a newly constructed filebuf (intermediate output buffer)
	std::ofstream MyOutFile(outfile.c_str(), std::ofstream::out);
	if (!MyOutFile)
	{
		std::cerr << "Failed to create outfile" << std::endl;
		return 1;
	}
	// write to the file
	MyOutFile << result;
	MyOutFile.close();

	return 0;
}


//Pseudocode:
// 1. Open the file, read the file
// 2. Getline reads from buffer and stores in std::string line (no need manual buffer size allocation)
// 2. find for the occurence of s1 from line
// 3. replace with s2
// 4. writes into a new file
