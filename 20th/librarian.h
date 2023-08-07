
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>

/**
  * class librarian
  * 
  */

class librarian
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  librarian ();

  /**
   * Empty Destructor
   */
  virtual ~librarian ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void get ()
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

  int login;
  int password;
  int code;
  string name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of login
   * @param new_var the new value of login
   */
  void setLogin (int new_var)   {
      login = new_var;
  }

  /**
   * Get the value of login
   * @return the value of login
   */
  int getLogin ()   {
    return login;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (int new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  int getPassword ()   {
    return password;
  }

  /**
   * Set the value of code
   * @param new_var the new value of code
   */
  void setCode (int new_var)   {
      code = new_var;
  }

  /**
   * Get the value of code
   * @return the value of code
   */
  int getCode ()   {
    return code;
  }

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
private:


  void initAttributes () ;

};

#endif // LIBRARIAN_H
