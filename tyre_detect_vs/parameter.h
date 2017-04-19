//-----------------------宏定义----------------------------
//---------------------------------------------------------
#define IrobotSetNo 216			//机器人样本个数  
#define BackgroundSetNo 105		//背景样本个数
#define HardBackgroundSetNo 96	//Hard背景样本个数

#define SHOWSET false			//是否显示训练样本
#define TRAIN true				//是否进行训练,true表示训练，false表示读取xml文件中的SVM模型
#define SAVESET false			//是否保存检测数据

///////////for GPU
//HOG描述子参数
#define WinSizeDetect Size(80,80)		//检测窗口尺寸
#define BlockSizeDetect Size(16,16)		//block尺寸
#define BlockStrideDetect Size(16,16)		//block步长
#define CellSizeDetect Size(8,8)		//cell尺寸
#define NbinsDetect 9					//直方图bin个数

//detectMultiScale部分参数
#define HitThreshold 0			//特征向量与超平面最小距离
#define WinStride Size(16,16)		//移动步长(必须是block步长的整数倍)
#define DetScale 1.1			//源图像图像每次缩小比例

#define TestVideo "../data/test_video/2401.avi"			//用于检测的测试视频
#define ResultVideo "../data/result/2401.avi"			//测试视频的检测结果
#define ResultVideoFile_1 "..\\data\\result\\2401\\"	//测试视频的分类框图文件夹1

#define IrobotSetFile "../data/positive_set/"					//机器人样本图片文件夹
#define BackgroundSetFile "../data/background_set/"			//背景样本图片文件夹
#define HardBackgroundSetFile "../data/hard_background_set/"	//Hard样本图片文件夹
#define SetName "0SetName.txt"								//样本图片的文件名列表txt
#define DetectSvmName "../data/result/SVM_HOG_Detect.xml"	//保存与读取的检测模型文件名称

#define TrainPerc 1		//训练比例
#define VaildPerc 0		//交叉验证比例
//#define TestPerc 0.2
#define IrobotTrainNo (int(IrobotSetNo * TrainPerc))//训练样本数量
#define BackgroundTrainNo (int(BackgroundSetNo * TrainPerc))
#define HardBackgroundTrainNo (int(HardBackgroundSetNo * TrainPerc))
#define AllTrainNo (IrobotTrainNo + BackgroundTrainNo + HardBackgroundTrainNo)
#define IrobotVaildNo (int(IrobotSetNo * VaildPerc))//交叉验证样本数量
#define BackgroundVaildNo (int(BackgroundSetNo * VaildPerc))
#define HardBackgroundVaildNo (int(HardBackgroundSetNo * VaildPerc))
#define AllVaildNo (IrobotVaildNo + BackgroundVaildNo + HardBackgroundVaildNo)
#define IrobotTestNo (IrobotSetNo - IrobotTrainNo - IrobotVaildNo)//测试样本数量
#define BackgroundTestNo (BackgroundSetNo - BackgroundTrainNo - BackgroundVaildNo)
#define HardBackgroundTestNo (HardBackgroundSetNo - HardBackgroundTrainNo - HardBackgroundVaildNo)
#define AllTestNo (IrobotSetNo + BackgroundSetNo + HardBackgroundSetNo)
