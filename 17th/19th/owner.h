
#ifndef OWNER_H
#define OWNER_H

#include <string>

/**
  * class owner
  * 
  */

class owner
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  owner ();

  /**
   * Empty Destructor
   */
  virtual ~owner ();

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

  int name;
  int age;
  string adderss;
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
  void setName (int new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  int getName ()   {
    return name;
  }

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (int new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  int getAge ()   {
    return age;
  }

  /**
   * Set the value of adderss
   * @param new_var the new value of adderss
   */
  void setAdderss (string new_var)   {
      adderss = new_var;
  }

  /**
   * Get the value of adderss
   * @return the value of adderss
   */
  string getAdderss ()   {
    return adderss;
  }
private:


  void initAttributes () ;

};

#endif // OWNER_H
