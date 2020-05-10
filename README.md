To compile and run these example programs:
* Open the terminal in the folder where the program you want to compile resides
* If you are on Windows run:
```
wsl
```
* If the example conists of a single (.cpp) file then compile it by doing something like this:
```
g++ -o ex02 ex02-primitives.cpp 
```
* Then run it by:
```
./ex02 
```
* If the example conists of multiple files (some .h and some .cpp) then compile it by doing something like this:
```
g++ -I. -o pub ex06-audio.cpp ex06-book.cpp ex06-main.cpp ex06-publication.cpp 
```
* Then rut it by:
```
./pub 
```
