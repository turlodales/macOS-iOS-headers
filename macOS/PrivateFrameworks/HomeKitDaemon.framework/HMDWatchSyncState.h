//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDPairedSync, HMDWatchSync, NSMutableArray, NSString;

@interface HMDWatchSyncState : HMFObject
{
    NSMutableArray *_syncs;
    NSString *_deviceId;
    HMDPairedSync *_pairedSync;
}

+ (id)resultAsString:(unsigned long long)arg1;
+ (id)optionAsString:(unsigned long long)arg1;
+ (BOOL)isNewBetter:(unsigned long long)arg1 present:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDPairedSync *pairedSync; // @synthesize pairedSync=_pairedSync;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)description;
- (void)dealloc;
- (BOOL)removeSync;
- (void)addNewSync:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) HMDWatchSync *currentSync;
- (id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2;

@end

