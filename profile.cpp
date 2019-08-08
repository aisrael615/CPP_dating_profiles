#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string inname, int inage, std::string incity, std::string incountry, std::string inpronouns){
    name = inname;
  	age = inage;
  	city = incity;
  	country = incountry;
  	pronouns = inpronouns;

}
std::string Profile::view_profile(){
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  bio += "\nHobbies: ";
  for (int i = 0; i < hobbies.size(); i++){
    bio += hobbies[i];
  }

  return bio;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}
