//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol UAPasteboardItemProviding <NSObject>
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSUUID *uuid;
- (void)getDataWithCompletionBlock:(void (^)(NSInputStream *, NSError *))arg1;
@end

