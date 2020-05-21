//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAFuture, NSDictionary, NSString;

@protocol HMDDatabaseDelegate <NSObject>

@optional
- (void)database:(id <HMDDatabase>)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)database:(id <HMDDatabase>)arg1 didRemoveZoneWithName:(NSString *)arg2;
- (NAFuture *)database:(id <HMDDatabase>)arg1 willRemoveOwnedZoneWithName:(NSString *)arg2;
- (void)database:(id <HMDDatabase>)arg1 didCreateZoneWithName:(NSString *)arg2;
@end

