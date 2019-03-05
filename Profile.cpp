//
// Created by hassan on 3/5/19.
//

#include "Profile.h"

bool Profile::getPrivate() const {
    return is_private;
}

void Profile::setPrivate(bool is_private) {
    this->is_private = is_private;
}

Profile::Profile(User *user, const string &name, const string &bio, Gender gender) : user(user), name(name), bio(bio),
                                                                                     gender(gender) {}
