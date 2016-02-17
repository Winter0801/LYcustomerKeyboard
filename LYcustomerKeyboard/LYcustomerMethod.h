//
//  LYcustomerMethod.h
//  LYcustomerKeyboard
//
//  Created by 维艾徳科技 on 16/2/17.
//  Copyright © 2016年 vidmt. All rights reserved.
//


#import <Foundation/Foundation.h>
@class DialViewController;
@protocol RoyaDialViewDelegate <NSObject>
@optional
-(void)onDialView:(DialViewController*) view makePhoneCall:(NSString *) phoneNum;
-(void)onDialView:(DialViewController*) view dialNumber:(NSString *)phoneNum withKey:(NSInteger)key;
@end