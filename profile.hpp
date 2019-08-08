#include <vector>
class Profile{
  private:
  
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;
  
  public:
  Profile(std::string inname, int inage, std::string incity, std::string incountry, std::string inpronouns = "they/them");
  
  std::string view_profile();
  void add_hobby(std::string new_hobby);
  
};
