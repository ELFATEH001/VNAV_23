import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/aimane/humble_ws/src/VNAV_23/vnav_ws/install/tesse_ros_bridge'
