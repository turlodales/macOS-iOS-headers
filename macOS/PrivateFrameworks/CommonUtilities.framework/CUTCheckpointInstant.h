//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost
{
    NSDate *_date;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (id)description;
- (void)mergeWithCheckpoint:(id)arg1;
- (void)_touchDate;
- (id)initWithDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;

@end

