//
//  BKNestScrollview.h
//  BKNestScrollview
//
//  Created by Tinghui Yuan on 2018/1/5.
//  Copyright © 2018年 Tinghui Yuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BKNestBaseController.h"

@interface BKNestScrollview : UIView

+ (instancetype)nestScrollviewWithTitleArr:(NSArray<NSString*> *)titleArr
                                  SubVCArr:(NSArray<BKNestBaseController *> *)subVCArr
                                  Frame:(CGRect)frame;

+ (instancetype)nestScrollviewWithTitleArr:(NSArray<NSString*> *)titleArr
                                  SubVCArr:(NSArray<BKNestBaseController *> *)subVCArr
                                     Frame:(CGRect)frame
                             CustomNavView:(UIView *)customNavView;

@property (nonatomic, strong, readonly) UIView *headView;

@property (nonatomic, assign) CGFloat headViewH;
@property (nonatomic, assign) CGFloat titleViewH;
@property (nonatomic, assign) CGFloat sliderW;
@property (nonatomic, assign) CGFloat sliderH;

@property (nonatomic, strong) UIColor *titleViewBgColor;
@property (nonatomic, strong) UIColor *titleViewButtonColor;
@property (nonatomic, assign) CGFloat titleViewButtonWidth;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) UIColor *titleColorNormal;
@property (nonatomic, strong) UIColor *titleColorSelected;
@property (nonatomic, strong) UIColor *sliderColor;
    
- (void)removeTwoLinesFromSuperView;

@property (nonatomic, assign, readonly) NSInteger currentIndex; // 当前显示的tablview

@end
