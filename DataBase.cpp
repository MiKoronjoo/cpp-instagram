//
// Created by hassan on 3/5/19.
//

#include "DataBase.h"

// Setup static attributes
vector<User> DataBase::_users;
vector<Profile> DataBase::_profiles;

void DataBase::addUser(const User &user) {
    DataBase::_users.push_back(user);
}

User &DataBase::findUser(const string &username) {
    for (User &user : DataBase::_users) {
        if (user.getUsername() == username)
            return user;
    }
    // throw exception("User not found")
}

void DataBase::addProfile(const Profile &profile) {
    DataBase::_profiles.push_back(profile);
}

Profile &DataBase::findProfile(const string &username) {
    for (Profile &profile : DataBase::_profiles) {
        if (profile.user->getUsername() == username)
            return profile;
    }
    // throw exception
}
