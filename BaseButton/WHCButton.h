//
//  WHCButton.h
//  WHCAPP
//
//  Created by Haochen Wang on 11/30/16.
//  Copyright © 2016 WHC. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^tapHandler)(UIButton *sender);

@interface WHCButton : UIButton

@property (nonatomic, assign) int mark;

+(instancetype)buttonWithTitle:(NSString *)title image:(UIImage *)image handler:(tapHandler)handler;

@end
