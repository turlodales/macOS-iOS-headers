//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INIntent.h"

#import "WFBooleanSettingIntent.h"

@class NSNumber;

@interface WFSetWiFiIntent : INIntent <WFBooleanSettingIntent>
{
}

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) Class settingsClientClass;

// Remaining properties
@property(nonatomic) long long operation; // @dynamic operation;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;

@end

