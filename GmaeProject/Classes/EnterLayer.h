//
//  EnterLayer.h
//  GmaeProject
//
//  Created by Student on 14-10-16.
//
//

#ifndef __GmaeProject__EnterLayer__
#define __GmaeProject__EnterLayer__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;


class EnterLayer:public CCLayer
{
public:
    CCSize WINSIZE;
    static CCScene *scene();
    virtual bool init();
    CREATE_FUNC(EnterLayer);
    
    //加入图片
    void addImage();
    //背景图片的动作事件
    void runActionBg();
    //切换到下一个场景
    void EnterScene();
    
private:
    CCSprite *sp;
};

#endif /* defined(__GmaeProject__EnterLayer__) */
