‪#‎include‬ <iostream> ///header for I/O
#include <fstream> ///header for file
using namespace std;
int main()
{
ifstream fin("input.txt"); ///declaring input variable fin to take input from input.txt
ofstream fout("output.txt"); ///declaring output variable fout to write output to output.txt
int x, sum = 0;
for(int i = 0; i<10; i++)
{
fin>>x;
sum += x;
}
fout<<sum<<"\n";
fin.close(); ///closing input file
fout.close(); ///closing output file
}
