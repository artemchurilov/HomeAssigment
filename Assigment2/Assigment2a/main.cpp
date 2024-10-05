#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    int i = 0;
    char savevar;
    std::filesystem::path infilepath{"test.txt"};
    std::ifstream infile;
    std::ofstream outfile;
    infile.open(infilepath, std::ios::binary|std::ios::in);
    uintmax_t fsize = std::filesystem::file_size(infilepath);
    char *buffer = new char[fsize];
    infile.read((char *)buffer,fsize);
    std::filesystem::path outfilepath{"final.txt"};
    outfile.open(outfilepath, std::ios::binary|std::ios::out);
    outfile.write((char*)buffer, fsize);
    infile.close();
    outfile.close();
    delete [] buffer;
}
