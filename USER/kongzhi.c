#include "kongzhi.h"

void kongzhi()
{
    u8 key;
    while(1)
    {
	//捕捉按键函数
	key=KEY_Scan(0);
	    
	//判断是否为开始键按下
	if(key == KEY1_PRES)
	{
	    //开始键按下， 状态之间的切换，GAME_STATE为状态值
	    switch (GAME_STATE)
	    {
		    case 1:  GAME_STATE = 2; break;
		    case 2:  GAME_STATE = 4; break;
		    case 4:  GAME_STATE = 8; break;
		    case 8:  GAME_STATE = 16; break;
		    case 16: GAME_STATE = 1; break;
	    }	   
	}
	else if(key == KEY0_PRES)
	{
	    switch (GAME_STATE)
	    {
		    //GAME_MODE为单双人模式
		    case 1:
		    {
			if(GAME_MODE == 1)
				GAME_MODE == 2;
			else if(GAME_MODE == 2)
				GAME_MODE == 1;
			else
				GAME_MODE == 1;
		    }
		    case 2: break;
		    case 4: break;
		    case 8: break;
		    

		   
	    }
	}
    }
}






