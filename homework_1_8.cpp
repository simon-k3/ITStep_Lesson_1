#include <iostream>
#include <cmath>

// Converts an integer number N into the hexadecimal format
int main(int argc, char** argv) {
  int N;
  std::cout << "Enter an integer number: ";
  std::cin >> N;
  int remainder = N;
  int length = floor(log(N) / log(16));
  char hexadecimal[256];

  for (int i = length; i >= 0; i--) {
    switch (remainder % 16) {
      case 0: hexadecimal[i] = '0'; break;
      case 1: hexadecimal[i] = '1'; break;
      case 2: hexadecimal[i] = '2'; break;
      case 3: hexadecimal[i] = '3'; break;
      case 4: hexadecimal[i] = '4'; break;
      case 5: hexadecimal[i] = '5'; break;
      case 6: hexadecimal[i] = '6'; break;
      case 7: hexadecimal[i] = '7'; break;
      case 8: hexadecimal[i] = '8'; break;
      case 9: hexadecimal[i] = '9'; break;
      case 10: hexadecimal[i] = 'A'; break;
      case 11: hexadecimal[i] = 'B'; break;
      case 12: hexadecimal[i] = 'C'; break;
      case 13: hexadecimal[i] = 'D'; break;
      case 14: hexadecimal[i] = 'E'; break; 
      case 15: hexadecimal[i] = 'F'; break;         
      default: hexadecimal[i] = '-';
    }
    remainder = floor(remainder / 16);
  }

  // Print hexadecimal result:
  std::cout << N << " in the hexadecimal format: 0x";
  for (int i = 0; i <= length; i++) {
    std::cout << hexadecimal[i];
  }
  std::cout << "\n";

  return 0;
}