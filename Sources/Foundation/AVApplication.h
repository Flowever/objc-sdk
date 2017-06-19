//
//  AVApplication.h
//  AVOSCloud
//
//  Created by Tang Tianyong on 18/06/2017.
//  Copyright © 2017 LeanCloud Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AVApplication : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly, copy) NSString *key;

- (instancetype)initWithID:(NSString *)ID key:(NSString *)key;

@end
