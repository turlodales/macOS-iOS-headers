//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolOccurrence.h"

@class NSData, NSDate, NSNumber, NSURL;

@protocol EKProtocolReminderOccurrence <EKProtocolOccurrence>
@property(readonly, nonatomic) BOOL cachedHasLocationAlarm;
@property(readonly, copy, nonatomic) NSData *appLink;
@property(readonly, copy, nonatomic) NSURL *action;
@property(readonly, nonatomic) BOOL canEditRecurrence;
@property(readonly, nonatomic) BOOL statusCompleteNotByDate;
@property(readonly, copy, nonatomic) NSNumber *orderNumber;
@property(readonly, copy, nonatomic) NSDate *completionDate;
@property(readonly, copy, nonatomic) NSDate *dueDateUnadjustedFromUTC;
@end

