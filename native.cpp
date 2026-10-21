#include <iostream>

#include "World.h"

// This is the main function for the NATIVE version of this project.

int main(int argc, char *argv[]) {
  emp::Random random(2);
  OrgWorld world(random);

  Organism* new_org = new Organism(&world, 0);
  world.Inject(*new_org);
  world.Resize(100,100);

  for(int update=0; update<1000; update++){
    world.Update();
  }
}
