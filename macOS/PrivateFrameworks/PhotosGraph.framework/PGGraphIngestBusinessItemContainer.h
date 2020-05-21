//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGGraphIngestBusiness.h"

@class CLSBusinessItem, CLSLocationOfInterestVisit, NSArray, NSDateInterval, NSString;

@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness>
{
    CLSBusinessItem *_businessItem;
    CLSLocationOfInterestVisit *_visit;
    NSDateInterval *_dateInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CLSLocationOfInterestVisit *visit; // @synthesize visit=_visit;
@property(readonly, nonatomic) CLSBusinessItem *businessItem; // @synthesize businessItem=_businessItem;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, nonatomic) double routineVisitConfidence;
@property(readonly, nonatomic) BOOL hasRoutineVisit;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSArray *businessCategories;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSString *name;
- (void)updateBusinessItem:(id)arg1;
- (id)initWithBusinessItem:(id)arg1 dateInterval:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2 dateInterval:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

