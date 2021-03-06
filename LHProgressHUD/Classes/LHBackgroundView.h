//
//  LHBackgroundView.h
//  LHProgressHUD
//
//  Created by huangwenchen on 16/6/7.
//  Copyright © 2016年 Leo. All rights reserved.
//

#import <UIKit/UIKit.h>
 typedef NS_ENUM(NSInteger,LHBlurEffectStyle){
    LHBlurEffectStyleNone,
    LHBlurEffectStyleExtraLight,
    LHBlurEffectStyleLight,
    LHBlurEffectStyleDark
};
@interface LHBackgroundView : UIView

@property (assign,nonatomic)LHBlurEffectStyle  blurStyle;

@end
