//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SRDaemonNotification : NSObject
{
    int _registrationToken;
    int _significantTimeChangeToken;
    id <SRDaemonNotificationDelegate> _delegate;
    NSString *_sensorIdentifier;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sensorIdentifier; // @synthesize sensorIdentifier=_sensorIdentifier;
@property(nonatomic) __weak id <SRDaemonNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unregisterForDaemonNotification;
- (void)registerForDaemonNotification;
- (void)dealloc;
- (id)initWithSensor:(id)arg1;

@end

