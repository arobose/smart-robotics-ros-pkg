#include <ros/ros.h>
#include <sensor_msgs/PointCloud.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "point_cloud_eurobot_obstacles");

  ros::NodeHandle n;
  ros::Publisher cloud_pub = n.advertise<sensor_msgs::PointCloud>("cloud", 50);

  unsigned int num_points = 62;

  int count = 0;
  ros::Rate r(7.0);
  while(n.ok()){
    sensor_msgs::PointCloud cloud;
    cloud.header.stamp = ros::Time::now();
    cloud.header.frame_id = "/map";

    cloud.set_points_size(num_points);

    //we'll also add an intensity channel to the cloud
    cloud.set_channels_size(1);
    cloud.channels[0].name = "intensities";
    cloud.channels[0].set_values_size(num_points);

    //generate some fake data for our point cloud

    // Tree
      cloud.points[0].x = 0;
      cloud.points[0].y = 1.000 - 0.020;
      cloud.points[0].z = 0;
      cloud.channels[0].values[0] = 199;

      cloud.points[1].x = 0.020;
      cloud.points[1].y = 1.000;
      cloud.points[1].z = 0;
      cloud.channels[0].values[1] = 199;

      cloud.points[2].x = -0.020;
      cloud.points[2].y = 1.000;
      cloud.points[2].z = 0;
      cloud.channels[0].values[2] = 199;

      cloud.points[3].x = 0;
      cloud.points[3].y = 1.000 + 0.020;
      cloud.points[3].z = 0;
      cloud.channels[0].values[3] = 199;

    // Totem
      cloud.points[4].x = 0.400 + 0.13;
      cloud.points[4].y = 1.000 - 0.13;
      cloud.points[4].z = 0;
      cloud.channels[0].values[4] = 199;

      cloud.points[5].x = 0.400 + 0.13;
      cloud.points[5].y = 1.000;
      cloud.points[5].z = 0;
      cloud.channels[0].values[5] = 199;

      cloud.points[6].x = 0.400 + 0.13;
      cloud.points[6].y = 1.000 + 0.13;
      cloud.points[6].z = 0;
      cloud.channels[0].values[6] = 199;

      cloud.points[7].x = 0.400;
      cloud.points[7].y = 1.000 + 0.13;
      cloud.points[7].z = 0;
      cloud.channels[0].values[7] = 199;

      cloud.points[8].x = 0.400 - 0.13;
      cloud.points[8].y = 1.000 + 0.13;
      cloud.points[8].z = 0;
      cloud.channels[0].values[8] = 199;

      cloud.points[9].x = 0.400 - 0.13;
      cloud.points[9].y = 1.000;
      cloud.points[9].z = 0;
      cloud.channels[0].values[9] = 199;

      cloud.points[10].x = 0.400 - 0.13;
      cloud.points[10].y = 1.000 - 0.13;
      cloud.points[10].z = 0;
      cloud.channels[0].values[10] = 199;

      cloud.points[11].x = 0.400;
      cloud.points[11].y = 1.000 - 0.13;
      cloud.points[11].z = 0;
      cloud.channels[0].values[11] = 199;

    // Totem
      cloud.points[12].x = -0.400 + 0.13;
      cloud.points[12].y = 1.000 - 0.13;
      cloud.points[12].z = 0;
      cloud.channels[0].values[12] = 199;

      cloud.points[13].x = -0.400 + 0.13;
      cloud.points[13].y = 1.000;
      cloud.points[13].z = 0;
      cloud.channels[0].values[13] = 199;

      cloud.points[14].x = -0.400 + 0.13;
      cloud.points[14].y = 1.000 + 0.13;
      cloud.points[14].z = 0;
      cloud.channels[0].values[14] = 199;

      cloud.points[15].x = -0.400;
      cloud.points[15].y = 1.000 + 0.13;
      cloud.points[15].z = 0;
      cloud.channels[0].values[15] = 199;

      cloud.points[16].x = -0.400 - 0.13;
      cloud.points[16].y = 1.000 + 0.13;
      cloud.points[16].z = 0;
      cloud.channels[0].values[16] = 199;

      cloud.points[17].x = -0.400 - 0.13;
      cloud.points[17].y = 1.000;
      cloud.points[17].z = 0;
      cloud.channels[0].values[17] = 199;

      cloud.points[18].x = -0.400 - 0.13;
      cloud.points[18].y = 1.000 - 0.13;
      cloud.points[18].z = 0;
      cloud.channels[0].values[18] = 199;

      cloud.points[19].x = -0.400;
      cloud.points[19].y = 1.000 - 0.13;
      cloud.points[19].z = 0;
      cloud.channels[0].values[19] = 199;

    // Starting zone
      cloud.points[20].x = 1.100;
      cloud.points[20].y = 0.509;
      cloud.points[20].z = 0;
      cloud.channels[0].values[20] = 199;

      cloud.points[21].x = 1.100 + 0.100;
      cloud.points[21].y = 0.509;
      cloud.points[21].z = 0;
      cloud.channels[0].values[21] = 199;

      cloud.points[22].x = 1.100 + 0.200;
      cloud.points[22].y = 0.509;
      cloud.points[22].z = 0;
      cloud.channels[0].values[22] = 199;

      cloud.points[23].x = 1.100 + 0.300;
      cloud.points[23].y = 0.509;
      cloud.points[23].z = 0;
      cloud.channels[0].values[23] = 199;

    // Starting zone
      cloud.points[24].x = -1.100;
      cloud.points[24].y = 0.509;
      cloud.points[24].z = 0;
      cloud.channels[0].values[24] = 199;

      cloud.points[25].x = -1.100 - 0.100;
      cloud.points[25].y = 0.509;
      cloud.points[25].z = 0;
      cloud.channels[0].values[25] = 199;

      cloud.points[26].x = -1.100 - 0.200;
      cloud.points[26].y = 0.509;
      cloud.points[26].z = 0;
      cloud.channels[0].values[26] = 199;

      cloud.points[27].x = -1.100 - 0.300;
      cloud.points[27].y = 0.509;
      cloud.points[27].z = 0;
      cloud.channels[0].values[27] = 199;

    // ship's hold
      cloud.points[28].x = 1.175;
      cloud.points[28].y = 2.000;
      cloud.points[28].z = 0;
      cloud.channels[0].values[28] = 199;

      cloud.points[29].x = 1.175 - 0.005;
      cloud.points[29].y = 2.000 - 0.200;
      cloud.points[29].z = 0;
      cloud.channels[0].values[29] = 199;

      cloud.points[30].x = 1.175 - 0.010;
      cloud.points[30].y = 2.000 - 0.400;
      cloud.points[30].z = 0;
      cloud.channels[0].values[30] = 199;

      cloud.points[31].x = 1.175 - 0.012;
      cloud.points[31].y = 2.000 - 0.575;
      cloud.points[31].z = 0;
      cloud.channels[0].values[31] = 199;

      cloud.points[32].x = 1.175 - 0.015;
      cloud.points[32].y = 2.000 - 0.750;
      cloud.points[32].z = 0;
      cloud.channels[0].values[32] = 199;

    // ship's hold
      cloud.points[33].x = -1.175;
      cloud.points[33].y = 2.000;
      cloud.points[33].z = 0;
      cloud.channels[0].values[33] = 199;

      cloud.points[34].x = -1.175 + 0.005;
      cloud.points[34].y = 2.000 - 0.200;
      cloud.points[34].z = 0;
      cloud.channels[0].values[34] = 199;

      cloud.points[35].x = -1.175 + 0.010;
      cloud.points[35].y = 2.000 - 0.400;
      cloud.points[35].z = 0;
      cloud.channels[0].values[35] = 199;

      cloud.points[36].x = -1.175 + 0.012;
      cloud.points[36].y = 2.000 - 0.575;
      cloud.points[36].z = 0;
      cloud.channels[0].values[36] = 199;

      cloud.points[37].x = -1.175 + 0.015;
      cloud.points[37].y = 2.000 - 0.750;
      cloud.points[37].z = 0;
      cloud.channels[0].values[37] = 199;

    // borders
      cloud.points[38].x = 0.25;
      cloud.points[38].y = 0.0;
      cloud.points[38].z = 0.0;
      cloud.channels[0].values[38] = 199;

      cloud.points[39].x = 0.5;
      cloud.points[39].y = 0.0;
      cloud.points[39].z = 0.0;
      cloud.channels[0].values[39] = 199;

      cloud.points[40].x = 0.75;
      cloud.points[40].y = 0.0;
      cloud.points[40].z = 0.0;
      cloud.channels[0].values[40] = 199;

      cloud.points[41].x = 1.0;
      cloud.points[41].y = 0.0;
      cloud.points[41].z = 0.0;
      cloud.channels[0].values[41] = 199;

      cloud.points[42].x = 1.25;
      cloud.points[42].y = 0.0;
      cloud.points[42].z = 0.0;
      cloud.channels[0].values[42] = 199;

      cloud.points[43].x = 1.5;
      cloud.points[43].y = 0.0;
      cloud.points[43].z = 0.0;
      cloud.channels[0].values[43] = 199;


      cloud.points[44].x = 0.25;
      cloud.points[44].y = 2.0;
      cloud.points[44].z = 0.0;
      cloud.channels[0].values[44] = 199;

      cloud.points[45].x = 0.5;
      cloud.points[45].y = 2.0;
      cloud.points[45].z = 0.0;
      cloud.channels[0].values[45] = 199;

      cloud.points[46].x = 0.75;
      cloud.points[46].y = 2.0;
      cloud.points[46].z = 0.0;
      cloud.channels[0].values[46] = 199;

      cloud.points[47].x = 1.0;
      cloud.points[47].y = 2.0;
      cloud.points[47].z = 0.0;
      cloud.channels[0].values[47] = 199;

      cloud.points[48].x = 1.25;
      cloud.points[48].y = 2.0;
      cloud.points[48].z = 0.0;
      cloud.channels[0].values[48] = 199;

      cloud.points[49].x = 1.5;
      cloud.points[49].y = 2.0;
      cloud.points[49].z = 0.0;
      cloud.channels[0].values[49] = 199;


      cloud.points[50].x = -0.25;
      cloud.points[50].y = 0.0;
      cloud.points[50].z = 0.0;
      cloud.channels[0].values[50] = 199;

      cloud.points[51].x = -0.5;
      cloud.points[51].y = 0.0;
      cloud.points[51].z = 0.0;
      cloud.channels[0].values[51] = 199;

      cloud.points[52].x = -0.75;
      cloud.points[52].y = 0.0;
      cloud.points[52].z = 0.0;
      cloud.channels[0].values[52] = 199;

      cloud.points[53].x = -1.0;
      cloud.points[53].y = 0.0;
      cloud.points[53].z = 0.0;
      cloud.channels[0].values[53] = 199;

      cloud.points[54].x = -1.25;
      cloud.points[54].y = 0.0;
      cloud.points[54].z = 0.0;
      cloud.channels[0].values[54] = 199;

      cloud.points[55].x = -1.5;
      cloud.points[55].y = 0.0;
      cloud.points[55].z = 0.0;
      cloud.channels[0].values[55] = 199;


      cloud.points[56].x = -0.25;
      cloud.points[56].y = 2.0;
      cloud.points[56].z = 0.0;
      cloud.channels[0].values[56] = 199;

      cloud.points[57].x = -0.5;
      cloud.points[57].y = 2.0;
      cloud.points[57].z = 0.0;
      cloud.channels[0].values[57] = 199;

      cloud.points[58].x = -0.75;
      cloud.points[58].y = 2.0;
      cloud.points[58].z = 0.0;
      cloud.channels[0].values[58] = 199;

      cloud.points[59].x = -1.0;
      cloud.points[59].y = 2.0;
      cloud.points[59].z = 0.0;
      cloud.channels[0].values[59] = 199;

      cloud.points[60].x = -1.25;
      cloud.points[60].y = 2.0;
      cloud.points[60].z = 0.0;
      cloud.channels[0].values[60] = 199;

      cloud.points[61].x = -1.5;
      cloud.points[61].y = 2.0;
      cloud.points[61].z = 0.0;
      cloud.channels[0].values[61] = 199;










/*
    for(unsigned int i = 0; i < num_points; ++i){
      cloud.points[i].x = 1 + count;
      cloud.points[i].y = 2 + count;
      cloud.points[i].z = 3 + count;
      cloud.channels[0].values[i] = 100 + count;
    }
*/
    cloud_pub.publish(cloud);
    ++count;
    r.sleep();
  }
}

