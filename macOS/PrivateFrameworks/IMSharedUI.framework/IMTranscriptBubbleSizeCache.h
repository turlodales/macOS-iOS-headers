//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject
{
    NSMutableArray *_sizeCache;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *sizeCache; // @synthesize sizeCache=_sizeCache;
- (id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long *)arg2;
- (void)_insertCacheEntry:(id)arg1;
- (void)flush;
- (void)setSize:(struct CGSize)arg1 forMaximumWidth:(double)arg2;
- (struct CGSize)sizeForMaximumWidth:(double)arg1;
- (id)init;

@end

