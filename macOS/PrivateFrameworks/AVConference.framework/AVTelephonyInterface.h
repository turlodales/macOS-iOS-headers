//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AVTelephonyInterface : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct __CTServerConnection *_connection;
}

- (void)notifyCTCurrentAudioPayload:(int)arg1 mode:(int)arg2 bitrate:(unsigned int)arg3;
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;
- (void)handleVocoderNotificationWithInfo:(id)arg1;
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;
@property id <AVTelephonyInterfaceDelegate> delegate;
- (void)unregisterForNotifications;
- (BOOL)registerForNotifications;
- (void)dealloc;
- (id)init;

@end

