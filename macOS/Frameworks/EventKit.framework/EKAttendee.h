//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant
{
}

+ (Class)frozenClass;
+ (id)_allowableChangeKeys;
+ (id)attendeeWithParticipant:(id)arg1;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (BOOL)_hasOnlyAllowableChanges;
- (BOOL)_hasAllowableChanges;
@property(readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
- (id)displayString;

// Remaining properties
@property(nonatomic) long long participantRole;
@property(nonatomic) long long participantStatus;
@property(nonatomic) long long participantType;

@end

