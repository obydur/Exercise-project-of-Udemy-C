#include <iostream>
#include<vector>
using namespace std;

int main()
{
 vector<char> vowels{'a','e','i','o','u'};
 cout << vowels [0] << endl;
 cout << vowels [1] << endl;
 
 vector <int> text_scores {99,45,63};
 cout << "\nTest scores using array syntax:" << endl;
 cout << text_scores [0] << endl;
 cout << text_scores [1] << endl;
 cout << text_scores [2] << endl;
 
 //.....
cout << "\nText score using vector syntex with .at methodes:" << endl;
cout << text_scores.at(0) << endl;
cout << text_scores.at(1) << endl;
cout << text_scores.at(2) << endl;
cout << "\nThere are " << text_scores.size() << " scores in the vector"<< endl;

//.....
cout << "Enter 3 Text scores: ";
cin >> text_scores.at(0);
cin >> text_scores.at(1);
cin >> text_scores.at(2);
//...update text scores with display
cout << "Text scores update: "<< endl;
cout << text_scores.at(0) << endl;
cout << text_scores.at(1) << endl;
cout << text_scores.at(2) << endl;

//...push methodes
cout << "\nEnter a test score to add  to the vector: ";
int score_to_add {0};
cin >> score_to_add;
text_scores.push_back(score_to_add);

cout << "\nEnter one more text score to add to the vector: ";
cin >> score_to_add;
text_scores.push_back (score_to_add);
cout << "\nText scores are now: "<< endl; 
      
//...update text scores are now  with display
cout << "\nText scores update are now: "<< endl;
cout << text_scores.at(0) << endl;
cout << text_scores.at(1) << endl;
cout << text_scores.at(2) << endl;      
cout << text_scores.at(3) << endl;      
cout << text_scores.at(4) << endl;  

cout << "\n TThere are now " << text_scores.size() << " scores in the vector" << endl;


//cout << "This should  cause an exception!!" << text_scores.at(10) << endl;


//Example of 2D -vector  
vector <vector<int>> movie_ratings
{
    {1,2,3,4},
    {1,2,4,5},
    {1,3,4,6},
    
    };
    
cout << "\nHere are the moving rating for reviewer #1 using array syntax: " << endl;
cout << movie_ratings [1][0] << endl;
cout << movie_ratings [1][1] << endl;
cout << movie_ratings [1][2] << endl;
cout << movie_ratings [1][3] << endl;

cout << "\n Here are the moving rating for reviewer #2 using vector syntex: " << endl;
cout << movie_ratings.at(1).at(0) << endl;
cout << movie_ratings.at(1).at(1) << endl;
cout << movie_ratings.at(1).at(2) << endl;
cout << movie_ratings.at(1).at(3) << endl;

 
 return 0;
    
    }