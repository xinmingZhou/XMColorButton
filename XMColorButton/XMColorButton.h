//
//  XMColorButton.h
//  XMColorButton
//
//  Created by Zhouxm on 2017/7/12.
//  Copyright © 2017年 Zhouxm. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, BTNGradientType) {
    topToBottom = 0,//从上到小
    leftToRight = 1,//从左到右
    upleftTolowRight = 2,//左上到右下
    uprightTolowLeft = 3,//右上到左下
};

@interface XMColorButton : UIButton

- (id)initWithFrame:(CGRect)frame FromColorArray:(NSMutableArray*)colorArray ByGradientType:(BTNGradientType)gradientType cornerRadiu:(CGFloat)radiu;


@end
