#include <ctime>
#include <cstlib>



unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum)
{
  unsigned int number = 0; //number to be returned in the end.
  srand(time(0)); //uses the time as a seed to assure that it is a random number every time.
  unsigned int offset = 0;

  if(minimum > maximum)
  {
    number = (rand() % minimum);
  }

  else
  {
    offset = maximum - minimum;
    number = (rand() % offset) + minimum;
  }

  return number;
}
