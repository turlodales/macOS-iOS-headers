//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INIntent.h"

#import "WFDecimalSettingIntent.h"

@class NSNumber;

@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>
{
}

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) Class settingsClientClass;

// Remaining properties
@property(copy, nonatomic) NSNumber *value; // @dynamic value;

@end

