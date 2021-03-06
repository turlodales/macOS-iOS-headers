//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKOccurrenceProtocol-Protocol.h>
#import <EventKit/EventOccurrenceModelProtocol-Protocol.h>

@class NSDate;

@protocol EKEventOccurrenceProtocol <EKOccurrenceProtocol, EventOccurrenceModelProtocol>
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSDate *proposedEndDate;
@property(readonly, nonatomic) NSDate *proposedStartDate;
@property(readonly, nonatomic) long long availability;
@property(readonly, nonatomic) BOOL allowsAvailabilityModifications;
@end

