
#ifndef FEE_H
#define FEE_H

#include <string>

/**
  * class fee
  * 
  */

class fee
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  fee ();

  /**
   * Empty Destructor
   */
  virtual ~fee ();

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

  int month;
  int hourse;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of hourse
   * @param new_var the new value of hourse
   */
  void setHourse (int new_var)   {
      hourse = new_var;
  }

  /**
   * Get the value of hourse
   * @return the value of hourse
   */
  int getHourse ()   {
    return hourse;
  }
private:


  void initAttributes () ;

};

#endif // FEE_H
