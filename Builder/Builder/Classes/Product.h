//
//  Product.h
//  Builder
//
//  Created by Aalen on 16/7/11.
//  Copyright © 2016年 Aalen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject

- (void)addWithPart: (NSString *)part;
- (void)show;

@end
