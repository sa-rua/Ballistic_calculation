#define GRAVITY 9.8// 定义重力加速度

//角度转弧度
const double dag_to_rad = (180 / M_PI);
//容许误差范围
const double error_rangeX = 0.1;
const double error_rangeY = 0.1;

//弹丸建模
const double dragCoefficient = 0.4303; // 球体的空气阻力系数（根据实际情况调整）
//https://bbs.robomaster.com/forum.php?mod=viewthread&tid=22597
const double airDensity = 1.225;     // kg/m^3
const double ballRadius = 0.02135;   // 高尔夫球半径，单位：米
const double ballArea = M_PI * ballRadius * ballRadius;
const double ballMass = 0.04593;     // 高尔夫球质量，单位：千克

//相机角度差
const double camera_angle_offset = 15;

// 结构体定义
typedef struct {
    double distance;            // 目标距离，单位：米
    double altitude_angle;      // 目标高度角，单位：度 
    double velocity;            // 速度，单位：米/秒
} BallisticParams;

double horizontal_distance; // 水平距离，单位：米
double vertical_distance;   // 垂直距离，单位：米

// 函数声明
double calculateTime(BallisticParams params, double angle);
double calculateDrag(double velocity);