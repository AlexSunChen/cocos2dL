//
//  ImageFadeOut.h
//  Particle
//
//  Created by SunChen on 1/20/15.
//
//

#ifndef __Particle__ImageFadeOut__
#define __Particle__ImageFadeOut__

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class ImageFadeOut:public Node
{
protected:
    //裁剪模版过程：先设置一个模版（其实就是一个遮盖图层），然后生成裁剪节点（就是将模版放入剪切容器中ClippingNode(DrawNode)),最后将
    ClippingNode* _displayImage; //剪切容器
    DrawNode* _displayClipping;  //剪切模版
    
    Image* _image;
    
    //两个运动的点
    int _pointA;
    int _pointB;
    
public:
    ImageFadeOut();
    virtual ~ImageFadeOut();
    static ImageFadeOut* create(std::string image);
    bool initWithImage(std::string image);
    
    virtual void update(float d);
};

#endif /* defined(__Particle__ImageFadeOut__) */
