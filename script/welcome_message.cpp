#include <gazebo/gazebo.hh>

namespace gazebo
  
{
  class WorldPluginKevinRobot : public WorldPlugin
  {
    public: WorldPluginKevinRobot() : WorldPlugin()
    {
      printf("welcome to kevin's seattle condo world...\n");
    }
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginKevinRobot)
}
