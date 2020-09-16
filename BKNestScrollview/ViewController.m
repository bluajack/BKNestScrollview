//
//  ViewController.m
//  BKNestScrollview
//
//  Created by Tinghui Yuan on 2018/1/5.
//  Copyright © 2018年 Tinghui Yuan. All rights reserved.
//

#import "ViewController.h"
#import "BKNestScrollview/BKNestScrollview.h"
#import <SDCycleScrollView.h>
#import "CustomController.h"

@interface ViewController ()<SDCycleScrollViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"FAKER";
    CustomController *vc = [CustomController new];
    [self addChildViewController:vc];
    self.automaticallyAdjustsScrollViewInsets = NO;
    
    BKNestScrollview *nestView = [BKNestScrollview nestScrollviewWithTitleArr:@[@"动态",@"文章",@"更多",@"测试"] SubVCArr:@[vc,[BKNestBaseController new],[BKNestBaseController new],[BKNestBaseController new]] Frame:CGRectMake(0, 64, self.view.frame.size.width, self.view.frame.size.height-64)];
//    nestView.sliderH = 5;
    nestView.headViewH = 300;
//    nestView.titleViewH = 100;
    nestView.sliderW = 30;
    
//    nestView.titleFont = [UIFont systemFontOfSize:18];
//    nestView.titleColorNormal = [UIColor yellowColor];
    nestView.titleColorSelected = [UIColor redColor];
//    nestView.sliderColor = [UIColor blackColor];
    [self.view addSubview:nestView];
    
    
    UIButton *button = [[UIButton alloc] initWithFrame:CGRectMake(20, 50, 50, 50)];
    [button setTitle:@"asdasd" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    button.backgroundColor = [UIColor orangeColor];
    [button addTarget:self action:@selector(tap) forControlEvents:UIControlEventTouchUpInside];
    
    [nestView.headView addSubview:button];
    
    
    SDCycleScrollView *headview = [SDCycleScrollView cycleScrollViewWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 300) delegate:self placeholderImage:nil];
    [nestView.headView addSubview:headview];
    headview.autoScrollTimeInterval = 5;
    headview.localizationImageNamesGroup = @[@"111",@"222",@"333"];
}


- (void)tap {
    NSLog(@"saasasa");
}

@end
