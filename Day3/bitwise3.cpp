void bitSwap(int &x, int &y) 
{
  std::cout << "Before swapping x = " << x << " and y = " << y << ".\n";
  x = x^y;
  y = x^y;
  x = x^y;
  std::cout << "After swapping x = " << x << " and y = " << y << ".\n";
}  
  
