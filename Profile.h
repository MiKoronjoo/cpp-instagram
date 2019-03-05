//
// Created by hassan on 3/5/19.
//

#ifndef HW_INSTAGRAM_PROFILE_H
#define HW_INSTAGRAM_PROFILE_H

#include <string>
#include <vector>
#include "User.h"

using namespace std;

enum Gender {
    MALE,
    FEMALE
};

class Profile {
public:
    string name;
    string bio;
    vector<Profile> followers;
    vector<Profile> following;
private:
    bool is_private;
public:
    void setPrivate(bool is_private);

    bool getPrivate() const;

public:
    User *user;
    string phone_number;
    Gender gender;
public:
    Profile(User *user, const string &name, const string &bio = "", Gender gender = Gender::MALE);

};


#endif //HW_INSTAGRAM_PROFILE_H
