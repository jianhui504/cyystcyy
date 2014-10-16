//
//  EnterLayer.cpp
//  GmaeProject
//
//  Created by Student on 14-10-16.
//
//

#include "EnterLayer.h"

#include "SimpleAudioEngine.h"
using namespace CocosDenshion;
CCScene *EnterLayer::scene()
{
    CCScene *scene=CCScene::create();
    EnterLayer *layer=EnterLayer::create();
    scene->addChild(layer);
    return scene;
}

bool EnterLayer::init()
{
    if(!CCLayer::init())
    {
        return false;
    }
    //获取屏幕的大小
   
    WINSIZE = CCDirector::sharedDirector()->getWinSize();
     addImage();
    CCParticleSnow *snow=CCParticleSnow::create();
    snow->setTextureWithRect(CCTextureCache::sharedTextureCache()->addImage("xuehua.png"), CCRectMake(0, 0, 100, 100));
    snow->setScale(10.0f);
    snow->setBlendAdditive(true);
    snow->setPosition(ccp(300,300));
    this->addChild(snow,1);
    snow->setAutoRemoveOnFinish(true);
    
    this->runActionBg();
    return true;
}

void EnterLayer::addImage()
{
    sp=CCSprite::create("yuzhou2.png");
    sp->setPosition(ccp(WINSIZE.width/2, WINSIZE.height/2));
    this->addChild(sp);
}

void EnterLayer::runActionBg()
{
    //CCFadeIn *fadeIn=CCFadeIn::create(5.0f);
    CCFadeOut *fadeOut=CCFadeOut::create(3.0f);
    CCCallFunc *func=CCCallFunc::create(this, callfunc_selector(EnterLayer::EnterScene));
        CCSequence *seq=CCSequence::create(fadeOut,func,NULL);
    sp->runAction(seq);
}
//进入下一个场景
void EnterLayer::EnterScene()
{
    
}
