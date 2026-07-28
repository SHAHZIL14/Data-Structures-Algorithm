#include <bits/stdc++.h>
using namespace std;

int getTotalSum(vector<int> &v)
{
  // Initializing sum as zero;
  int sum = 0;

  for (int val : v)
  {
    // Adding each value one by one to our sum and updating it.
    sum += val;
  }

  // Total sum we have 
  return sum;
}

bool isValid(vector<int> &books, int students, int maxAllowed){
  // Initializing students we used to allocate books and pages allocated 
  // to each  student. 
  int studentsAllocated = 1;
  int pagesAllocated = 0;

  for(int pages:books){
    // If any book with pages more than the maximum pages we allowed to allocate 
    // then we can not assign with this max value , hence not a valid answer.
    if(pages>maxAllowed) return false;

    // If pages we already allocated plus the pages we are going to assing is less or
    //  equals to maximum value we can allot to , we allot.
    if(pages+pagesAllocated<=maxAllowed){
      pagesAllocated += pages;
    }

    // Else we need to introduce new student to allocate new pages , hence 
    // studentsAllocated++.
    else{
      studentsAllocated++;
      pagesAllocated = pages;
    }
    // If we need more students to allocate the books such that the maximum allocated
    // to a student is less or equal to the maximum allowed , then the maximum allowed
    // is invalid , hence return false.
    if(studentsAllocated>students) return false;
  }

  // If all the pages are allocated to student consider the max allowed, then it
  // is a valid answer.
  return true;
}

int minimumOfAllMaximumPagesAllottedToAStudent(vector<int> &books, int students)
{
  // Initializing answer with invalid value.
  int answer = -1;

  // If Students quantity is less that number of books , we can not assign books.
  if (books.size() < students)
    return answer;

  // Initializing pointers for valid range of answer start from 0-> to Sum of all pages.
  int start = 0;
  int end = getTotalSum(books);
  while (start <= end)
  {
    // Finding the middle of the range.
    int middle = start + (end - start) / 2;

    // If Books[Middle] is valid we try to find the next anwer that is less than this.
    if (isValid(books, students, middle))
    {
      answer = middle;
      end = middle - 1;
    }
    // Else we move to greater quantity of max page that will be on right half of
    //  the middle in range
    else
      start = middle + 1;
  }
  return answer;
}

int main()
{
  vector<int> books = {10,50,100,20};
  int students = 2;
  cout<<minimumOfAllMaximumPagesAllottedToAStudent(books,students);
  return 0;
}