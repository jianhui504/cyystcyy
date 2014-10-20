//
//  GameSuccess.cpp
//  GmaeProject
//
//  Created by user on 14-10-16.
//
//

#include "GameSuccess.h"
#include"EnterLayer.h"
CCScene *GameSuccess::scene()
{
    CCScene *scene=CCScene::create();
    GameSuccess *layer=GameSuccess::create();
    scene->addChild(layer);
    return scene;
}
bool GameSuccess::init()
{
    if(!CCLayer::init())
    {
        return false;
    }
    WINSIZE=CCDirector::sharedDirector()->getWinSize();
    //背景
    CCSprite* sp=CCSprite::create();
    sp->initWithFile("Success_xjh.png");
    sp->setScale(5);
    sp->setPosition(ccp(WINSIZE.width/2,WINSIZE.height/2));
    this->addChild(sp);
    //GameOver
    CCLabelTTF *LbOver=CCLabelTTF::create("Game Success", "Zapfino", 100);
    LbOver->setColor(ccc3(255, 0, 0));
    LbOver->setPosition(ccp(WINSIZE.width/2,WINSIZE.height/2+40));
    this->addChild(LbOver);
    //重来或退出
    CCMenuItemFont *item1 = CCMenuItemFont::create("下一关", this, menu_selector(GameSuccess::again));
    item1->setScale(1.5);
    item1->setPosition(ccp(WINSIZE.width/2+100,WINSIZE.height/2));
    item1->setColor(ccc3(0, 0, 255));
    
    CCMenuItemFont *item3 = CCMenuItemFont::create("返回菜单", this, menu_selector(GameSuccess::exitGame));
    item3->setColor(ccc3(0, 0, 255));
    item3->setPosition(ccp(WINSIZE.width/2+120,WINSIZE.height/2));
    item3->setScale(1.5);
    CCMenu *menu = CCMenu::create(item1,item3,NULL);
    menu->setPosition(ccp(480, 120));
    menu->alignItemsHorizontallyWithPadding(40);
    this->addChild(menu);
    return true;
}
void GameSuccess::again()
{
    CCDirector::sharedDirector()->replaceScene(EnterLayer::scene());
}
void GameSuccess::exitGame()
{
    CCDirector::sharedDirector()->replaceScene(EnterLayer::scene());
}