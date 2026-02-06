sudo apt update
cd ~/humble_ws/src/VNAV_23/vnav_ws/src/Lab3/tesse-interface
pip install -r requirements.txt  # Dependencies
pip install .

sudo apt install ros-humble-tf-transformations
pip3 install "numpy<1.25"
pip install -U transforms3d
pip install rospy2
sudo apt install ros-humble-ackermann-msgs
sudo apt install ros-humble-rviz-imu-plugin

cd ~/humble_ws/src/VNAV_23/vnav_ws/src && git clone https://github.com/ethz-asl/mav_comm.git -b ros2
