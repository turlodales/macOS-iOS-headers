//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSXDMessage;

@protocol AMSDeviceMessengerServiceInterface <NSObject>
- (void)sendMessage:(AMSXDMessage *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)getMessagesWithPurpose:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

