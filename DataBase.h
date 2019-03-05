//
// Created by hassan on 3/5/19.
//

#ifndef HW_INSTAGRAM_DATABASE_H
#define HW_INSTAGRAM_DATABASE_H

#include <vector>
#include <string>
#include "Profile.h"
#include "User.h"

using namespace std;

class DataBase {
private:
    static vector<User> _users;
    static vector<Profile> _profiles;

public:
    static void addUser(const User &user);

    static User &findUser(const string &username);

    static void addProfile(const Profile &profile);

    static Profile &findProfile(const string &username);
};

#endif //HW_INSTAGRAM_DATABASE_H
