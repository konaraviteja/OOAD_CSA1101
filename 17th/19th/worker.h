
#ifndef WORKER_H
#define WORKER_H

#include <string>

/**
  * class worker
  * 
  */

class worker
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  worker ();

  /**
   * Empty Destructor
   */
  virtual ~worker ();

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

  sring name;
  int age;
  char address;
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
  void setName (sring new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  sring getName ()   {
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
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (char new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  char getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // WORKER_H
