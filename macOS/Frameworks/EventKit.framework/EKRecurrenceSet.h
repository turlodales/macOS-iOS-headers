//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EKRecurrenceSet : NSObject
{
    NSString *_recurrenceSetID;
    NSArray *_series;
}

+ (id)recurrenceSetForItem:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *series; // @synthesize series=_series;
@property(retain) NSString *recurrenceSetID; // @synthesize recurrenceSetID=_recurrenceSetID;
- (id)description;

@end

