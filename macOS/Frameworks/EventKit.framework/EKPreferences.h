//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalPreferences, NSArray;

@interface EKPreferences : NSObject
{
    CalPreferences *_preferences;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic) BOOL alertInviteeDeclines;
@property(nonatomic) BOOL showDeclinedEvents;
@property(retain, nonatomic) NSArray *selectedCalendarIdentifiers;
- (void)_setDeselectedCalendarSyncIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *deselectedCalendarSyncIdentifiers;
- (void)_setDeselectedCalendarSyncHashes:(id)arg1;
@property(readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
- (void)_setDeselectedCalendarIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *deselectedCalendarIdentifiers;
- (void)setDeselectedCalendars:(id)arg1;
@property(readonly) BOOL bypassSplashScreen;
@property(nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property(nonatomic) BOOL alwaysSetArrivedAndSettledForReminders;
@property(nonatomic) BOOL useShortReminderRefireInterval;
@property(nonatomic) BOOL useShortReminderSnoozeInterval;
@property(nonatomic) BOOL refiringReminderAlarmsEnabled;
@property(nonatomic) double travelEngineThrottlePeriod;
- (id)init;

@end

