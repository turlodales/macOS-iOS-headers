//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface MRTransactionPacketAccumulator : NSObject
{
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (void).cxx_destruct;
- (id)mergePacket:(id)arg1;
- (id)init;

@end

