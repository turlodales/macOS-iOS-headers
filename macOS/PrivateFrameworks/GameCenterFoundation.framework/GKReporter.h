//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKReporter : NSObject
{
    double _authenticateResponseTimestamp;
    double _inviteeUILaunchTimestamp;
    double _connectingDevicesTimestamp;
    double _programaticInviteTimestamp;
    double _appLaunchTimestamp;
    double _totalInviteReceivedTimestamp;
    double _messageInviteProcessingTimestamp;
}

+ (id)reporter;
@property(nonatomic) double messageInviteProcessingTimestamp; // @synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp;
@property(nonatomic) double totalInviteReceivedTimestamp; // @synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp;
@property(nonatomic) double appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) double programaticInviteTimestamp; // @synthesize programaticInviteTimestamp=_programaticInviteTimestamp;
@property(nonatomic) double connectingDevicesTimestamp; // @synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp;
@property(nonatomic) double inviteeUILaunchTimestamp; // @synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp;
@property(nonatomic) double authenticateResponseTimestamp; // @synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp;
- (void)reportDurationForEventType:(id)arg1 withStartTimestamp:(double)arg2;
- (void)reportTotalInviteReceivedDuration;
- (void)reportAppLaunchDuration;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)reportProgramaticInviteDuration;
- (void)recordProgramaticInviteTimestamp;
- (void)reportConnectingDevicesDuration;
- (void)recordConnectingDevicesTimestamp;
- (void)reportMessageInviteProcessingDuration;
- (void)recordMessageInviteProcessingTimestamp;
- (void)reportInviteeUILaunchDuration;
- (void)recordInviteeUILaunchTimestamp;
- (void)reportAuthenticateResponseDuration;
- (void)recordAuthenticateResponseTimestamp;
- (BOOL)isTimeSpanValid:(double)arg1;
- (void)reportEvent:(id)arg1 payload:(id)arg2;
- (void)reportDistributionValue:(id)arg1 domain:(id)arg2;
- (void)reportValue:(long long)arg1 domain:(id)arg2;
- (void)report:(id)arg1 signature:(id)arg2 result:(BOOL)arg3;
- (void)report:(id)arg1 signature:(id)arg2;
- (void)report:(id)arg1;
- (void)_nativeReportDistributionValue:(id)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)_nativeReportValue:(long long)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)_nativeReport:(id)arg1 signature:(id)arg2 result:(char *)arg3;

@end

