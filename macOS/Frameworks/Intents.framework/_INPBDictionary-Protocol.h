//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBPair;

@protocol _INPBDictionary <NSObject>
+ (Class)pairType;
@property(readonly, nonatomic) unsigned long long pairsCount;
@property(copy, nonatomic) NSArray *pairs;
- (_INPBPair *)pairAtIndex:(unsigned long long)arg1;
- (void)addPair:(_INPBPair *)arg1;
- (void)clearPairs;
@end

