2018.08.06:内存占用缩小到了14.724k，模块化在进行
2018.08.09：屏蔽前，001和003上把program和alarm去掉，不用改协议了，program和alarm是389的
2018.08.24_14:00：整体写好之后调试，8月24号修改了按键操控voice部分，
		从：
		if(enable_SPApause)
		{
			enable_SPApause=0;
			spa_cmd=SPA_PALY;
			break;
		}
		改为：
		if(enable_SPApause)
		{
			enable_SPApause=0;
			spa_cmd=SPA_PALY;
			//break;
		}
		之所以屏蔽break是因为按键循环时影响从OFF到ZEN到OFF再到BROOK时不能进行。
2018.08.24_18:00：监测水位的IO口用输入内部上拉(3.3V)，在外部电路从0跳变到0.5V时，电平会在3.3V有一个下降脉冲30ms，够mcu检测
