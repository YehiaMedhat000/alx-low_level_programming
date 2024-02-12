# Quiz questions

#### Q0. What is the return value of the system call open if it fails?
- -1 ✅
- 98
- 0

#### Q1. What is the oflag used to open a file in mode read + write?
- O_RDONLY
- O_RDWR ✅
- O_WRONLY

#### Q2. When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.
- True ✅
- False

#### Q3. why? \#AlwaysAskWhy
- Because this will be the first opened file descriptor and in CS we start counting starting from
- Because this will be the second opened file descriptor for my process
- Because this will be the third opened file descriptor for my process
- I don’t care I never ask why, just let me access the tasks!
- Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing. ✅

#### Q4. What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
- O_WRONLY | O_CREAT | O_APPEND ✅
- O_WRONLY | O_CREAT | O_EXCL
- O_RDWR | O_CREAT | O_APPEND
- O_WRONLY

#### Q5. What system call would you use to write to a file descriptor? (select all correct answers)
- fprintf
- write ✅
- printf

#### Q6. Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS? (select all correct answers):
- 1
- (O_RDONLY && O_WRONLY)
- 2 ✅
- (O_WRONLY << 1) ✅
- 3
- (O_RDONLY << 1)
- 0
- O_RDONLY
- (O_RDONLY + O_WRONLY)
- 3 | 2
- (O_RDONLY | O_WRONLY)
- 3 & 2 ✅
- O_WRONLY
- 1 << 1 ✅
- (O_RDONLY & O_WRONLY)

#### Q7. Without context, on Ubuntu 14.04 LTS, write is a … (please select all correct answers):
- game
- library call
- system call ✅
- executable ✅
- kernel routine

#### Q8. Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):
- 2
- 3 ✅
- 0
- 5
- 1
- 6
- 4

#### Q9. What is the oflag used to open a file with the mode read only?
- O_RDONLY ✅
- O_RDWR
- O_WRONLY

#### Q10. What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?
- The text will be printed on the terminal but I can't pipe it 
- Segmentation fault
- The text will be printed on the terminal on the standard output ✅
- Nothing

#### Q11. What is the unistd symbolic constant for the standard input?
- STDOUT_FILENO
- STDERR_FILENO
- STDIN_FILENO ✅

#### Q12. What is the unistd symbolic constant for the Standard error?
- STDOUT_FILENO
- STDERR_FILENO ✅
- STDIN_FILENO

#### Q13. What is the unistd symbolic constant for the standard output?
- STDOUT_FILENO ✅
- STDERR_FILENO
- STDIN_FILENO

#### Q14. is open a function or a system call? (select all valid answers)
- it’s a function provided by the kernel ✅
- it’s a library call
- it’s a system call ✅
- it’s a function ✅
- it’s a kernel routine
