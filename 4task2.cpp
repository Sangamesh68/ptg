
#include <iostream>

#include<vector>

#include<set>

using namespace std;

// Task 2: Iterating Through Containers and Finding Elements

// Goal: Practice iterating through containers and retrieving specific elements.

// Scenario:

// You are tasked with highlighting all active widgets on the HMI screen. The HMI has two main containers:

// std::vector for dynamic widgets.

// std::set for static widgets.

// Steps:

// Populate Containers:

// Initialize a std::vector<std::string> with dynamic widgets ("Speedometer", "Tachometer", etc.).

// Initialize a std::set<std::string> with static widgets ("Logo", "WarningLights").

// Use Iterators:

// Print all dynamic widgets using an iterator.

// Check if a specific widget (e.g., "WarningLights") is in the std::set using std::set::find.

// Advanced Iteration:

// Combine both containers into a std::vector<std::string> using std::copy.

// Use std::find to locate a specific widget in the combined container.

// Output Results:

// Print the widget list dynamically and show results of widget searches.
// HI
class HMIScreen

{

  vector<string> dynamicWidges;

  set<string > staticWidges;

  vector<string> combinedWidges;

public:

  HMIScreen(){

    dynamicWidges.push_back("Speedometer");

    dynamicWidges.push_back("Tacometer");

    dynamicWidges.push_back("Odometer");

    dynamicWidges.push_back("FuelGuage");

    dynamicWidges.push_back("EngineTempGauge");

    staticWidges.insert("Logo");

    staticWidges.insert("WarningLights");

    staticWidges.insert("SeatBeltWarning");

    staticWidges.insert("DrivingModeIndicator");

    staticWidges.insert("TurnSignalIndicator");

  }

  void printAllDynamicWidges()

  {

    auto it = dynamicWidges.begin();

    cout << "All the dynamic widges are :" << endl;

    while(it != dynamicWidges.end())

    {

      cout << *it << endl;

      it++;

    }

    cout << endl;

  }

  void findStaticWidge(string widge)

  {

    auto desiredWidge = find(staticWidges.begin(),staticWidges.end(),widge);

    if(desiredWidge != staticWidges.end())

    {

      cout << widge << " found in widges" << endl;

    }

    else{

      cout << widge << " not found in widges "<<endl;

    }

  }

  void findInCombinedWidges(string widge)

  {

    copy(dynamicWidges.begin(),dynamicWidges.end(),back_inserter(combinedWidges));

    copy(staticWidges.begin(),staticWidges.end(),back_inserter(combinedWidges));

    auto desiredWidge = find(combinedWidges.begin(),combinedWidges.end(),widge);

    if(desiredWidge != combinedWidges.end()){

      cout << widge << " Widge found at location " << desiredWidge-combinedWidges.begin() << endl;

    }

    else

    {

      cout << widge <<" Widge not found"<< endl;

    }

  }

};

int main()

{

  HMIScreen hmiScreen;

  hmiScreen.printAllDynamicWidges(); // prints all the dynamic widges

  hmiScreen.findStaticWidge("SeatBeltWarning") ;// find if desired widge is prest or not

  hmiScreen.findInCombinedWidges("TurnSignalIndicator"); //find location of a widge in combined widge

  // cout << "Hello World!" << endl;

  return 0;

}

