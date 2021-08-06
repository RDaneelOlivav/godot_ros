/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"
#include "godot_ros.h"

void register_godot_ros_types() {
    ClassDB::register_class<RosNode>();
}

void unregister_godot_ros_types() {
    // Nothing to do here in this example.
}
