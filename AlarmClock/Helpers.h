//
//  Helpers.h
//  AlarmClock
//
//  Created by Harris Osserman on 6/4/15.
//  Copyright (c) 2015 Harris Osserman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface Helpers : NSObject
+ (void)saveUserWithPhoneNumber:(NSString *)phoneNumber andUserID:(NSString *)userID;
+ (NSInteger)convertToMilitaryTime:(PFObject *)parseObject;
@end
