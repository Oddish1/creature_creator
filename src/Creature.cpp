class creature
{
private:
  std::string name; // generated unnamed unless creature can speak, then pulled from name database randomly.
  std::string surname; // surname follows societal standard (matriarchal, patriarchal, egalitarian)
  unsigned int color; // rgb color is encoded in int value.
  int age; // starts at 0 when created incremented as time goes on. TODO add maturation ages.
  float height; // max height of creature in meters.
  float lenght; // max length of creature in meters.
  float width; // max width of creature in meters.
  float weight; // weight of creature in kilograms (partially determined by other size parameters.)
  float strength; // max weight (in KG) the creature can manipulate (pick up, push, pull, etc.)
  float speed; // max speed in meters/second. normal 'walk' speed is * 0.5, stealth speed is * 0.25, run is * 0.75, full out sprint is * 1.0
  float health; // max health points
  float immuneStrength; // measure 0.0 -> 1.0 of resistance to disease/environmental hazards, the higher the more resistant.
  std::vector<std::string> defenseMechanisms; // a vector of defense mechanisms (claws, poison excretion, etc.)
  float endurance; // max time in seconds that the creature can perform its max strength for. Scales with lower effort actions as well (walking, running, stealth, etc.)
  float energyLevel; // measure of vitality or activeness, influences need for rest or how active a creature can be. Reduces when injured or via aging.
  std::vector<std::string> abilities; // a vector of abilities that the creature has (waterbreathing, airbreathing, flying, nightvision, etc.)
  float intelligence; // maximum intelligence difficulty level. applies to reading, speaking, learning new skills, etc.
  float stealth; // a measure of how stealthily the creature can move (0.0 -> 1.0). Is effected by size.
  float comouflageAbility; // a measure 0.0 - 1.0 of the creature's ability to camouflage itself with its environment.
  float adaptability; // a measure 0.0 -> 1.0 of the creature's ability to adapt to new situations or environments.
  float visionQuality; // measure of vision from 0.0 -> 1.0. Applies to all vision abilities as well.
  float visionRange; // maximum vision range in meters, applies to all vision abilities.
  float hearingQuality; // measure of hearing from 0.0 -> 1.0. Applies to all hearing abilities as well.
  float hearingRange; // max hearing range in meters, applies to all hearing abilities.
  float smellQuality; // measure of smell from 0.0 -> 1.0. Applies to all smell abilities as well.
  float smellRange; // max smell range in meters, applies to all smell abilities.
  std::vector<std::string> dominantTraits; // a vector of dominant traits (only one parent needs it to pass on to kid)
  std::vector<std::string> recessiveTraits; // a vector of recesseive traits (both parents need it to pass on to kid)
  std::vector<std::string> reproductiveTraits; // a vector of reproductive traits (methods, cycles, etc.)
  float temperament; // measure of temprament 0.0 -> 1.0. Higher is more aggressive.
  float socialBehavior; // measure of inclination for socialization from 0.0 -> 1.0; 0 prefers complete isolation.
  float diet; // 0 herbivore, 0.5 omnivore, 1.0 carnivore
  float minLifespan; // minimum for expected lifespan range
  float maxLifespan; // maximum for expected lifespan range
  std::vector<std::string> preferredHabitatType; // habitat types the creature preferrs to live in (forest, desert, aquatic, etc.)
  float minPreferredTemp; // minimum preferred temperature to live in (Celcius)
  float maxPreferredTemp; // maximum preferred temperature to live in (Celcius)
  float minPreferredHumidity; // min preferred humidity to live in ()
  float maxPreferredHumidity; // max preferred humidity to live in ()
  float preferredLight; // 0.0 -> 1.0 where 0 is complete dark. Defines if nocturnal, and is effected by traits like nightvision, etc.
  float preferredTerrain; // 0.0 -> 1.0 where 0 is flat. effected by preferredHabitatType. effects traits.
  float waterRequirements; // 0.0 -> 1.0 where 0 is no water. Determines how frequently creature requires water, effects traits and habitat.
  float minPreferredAltitude; // minimum preferred altitude in meters
  float maxPreferredAltitude; // max preferred altitude in meters
  std::vector<std::float> seasonalPreferences; // vector of floats -1.0 -> 1.0 that determines like (1.0) or dislike (-1.0) of season. Effects hibernation/migration patterns. 4 values, one for spring, summer, fall, winter.
  bool seasonalHibernation; // does the creature seasonally hibernate?
  bool seasonalMigration; // does the creature seasonally migrate?
  float mutationRate; // a measure 0.0 -> 1.0 of how likely a creature is to mutate from generation to generation.

public:
  //lots of getters and setters

  
}