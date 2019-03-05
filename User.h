//
// Created by hassan on 3/5/19.
//

#ifndef HW_INSTAGRAM_USER_H  // can also use "#pragma once"
#define HW_INSTAGRAM_USER_H

#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
    int id;
    string email;
private:
    User(const string &username, const string &email);

    static const string hash(const string &password);

public:
    const string &getUsername() const;

    void setPassword(const string &password);

    void resetPassword(const string &email);

    static bool login(const string &username, const string &password);

    static bool signup(const string &username, const string &password, const string &email);
};


#endif //HW_INSTAGRAM_USER_H
