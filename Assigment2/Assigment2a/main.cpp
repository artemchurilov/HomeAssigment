#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    std::filesystem::path infilepath{"testfile.txt"};
    std::ifstream infile;
    std::ofstream outfile;
    infile.open(infilepath, std::ios::binary|std::ios::in);
    uintmax_t fsize = std::filesystem::file_size(infilepath);
    std::filesystem::path outfilepath{"temppdf.pdf"};
    outfile.open(outfilepath, std::ios::binary|std::ios::out);
    std::cout <<fsize<<std::endl;
    infile.close();
    outfile.close();
}
