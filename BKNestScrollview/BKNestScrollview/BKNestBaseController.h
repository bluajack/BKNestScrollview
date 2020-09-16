//
//  BKNestBaseController.h
//  BKNestScrollview
//
//  Created by Tinghui Yuan on 2018/1/5.
//  Copyright © 2018年 Tinghui Yuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BKNestTableView.h"

@interface BKNestBaseController : UIViewController

@property (nonatomic, strong, readonly) BKNestTableView *tableView;
@property (nonatomic, weak) UIScrollView *noUseScrollview;
@property (nonatomic, assign) BOOL isPushing;

// 下拉刷新处理事件
- (void)refreshHandle;
// 结束下拉刷新
- (void)endRefreshing;

@end
