# Welcome to My Ngram
***

## Task
What is the problem? And where is the challenge?
In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. 
The items can be phonemes,syllables, letters, words or base pairs according to the application. 
The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may 
also be called shingles.




## Description
How have you solved the problem?
3 functions: 1 int main(int argc, char **argv), 1 function to print, 1 function. to fill in the array

## Installation
Needs a Makefile.  Make requires -Wall, -Werror, -Wextra a outfil and a gcc
Make files need:
all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all



## Usage
How does it work?
Needs a makefile to start
Needs to casst
Type in: Make


Gandalf is sending an extra '"', please add a if != from '"' in order to pass the project.



./ngram abcdefggggg
```
## Vocab
casts
void points
Glossasry:
cast
casting without casting
void pointers
unsigned int
return 0 vs return EXIT_SUCCESS
array[(int)str[index]] += 1;
array[string[i]++

unsigned int - can have only integers, and more numbers, 65, 535

int - can have postive and negative numbers


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
