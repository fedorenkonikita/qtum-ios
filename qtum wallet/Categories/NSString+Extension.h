//
//  NSString+Extension.h
//  qtum wallet
//
//  Created by Никита Федоренко on 23.02.17.
//  Copyright © 2017 Designsters. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)

+ (NSString *)valueForKey:(NSString *)key fromQueryItems:(NSArray *)queryItems;

@end