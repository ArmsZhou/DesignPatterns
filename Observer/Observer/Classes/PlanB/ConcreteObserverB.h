//
//  ConcreteObserverB.h
//  Observer
//
//  Created by Aalen on 16/7/12.
//  Copyright © 2016年 Aalen. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SubjectProtocol.h"

@interface ConcreteObserverB : NSObject

- (instancetype)initWithName: (NSString *)name subject: (id<SubjectProtocol>)subject;
- (void)fuckB;

@end
