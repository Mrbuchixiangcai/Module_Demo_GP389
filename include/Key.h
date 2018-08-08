#ifndef _KEY_H_
#define _KEY_H_

//宏定义macro definition//
#define	 K_D  		(1<<5) //按键这里没有被定义是因为按键是采集电压方式，在采集电压时有确定端口
#define	 K_U  		(2<<5) //短按
#define	 K_H  		(3<<5) //长按保持 hold
#define	 K_R  		(4<<5) //连击
#define	 K_L  		(5<<5) //长按
#define	 K_LU  		(6<<5) //超长按
#define	 KD(x)  	(x|K_D)
#define	 KU(x)  	(x|K_U)
#define	 KH(x)  	(x|K_H)
#define	 KR(x)  	(x|K_R)
#define	 KL(x)  	(x|K_L)
#define	 KLU(x)  	(x|K_LU)
#define  cKEY_CLICK     5   //单击时间常数
#define  cKEY_HOLD      50  //按住时间常数
#define  cKEY_RATE_VOL  20  //连击时间常数
#define  KeyVolAdd()    (P1&0x20)  //P1.5 0010_0000 音量加键
#define  FANONOFF()     (P4&0x08)  //P4.3 0000_1000 控制雾化开关
#define  OLP()          (P0&0x08)  //P0.3 OLP:OVERLOAD-PROTECTION,GP001检测水位的，GP003可不要

//类型定义byte definition//
enum{
    T_NC    ,
    T_POWER ,
    T_MUSIC , //SOUND键
    T_VOLINC, //volume increasing音量加
    T_VOLDEC, //volume decline音量减
    T_TIMER ,	
    T_LIGHT ,
    T_BT    ,
    T_DEFAULT,//同时按下音量+和音量减
	T_CLEAR ,
	T_TESTMODE,//同事按下“音量+”和“SOUND”键进入测试模式
};
extern uint8_t	gbKeyNone;
extern uint8_t  gbKeyPress;
extern uint8_t  KeyValue;
extern void  KeyScan(void);
extern void  KeyComMsg(void);

#endif





