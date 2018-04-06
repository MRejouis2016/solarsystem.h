class Solarsystem
{
  private:
    int num of planets;
    double radius;
  
  public:
    Solarsystem();
    Solarsystem(int);
    void setPlanets();
    void setRadius();
    int getPlanets() const;
    double getRadius() const;
    double getArea() const;
}
