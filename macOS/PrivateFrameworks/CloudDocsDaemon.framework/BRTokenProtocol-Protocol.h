//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRFileCoordinationProvider-Protocol.h>

@class NSArray, NSString;

@protocol BRTokenProtocol <BRFileCoordinationProvider>
- (void)getPrimaryiCloudAccountStatus:(void (^)(NSDictionary *, NSError *))arg1;
- (void)currentAccountCopyTokenWithBundleID:(NSString *)arg1 version:(NSString *)arg2 reply:(void (^)(NSData *, NSError *))arg3;
- (oneway void)checkinUbiquityContainers:(NSArray *)arg1 forBundleID:(NSString *)arg2;
@end

