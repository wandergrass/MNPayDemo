//
//  DCPaymentView.h
//  DCPayAlertDemo
//
//  Created by dawnnnnn on 15/12/9.
//  Copyright © 2015年 dawnnnnn. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    /**
     *  密码正确
     */
    SecretStatusCorrect = 1,
    /**
     *  密码错误
     */
    SecretStatusError,
    /**
     *  密码错误到达三次
     */
    SecretStatusMaxError,
}SecretStatus;

@interface DCPaymentView : UIView

@property (nonatomic, copy) NSString *title, *detail ,*premiumRate,*payType,*payTypeImageName;
@property (nonatomic, assign) CGFloat amount;

@property (nonatomic,copy) void (^completeHandle)(NSString *inputPwd);

- (void)show;
@property (assign,nonatomic) BOOL isGetCash;
@property (nonatomic,assign) SecretStatus secretStatus;
@property (nonatomic,assign) CGFloat alertHeight;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com
