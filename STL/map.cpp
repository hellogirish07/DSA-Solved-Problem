# include <iostream> 
# include <map>
# include <string>
# include <vector>
# include <unordered_map>
using namespace std;

int main()
{
    map<string, int> m1;
    // create a map of string and int
    m1["Laptop"] = 50000;
    m1["TV"] = 1000;
    m1["AC"] = 2000;

    // insert elements in the map
    m1.insert({"Microwave", 5500});
    m1.insert({"Mobile", 6000});
    m1.insert({"Tablet", 7000});
    m1.insert({"Camera", 8000});

    // print the map
    cout << "The map is: " << endl;
    for (auto p : m1) {
        cout << p.first << " " << p.second << endl;
    }

    if(m1.find("Laptop") != m1.end()) {
        cout << "Laptop is present in the map" << endl;
    } else {
        cout << "Laptop is not present in the map" << endl;
    }

    cout << endl;

    // Multimap
    multimap<string, int> m2;
    m2.insert({"Laptop", 50000});
    m2.insert({"Laptop", 60000});
    m2.insert({"Laptop", 70000});

    cout << "The Multimap is: " << endl;
    for (auto p : m2) {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    // Unordered map
    unordered_map<string, int> m3;
    m3["Laptop"] = 50000;
    m3["TV"] = 1000;
    m3["AC"] = 2000;
    m3["AC"] = 2500; // duplicate key, will overwrite the value
    m3["Fridge"] = 3000;

    cout << "The Unorderd map is: " << endl;
    for (auto p : m3) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}