//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSDateInterval, NSString;

@protocol PGGraphIngestBusiness <NSObject>
@property(readonly, nonatomic) BOOL hasRoutineVisit;
@property(readonly, nonatomic) double routineVisitConfidence;
@property(readonly, nonatomic) NSDateInterval *dateInterval;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSArray *businessCategories;
@property(readonly, nonatomic) NSString *name;
@end

