//
//  Gameover.cpp
//  GmaeProject
//
//  Created by user on 14-10-16.
//
//

#include "Gameover.h"
#include"EnterLayer.h"
CCScene *Gameover::scene()
{
    CCScene *scene=CCScene::create();
    Gameover *layer=Gameover::create();
    scene->addChild(layer);
    return scene;
}
bool Gameover::init()
{
    if(!CCLayer::init())
    {
        return false;
    }
    WINSIZE=CCDirector::sharedDirector()->getWinSize();
    //背景
    CCSprite* sp=CCSprite::create();
    sp->initWithFile("Gameover_xjh.png");
    sp->setScale(5);
    sp->setPosition(ccp(WINSIZE.width/2,WINSIZE.height/2));
    this->addChild(sp);
    
    //GameOver
    CCLabelTTF *LbOver=CCLabelTTF::create("Game over", "Zapfino", 100);
    LbOver->setColor(ccc3(0, 255, 0));
    LbOver->setPosition(ccp(WINSIZE.width/2,WINSIZE.height/2+150));
    this->addChild(LbOver);
    //重来或退出
    CCMenuItemFont *item1 = CCMenuItemFont::create("New Game", this, menu_selector(Gameover::again));
    item1->setScale(1.5);
    item1->setColor(ccc3(0, 0, 255));
    CCMenuItemFont *item3 = CCMenuItemFont::create("Exit Game", this, menu_selector(Gameover::exitGame));
    item3->setColor(ccc3(0, 0, 255));
    item3->setScale(1.5);
    CCMenu *menu = CCMenu::create(item1,item3,NULL);
    menu->setPosition(ccp(480, 120));
    menu->alignItemsHorizontallyWithPadding(20);
    this->addChild(menu);
    return true;
}
void Gameover::again()
{
    CCDirector::sharedDirector()->replaceScene(EnterLayer::scene());
}
void Gameover::exitGame()
{
    CCDirector::sharedDirector()->end();
}