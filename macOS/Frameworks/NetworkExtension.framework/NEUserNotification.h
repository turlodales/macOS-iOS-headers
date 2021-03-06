//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NEUserNotification : NSObject
{
    BOOL _isBanner;
    id _notification;
    id _notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _callback;
}

+ (void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)shouldPromptForLocalAuthentication;
+ (id)createLAContext;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) id notificationSource; // @synthesize notificationSource=_notificationSource;
@property(retain) id notification; // @synthesize notification=_notification;
@property BOOL isBanner; // @synthesize isBanner=_isBanner;
- (id)initObsoleteAlertWithAppName:(id)arg1;
- (id)initAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3;
- (void)cancel;
- (BOOL)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;
- (void)executeOnMainLoop:(CDUnknownBlockType)arg1;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4;

@end

