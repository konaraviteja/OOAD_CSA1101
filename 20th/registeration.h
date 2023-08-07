
#ifndef REGISTERATION_H
#define REGISTERATION_H

#include <string>

/**
  * class registeration
  * 
  */

class registeration
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  registeration ();

  /**
   * Empty Destructor
   */
  virtual ~registeration ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string signature ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string name;
  int user_id;
  int phone_;
  string address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of user_id
   * @param new_var the new value of user_id
   */
  void setUser_id (int new_var)   {
      user_id = new_var;
  }

  /**
   * Get the value of user_id
   * @return the value of user_id
   */
  int getUser_id ()   {
    return user_id;
  }

  /**
   * Set the value of phone_
   * @param new_var the new value of phone_
   */
  void setPhone_ (int new_var)   {
      phone_ = new_var;
  }

  /**
   * Get the value of phone_
   * @return the value of phone_
   */
  int getPhone_ ()   {
    return phone_;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // REGISTERATION_H
