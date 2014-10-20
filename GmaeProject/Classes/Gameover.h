//
//  Gameover.h
//  GmaeProject
//
//  Created by user on 14-10-16.
//
//

#ifndef __GmaeProject__Gameover__
#define __GmaeProject__Gameover__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class Gameover:public CCLayer
{
public:
    CCSize WINSIZE;
    static CCScene *scene();
    virtual bool init();
    CREATE_FUNC(Gameover);
    
    void again();
    void exitGame();
};
#endif /* defined(__GmaeProject__Gameover__) */
