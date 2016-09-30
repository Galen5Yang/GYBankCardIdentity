//
//  GYBankCardIdentity.h
//  PayView
//
//  Created by apple on 16/9/30.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GYBankCardIdentity : NSObject

@property (nonatomic, strong , readonly) NSString *bankName;

@property (nonatomic, strong , readonly) NSString *asname;/**<银行简称（招商）*/

@property (nonatomic, strong , readonly) NSString *bankcardName;/**<名称·卡种*/

@property (nonatomic, strong , readonly) NSString *cardtype;

@property (nonatomic, strong , readonly) NSString *cardno;

+(instancetype)createCardno:(NSString *)cardnumber;


@end
