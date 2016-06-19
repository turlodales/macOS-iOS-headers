//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalPreferences;

@interface EKCalendarPreferences : NSObject
{
    CalPreferences *_preferences;
    CalPreferences *_calPreferences;
}

+ (id)calendarPreferences;
@property(retain) CalPreferences *calPreferences; // @synthesize calPreferences=_calPreferences;
- (void).cxx_destruct;
- (void)_updateDisplayOrderForSources:(id)arg1 key:(id)arg2;
- (unsigned long long)_displayOrderForSourceWithIdentifier:(id)arg1 key:(id)arg2;
- (void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)arg1;
- (unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)arg1;
- (void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)arg1;
- (unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)arg1;
- (id)_keyForDelegateID:(id)arg1;
- (BOOL)_checkedStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 withKey:(id)arg3;
- (id)_disabledOrCollapsedItemsForDelegateID:(id)arg1 withKey:(id)arg2;
- (void)_updateStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 state:(BOOL)arg3 withKey:(id)arg4 withNotification:(id)arg5;
- (BOOL)expandedStateForTopLevelNodeWithUID:(id)arg1;
- (void)updateExpandedStateForTopLevelNodeWithUID:(id)arg1 state:(BOOL)arg2;
- (id)disabledCalendarsForMainWindow;
- (id)disabledCalendarsForDelegateWithUID:(id)arg1;
- (BOOL)checkedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2;
- (void)updateCheckedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2 state:(BOOL)arg3;
@property BOOL timeToLeaveEnabled;
@property BOOL invitationNotificationsDisabled;
@property BOOL sharedCalendarNotificationsDisabled;
- (id)init;

@end

