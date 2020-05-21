//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SADomainCommand.h"

#import "CFLocalAceHandling.h"

@class NSString;

@interface CFBSBatteryStatusCommand : SADomainCommand <CFLocalAceHandling>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;
- (id)macBatteryStatus;
- (id)appleBluetoothDevicesBatteryStatuses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

