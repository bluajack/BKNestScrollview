//
//  SURefreshHeader.h
//  CircleProgressView
//
//  Created by 万众科技 on 16/7/5.
//  Copyright © 2016年 万众科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+SURefresh.h"
#import "BKNestBaseController.h"

@interface SURefreshHeader : UIView

UIKIT_EXTERN const CGFloat SURefreshHeaderHeight;
UIKIT_EXTERN const CGFloat SURefreshPointRadius;

@property (nonatomic, copy) void(^handle)(void);

#pragma mark - 停止动画
- (void)endRefreshing;

@property (nonatomic, strong) NSArray<BKNestBaseController *> *subVCArr;
@property (nonatomic, weak ) UIScrollView * scrollView; //  当前正在滑动的scrollview

@end
