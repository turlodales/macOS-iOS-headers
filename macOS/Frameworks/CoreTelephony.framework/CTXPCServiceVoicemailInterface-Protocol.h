//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext;

@protocol CTXPCServiceVoicemailInterface
- (void)setVisualVoicemailState:(CTXPCServiceSubscriptionContext *)arg1 subscribed:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)getVoicemailInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(BOOL, NSNumber *, NSString *, NSError *))arg2;
@end

