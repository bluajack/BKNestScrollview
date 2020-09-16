//
//  BKNestTableView.m
//  BKNestScrollview
//
//  Created by Tinghui Yuan on 2018/1/7.
//  Copyright © 2018年 Tinghui Yuan. All rights reserved.
//

#import "BKNestTableView.h"

@implementation BKNestTableView

// 当点击到tablview时，恢复tableview的panGestureRecognizer手势
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event {
    UIView *view = [super hitTest:point withEvent:event];
    [self addGestureRecognizer:self.panGestureRecognizer];
    return view;
}

@end
