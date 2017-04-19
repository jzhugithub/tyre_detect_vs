//-----------------------�궨��----------------------------
//---------------------------------------------------------
#define IrobotSetNo 216			//��������������  
#define BackgroundSetNo 105		//������������
#define HardBackgroundSetNo 96	//Hard������������

#define SHOWSET false			//�Ƿ���ʾѵ������
#define TRAIN true				//�Ƿ����ѵ��,true��ʾѵ����false��ʾ��ȡxml�ļ��е�SVMģ��
#define SAVESET false			//�Ƿ񱣴�������

///////////for GPU
//HOG�����Ӳ���
#define WinSizeDetect Size(80,80)		//��ⴰ�ڳߴ�
#define BlockSizeDetect Size(16,16)		//block�ߴ�
#define BlockStrideDetect Size(16,16)		//block����
#define CellSizeDetect Size(8,8)		//cell�ߴ�
#define NbinsDetect 9					//ֱ��ͼbin����

//detectMultiScale���ֲ���
#define HitThreshold 0			//���������볬ƽ����С����
#define WinStride Size(16,16)		//�ƶ�����(������block������������)
#define DetScale 1.1			//Դͼ��ͼ��ÿ����С����

#define TestVideo "../data/test_video/2401.avi"			//���ڼ��Ĳ�����Ƶ
#define ResultVideo "../data/result/2401.avi"			//������Ƶ�ļ����
#define ResultVideoFile_1 "..\\data\\result\\2401\\"	//������Ƶ�ķ����ͼ�ļ���1

#define IrobotSetFile "../data/positive_set/"					//����������ͼƬ�ļ���
#define BackgroundSetFile "../data/background_set/"			//��������ͼƬ�ļ���
#define HardBackgroundSetFile "../data/hard_background_set/"	//Hard����ͼƬ�ļ���
#define SetName "0SetName.txt"								//����ͼƬ���ļ����б�txt
#define DetectSvmName "../data/result/SVM_HOG_Detect.xml"	//�������ȡ�ļ��ģ���ļ�����

#define TrainPerc 1		//ѵ������
#define VaildPerc 0		//������֤����
//#define TestPerc 0.2
#define IrobotTrainNo (int(IrobotSetNo * TrainPerc))//ѵ����������
#define BackgroundTrainNo (int(BackgroundSetNo * TrainPerc))
#define HardBackgroundTrainNo (int(HardBackgroundSetNo * TrainPerc))
#define AllTrainNo (IrobotTrainNo + BackgroundTrainNo + HardBackgroundTrainNo)
#define IrobotVaildNo (int(IrobotSetNo * VaildPerc))//������֤��������
#define BackgroundVaildNo (int(BackgroundSetNo * VaildPerc))
#define HardBackgroundVaildNo (int(HardBackgroundSetNo * VaildPerc))
#define AllVaildNo (IrobotVaildNo + BackgroundVaildNo + HardBackgroundVaildNo)
#define IrobotTestNo (IrobotSetNo - IrobotTrainNo - IrobotVaildNo)//������������
#define BackgroundTestNo (BackgroundSetNo - BackgroundTrainNo - BackgroundVaildNo)
#define HardBackgroundTestNo (HardBackgroundSetNo - HardBackgroundTrainNo - HardBackgroundVaildNo)
#define AllTestNo (IrobotSetNo + BackgroundSetNo + HardBackgroundSetNo)
