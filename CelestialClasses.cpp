class CelestialBodies{
  public:
  double mass;
  double radius;
  double density{
   double pi = 3.1415;
   return 3*m/(4*pi*r*r*r); 
  }
  string galaxy;
  string name;
  double distanceFromEarth;
  double spinAngularVelocity;
  double age;
}

class Planet : public CelestialBodies{
  double orbitalRadius;
  int nMoons;
  float percentWaterOnSurface;
  string habitableOrNot;
}

class Star : public CelestialBodies{
  float surfaceTemp;
  double luminosity;
  double apparentMagnitude;
}
