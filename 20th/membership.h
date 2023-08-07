
#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H

#include <string>

/**
  * class membership
  * 
  */

class membership
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  membership ();

  /**
   * Empty Destructor
   */
  virtual ~membership ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return int
   */
  int payment ()
  {
  }


  /**
   */
  void transection_id ()
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

  int date;
  int month;
  int year;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (int new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  int getDate ()   {
    return date;
  }

  /**
   * Set the value of month
   * @param new_var the new value of month
   */
  void setMonth (int new_var)   {
      month = new_var;
  }

  /**
   * Get the value of month
   * @return the value of month
   */
  int getMonth ()   {
    return month;
  }

  /**
   * Set the value of year
   * @param new_var the new value of year
   */
  void setYear (int new_var)   {
      year = new_var;
  }

  /**
   * Get the value of year
   * @return the value of year
   */
  int getYear ()   {
    return year;
  }
private:


  void initAttributes () ;

};

#endif // MEMBERSHIP_H
