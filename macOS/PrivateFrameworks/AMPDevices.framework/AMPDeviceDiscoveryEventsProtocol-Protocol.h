//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AMPDevice, NSString;

@protocol AMPDeviceDiscoveryEventsProtocol
- (void)discoveryServiceWillTerminate;
- (void)completedOperationForDeviceWithIdentifier:(NSString *)arg1;
- (void)startedOperationForDeviceWithIdentifier:(NSString *)arg1 allowCancel:(BOOL)arg2;
- (void)nameChangedTo:(NSString *)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)deviceChanged:(AMPDevice *)arg1;
- (void)deviceDisconnected:(AMPDevice *)arg1;
- (void)deviceConnected:(AMPDevice *)arg1;
@end

