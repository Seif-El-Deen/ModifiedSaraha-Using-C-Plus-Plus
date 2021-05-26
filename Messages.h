#pragma once
#include <string>
#include <stack>
#include <queue>

using namespace std;

class Messages
{
public:
    stack<string> sentMessages;
    stack<string> recMessages;
    queue<string> favMessages;

    void viewSentMessages();
    void viewReceivedMessages();
    void addToFavorites(int); // position will be sent
    void removeFromFavorites(int); //position will be sent
    void viewFavoriteMessages();

    ~Messages();
};