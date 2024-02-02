/*
 *  Use i & ostream_iterator to read a file as input 
 *  and write to 2 output files, one for odd and one
 *  for even
 */

#include <iterator>
#include <fstream>

int main()
{
  std::ifstream ifs("ints.txt");        // input file & file stream
  std::ofstream ofsOdd("odd.txt");      // output file & filestream
  std::ofstream ofsEven("even.txt");    // output file & filestream

  // create 2 in_iters one for the stream and one for EOF
  std::istream_iterator<int> in_iter(ifs), eof;

  // create 2 out_iters, on for odd, one for even and append a " " between entries
  std::ostream_iterator<int> out_iter_odd(ofsOdd, " "), out_iter_even(ofsEven, " ");

  // should add a check for the file and an error but couldn't be bothered
  while (in_iter != eof)
  {
    if (*in_iter % 2 == 0) {
      out_iter_even = *in_iter++; // dereference process then increment
    } else {
      out_iter_odd = *in_iter++;
    }
  }
  return 0;
}