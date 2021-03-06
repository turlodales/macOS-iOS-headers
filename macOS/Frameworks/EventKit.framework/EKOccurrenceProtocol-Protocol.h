//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/OccurrenceModelProtocol-Protocol.h>

@class NSDate;
@protocol EKCalendarProtocol, EKProtocolParticipant;

@protocol EKOccurrenceProtocol <OccurrenceModelProtocol>
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly, retain, nonatomic) id <EKProtocolParticipant> organizer;
@property(readonly, nonatomic) BOOL isScheduled;
@property(readonly, nonatomic) BOOL hasAttendees;
@property(readonly, nonatomic) id <EKCalendarProtocol> container;
@property(readonly, nonatomic) BOOL allowsParticipantStatusModifications;
- (BOOL)isOrganizedBySomeoneElse;
- (BOOL)isCurrentUserInvitedAttendee;
- (BOOL)isCalendarOwnerInvitedAttendee;
@end

