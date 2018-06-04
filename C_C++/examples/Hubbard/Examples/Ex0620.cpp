//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.20 on page 140
//  Processing a two-dimensional array of quiz scores

#include <iostream>  // defines the cin and cout objects
using namespace std;

const NUM_STUDENTS = 3;
const NUM_QUIZZES = 5;
typedef int Score[NUM_STUDENTS][NUM_QUIZZES];
void read(Score);
void printQuizAverages(Score);
void printClassAverages(Score);

int main()
{ Score score;
  cout << "Enter " << NUM_QUIZZES << " scores for each student:\n";
  read(score);
  cout << "The quiz averages are:\n";
  printQuizAverages(score);
  cout << "The class averages are:\n";
  printClassAverages(score);
}

void read(Score score)
{ for (int s=0; s<NUM_STUDENTS; s++)
  { cout << "Student " << s << ": ";
    for (int q=0; q<NUM_QUIZZES; q++)
      cin >> score[s][q];
  }
}

void printQuizAverages(Score score)
{ for (int s=0; s<NUM_STUDENTS; s++)
  { float sum = 0.0;
    for (int q=0; q<NUM_QUIZZES; q++)
      sum += score[s][q];
    cout << "\tStudent " << s << ": " << sum/NUM_QUIZZES << endl;
  }
}

void printClassAverages(Score score)
{ for (int q=0; q<NUM_QUIZZES; q++)
  { float sum = 0.0;
    for (int s=0; s<NUM_STUDENTS; s++)
      sum += score[s][q];
    cout << "\tQuiz " << q << ": " << sum/NUM_STUDENTS << endl;
  }
}
