CSA02 – C Programming – Assignment 3 (CO3)
Student Details
Name: Amanullah 
Register Number: 1912260319
Programme:  B.Tech ECE
Course Code: CSA02
Course Name: C Programming
Course Outcome: CO3
GitHub Repository: CSA02-<RegisterNumber>-Assignment3
Compiler: GCC
GCC Version: [Enter the version shown by gcc --version]
Assignment Objective
This assignment covers searching, sorting and merging using arrays and strings. It includes one-dimensional and two-dimensional arrays, searching in sorted data, merging sorted arrays, sorting algorithms, character arrays and string-handling functions.
Software Requirements
GCC C compiler
A terminal or command prompt
Git and a GitHub account
Check the compiler version:
gcc --version
Folder Structure
Keep each question in its own folder. Save the corresponding C source file and output screenshot in that folder.
CSA02-<RegisterNumber>-Assignment3/
│
├── README.md
├── Task01/
│   ├── Q1_Binary_Search.c
│   └── output.png
├── Task02/
│   ├── Q2_Sorting.c
│   └── output.png
├── Task03/
│   ├── Q3_Merge.c
│   └── output.png
├── Task04/
│   ├── Q4_Rainfall.c
│   └── output.png
├── Task05/
│   ├── Q5_String_Processing.c
│   └── output.png
├── Task06/
│   ├── Q6_Name_Directory.c
│   └── output.png
└── Task07/
    ├── Q7_Election_Count.c
    └── output.png
Compilation and Execution
Run these commands from the relevant task folder. Replace the source filename if you use a different filename.
Task
Compile command
Run command
Q1 – Binary Search
gcc Q1_Binary_Search.c -o q1
./q1
Q2 – Sorting
gcc Q2_Sorting.c -o q2
./q2
Q3 – Merge Arrays
gcc Q3_Merge.c -o q3
./q3
Q4 – Rainfall Records
gcc Q4_Rainfall.c -o q4
./q4
Q5 – String Processing
gcc Q5_String_Processing.c -o q5
./q5
Q6 – Name Directory
gcc Q6_Name_Directory.c -o q6
./q6
Q7 – Election Counting
gcc Q7_Election_Count.c -o q7
./q7
On Windows, run the generated program as q1.exe, q2.exe, and so on.
Task Descriptions and Results
Task 1 – Searching a Library Catalogue
Implemented binary search on a sorted array of accession numbers. The program returns the index of a searched book or -1 if it is not present, and counts the comparisons made.
Result: The sample searches find the books at the beginning, middle and end, and correctly report a missing accession number.
Task 2 – Sorting the Examination Hall Seating Register
Implemented bubble sort with an early-exit flag, selection sort and insertion sort.
Result: All three algorithms arrange the sample register numbers in ascending order.
Task 3 – Merging Two Merit Lists
Implemented merging of two arrays already sorted in descending order. The larger current score is copied into the output array, followed by the remaining values.
Result: The two sample merit lists are combined into one descending-order list without sorting the merged result again.
Task 4 – Two-Dimensional Arrays: District Rainfall Records
Used a two-dimensional array to calculate each district's total rainfall, each month's average rainfall and the maximum rainfall value.
Result: The sample 3 × 4 rainfall data is processed and the maximum rainfall and its position are displayed. The sample dimensions can be expanded to the assignment's 38 × 12 dataset.
Task 5 – Processing Text Without the Library
Implemented word counting and palindrome checking by scanning character arrays. The palindrome check ignores letter case and non-letter characters.
Result: The sample sentence contains 7 words. “Madam, I'm Adam” is identified as a palindrome, while “Hello” is not.
Task 6 – A Directory of Names: Sorting and Searching Strings
Used fgets to read names, strcmp to sort them alphabetically, and binary search to find a name. Adjacent equal names are reported as duplicates.
Result: The sample names are displayed in alphabetical order, a search is performed, and duplicate names are identified.
Task 7 – Design an Election Counting Program
Used a count array indexed by candidate number to count valid votes and track invalid votes. Candidate results are sorted by vote count, and the program checks whether the highest count is tied.
Result: The program displays valid and invalid vote totals, candidate vote counts in descending order, and the winner or tie result.
Notes
The programs supplied for this assignment are sample implementations for the listed tasks. Run each program and save your own execution screenshots.
Task 4 currently demonstrates the calculations with a small 3 × 4 sample array; extend the input/data to 38 districts and 12 months for the full assignment dataset.
Task 6 currently uses 5 sample names; change the array size and input to test the required larger datasets.
Task 7 accepts up to 5,000 votes as specified in the assignment. Enter candidate count, vote count and then each vote when prompted.
The assignment also asks for comparison counts, timing measurements, tables/graphs, pseudocode and complexity analysis. Add these results to your report after carrying out the experiments; the sample programs alone do not provide all those measurements.
GitHub Submission
Create a repository named:
CSA02-<RegisterNumber>-Assignment3
Add the faculty member as a collaborator if the repository is private. Keep one folder for each task, including source code and output screenshots. Commit your work progressively, with at least one commit for each task.
Example Git commands:
git add README.md Task01/
git commit -m "Complete Task 1 - Binary Search"

git add Task02/
git commit -m "Complete Task 2 - Sorting"

git add Task03/
git commit -m "Complete Task 3 - Merge Arrays"

git add Task04/
git commit -m "Complete Task 4 - Rainfall Arrays"

git add Task05/
git commit -m "Complete Task 5 - String Processing"

git add Task06/
git commit -m "Complete Task 6 - Name Directory"

git add Task07/
git commit -m "Complete Task 7 - Election Counting"

git push
Conclusion
This assignment provides practical experience with searching, sorting, merging, two-dimensional arrays, string processing and array-based problem solving in C. The programs demonstrate the core operations and should be tested further with the input sizes and measurements required in the assignment instructions.# Assignment-3-Aman
