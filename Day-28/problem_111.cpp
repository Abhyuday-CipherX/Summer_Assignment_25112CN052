// Write a program to Create ticket booking system.
#include <bits/stdc++.h>
using namespace std;
void showMenu();
void bookTicket(vector<int> &ticketIds, vector<string> &passengerNames, vector<string> &destinations, vector<double> &ticketPrices);
void displayBookings(const vector<int> &ticketIds, const vector<string> &passengerNames, const vector<string> &destinations, const vector<double> &ticketPrices);
void editDetails(const vector<int> &ticketIds, vector<string> &passengerNames, vector<string> &destinations, vector<double> &ticketPrices);

int main() 
{
    vector<int> ticketIds;
    vector<string> passengerNames;
    vector<string> destinations;
    vector<double> ticketPrices;
    int choice;
    do {
        showMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                bookTicket(ticketIds, passengerNames, destinations, ticketPrices);
                break;
            case 2:
                displayBookings(ticketIds, passengerNames, destinations, ticketPrices);
                break;
            case 3:
                editDetails(ticketIds, passengerNames, destinations, ticketPrices);
                break;
            case 4:
                cout << endl << "Exiting Ticket Booking System. Have a safe journey!" << endl;
                break;
            default:
                cout << endl << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 4);
    return 0;
}

void showMenu() 
{
    cout << endl << "-----------------------------------" << endl;
    cout << "       TICKET BOOKING SYSTEM       " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Book New Ticket" << endl;
    cout << "2. Display Active Bookings" << endl;
    cout << "3. Edit Details / Route Info" << endl;
    cout << "4. Exit" << endl;
    cout << "-----------------------------------" << endl;
}

void bookTicket(vector<int> &ticketIds, vector<string> &passengerNames, vector<string> &destinations, vector<double> &ticketPrices) 
{
    int tempId;
    string tempName, tempDest;
    double tempPrice;
    cout << endl << "--- NEW PASSENGER REGISTRATION ---" << endl;
    cout << "Generate/Enter Ticket ID (Integer): ";
    cin >> tempId;
    cout << "Enter Passenger Name (single-word or underscore): ";
    cin >> tempName;
    cout << "Enter Destination City: ";
    cin >> tempDest;
    cout << "Enter Ticket Fare: INR ";
    cin >> tempPrice;

    ticketIds.push_back(tempId);
    passengerNames.push_back(tempName);
    destinations.push_back(tempDest);
    ticketPrices.push_back(tempPrice);
    cout << endl << "Ticket reservation successfully generated!" << endl;
}

void displayBookings(const vector<int> &ticketIds, const vector<string> &passengerNames, const vector<string> &destinations, const vector<double> &ticketPrices) 
{
    if (ticketIds.empty()) 
    {
        cout << endl << "No active transit bookings discovered in the manifest!" << endl;
        return;
    }
    int totalTickets = ticketIds.size();
    for (int i = 0; i < totalTickets; i++) 
    {
        cout << endl << "=========================================" << endl;
        cout << "              PASSENGER TICKET #" << (i + 1) << endl;
        cout << "=========================================" << endl;
        cout << "Ticket ID:        " << ticketIds[i] << endl;
        cout << "Passenger Name:   " << passengerNames[i] << endl;
        cout << "Destination:      " << destinations[i] << endl;
        cout << fixed << setprecision(2);
        cout << "Total Fare Paid:  " << "INR " << ticketPrices[i] << endl;
        cout << "-----------------------------------------";
    }
    cout << endl;
}

void editDetails(const vector<int> &ticketIds, vector<string> &passengerNames, vector<string> &destinations, vector<double> &ticketPrices) 
{
    if (ticketIds.empty()) 
    {
        cout << endl << "No reservation parameters available to update!" << endl;
        return;
    }
    int searchId;
    cout << endl << "Enter Ticket ID to check and alter details: ";
    cin >> searchId;
    int totalTickets = ticketIds.size();
    for (int i = 0; i < totalTickets; i++) 
    {
        if (ticketIds[i] == searchId) 
        {
            cout << endl << "--- MANIFEST RECORDS CONFIRMED ---" << endl;
            cout << "Update Passenger Name: ";
            cin >> passengerNames[i];
            cout << "Update Destination City: ";
            cin >> destinations[i];
            cout << "Update Adjusted Ticket Fare: INR ";
            cin >> ticketPrices[i];
            cout << endl << "Reservation log successfully modified and saved!" << endl;
            return;
        }
    }
    cout << endl << "Ticket reference sequence " << searchId << " was not located." << endl;
}