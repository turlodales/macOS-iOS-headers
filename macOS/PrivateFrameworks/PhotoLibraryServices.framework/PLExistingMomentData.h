//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDateInterval, NSObject<NSCopying>;

@interface PLExistingMomentData : NSObject
{
    NSObject<NSCopying> *_objectID;
    unsigned long long _numberOfAssets;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateInterval *_dateInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=_objectID;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)registerAsset:(id)arg1;
- (id)initWithMoment:(id)arg1;

@end

