//
//  PTCDVWebViewController.h
//
//  Created by lzy on 2017/3/26.
//  Copyright © 2017年 chemao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PTWebViewController : UIViewController
/**
特性：
* 加载web带有进度条（iOS8以上才行）
* 可自由控制导航条标题
* 可自由控制导航条的显隐
  */

/**
 *  初始化一个webView控制器
 *
 *  @param entryStr  内容地址
 *  @param aTitle    标题
 *  @param navHidden 导航条是否隐藏（一般网页不需要隐藏、本地自定义的需要隐藏）
 *
 *  @return PTCDVWebViewController对象
 */
- (instancetype)initWithEntry:(NSString *)entryStr andTitle:(NSString *)aTitle navHidden:(BOOL)navHidden;

/**
 *  初始化一个无导航title的webView控制器
 *
 *  @param entryStr  内容地址
 *  @param navHidden 导航条是否隐藏
 *
 *  @return PTCDVWebViewController对象
 */
- (instancetype)initWithEntry:(NSString *)entryStr navHidden:(BOOL)navHidden;

/**
 *  挖坑
 *  在某个控制器上面添加一个自定义大小的webView控制器
 *
 *  @param entryUrl       内容地址
 *  @param frame          frame
 *  @param viewController 父控制器
 */
+ (void)createWebContainerViewWithEntryUrl:(NSString *)entryUrl andFrame:(CGRect)frame addOnTarget:(UIViewController *)viewController;
@end
