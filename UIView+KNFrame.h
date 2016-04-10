//
//  UIView+KNFrame.h
//  WordWheat
//
//  Created by ElCapitan on 16/2/24.
//  Copyright © 2016年 www.links123.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (KNFrame)

//通过这个分类可以快速访问frame的属性,和直接进行修改

//frame的x
@property (nonatomic, assign) CGFloat x;
//y
@property (nonatomic, assign) CGFloat y;
//宽
@property (nonatomic, assign) CGFloat width;
//高
@property (nonatomic, assign) CGFloat height;

//最大x
@property (readonly,nonatomic, assign) CGFloat maxX;
//最大的y
@property (readonly,nonatomic, assign) CGFloat maxY;

//中心x
@property (nonatomic,assign) CGFloat centerX;

//中心y
@property (nonatomic,assign) CGFloat centerY;
@end
