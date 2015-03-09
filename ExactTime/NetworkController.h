//
//  NetworkController.h
//  ExactTime
//
//  Created by Ross McIlwaine on 3/3/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetworkController : NSObject


- (void)getExactTimerInfo:(void (^)(NSDictionary *exactTimeInfo, NSError *error))completion;

@end
