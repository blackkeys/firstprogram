//Class header file

enum major = {BIOLOGY, THEATRE, COMPUTERSCIENCE};
class Student
{
  public:
  Student();
  Student(char, char, major);
  ~Student();
  virtual void computeAver();
  
  
  protected:
  char* first, last;
  char firstname[20];
  char lastname[20];
  int current, max;
  major type;
  
  private:
  
};

class BioBabies : public Student
{
  public:
  BioBio();
  void computeAver();
  
  private:
  double labGrade, tests, final;
};

class DramaGeeks : public Student
{
  public:
  void computeAver();
  
  private:
  double scenes, midterm, final;
  
};

class CompNerds : public Student
{
  public: 
  void computeAver();
  
  private:
  double programs, tests, final;
  
};
