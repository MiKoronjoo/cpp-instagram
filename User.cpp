//
// Created by hassan on 3/5/19.
//

#include "User.h"
#include "DataBase.h"

const string &User::getUsername() const {
    return username;
}

void User::setPassword(const string &password) {
    this->password = User::hash(password);
}

void User::resetPassword(const string &email) {
    if (email == this->email) {
        // TODO: Send email to reset password
        return;
    }
    // throw exception("Wrong email address")
}

bool User::login(const string &username, const string &password) {
    User found_user = DataBase::findUser(username);
    return found_user.password == User::hash(password);
}

bool User::signup(const string &username, const string &password, const string &email) {
    // TODO: Signup validation (maybe username or email is already taken)
    User new_user(username, email);
    new_user.setPassword(password);
    DataBase::addUser(new_user);

    Profile new_profile(&(DataBase::findUser(username)), "name");
    DataBase::addProfile(new_profile);
    return true;
}


User::User(const string &username, const string &email) : username(username), email(email) {
    static int user_id = 1000;
    id = user_id;
    user_id++;
}

const string User::hash(const string &password) {
    // TODO: hash password
    return password;
}
