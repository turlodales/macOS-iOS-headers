//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBModel;

@interface HMBLocalZoneReplicationItem : HMFObject
{
    HMBModel *_updatedValue;
    HMBModel *_previousValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMBModel *previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) HMBModel *updatedValue; // @synthesize updatedValue=_updatedValue;

@end

