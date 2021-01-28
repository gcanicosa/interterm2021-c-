#include <iostream>
using namespace std;

int main() {
  int MAX_ROOM_CAPACTIY = 100;
  int numAttendees; // user input
  int moreAttendees; //num attendees until max capacity
  int lessAttendees; //num attendees over max capacity

  cout << "Enter the number of attendees: ";
  cin >> numAttendees;

  cout << "The maximum room capacity is " << MAX_ROOM_CAPACTIY << "." << endl;
  cout << numAttendees << " are attending the meeting." << endl;

  if (numAttendees <= MAX_ROOM_CAPACTIY) {
    cout << "It is legal to hold the meeting." << endl;

    moreAttendees = MAX_ROOM_CAPACTIY - numAttendees;
    cout << moreAttendees << " more guests can legally attend." << endl;
  }
  else { // if attendees over max capacity
    cout << "The meeting cannot be held as planned due to fire regulations." << endl;

    lessAttendees = numAttendees - MAX_ROOM_CAPACTIY;
    cout << lessAttendees
      << " people must be excluded in order to meet the fire regulations." << endl;
  }
  }
