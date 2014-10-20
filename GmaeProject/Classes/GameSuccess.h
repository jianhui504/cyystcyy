//
//  GameSuccess.h
//  GmaeProject
//
//  Created by user on 14-10-16.
//
//

#ifndef __GmaeProject__GameSuccess__
#define __GmaeProject__GameSuccess__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class GameSuccess:public CCLayer
{
public:
    CCSize WINSIZE;
    static CCScene *scene();
    virtual bool init();
    CREATE_FUNC(GameSuccess);
    
    void again();
    void exitGame();
};
#endif /* defined(__GmaeProject__GameSuccess__) */
