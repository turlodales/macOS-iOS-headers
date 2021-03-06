//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PIESubsequenceSliceParams : NSObject
{
    id _userInfo;
    unsigned long long _sliceCount;
    NSSet *_validHoleCounts;
}

@property(readonly) unsigned long long sliceCount; // @synthesize sliceCount=_sliceCount;
@property(readonly) NSSet *validHoleCounts; // @synthesize validHoleCounts=_validHoleCounts;
@property(readonly) id userInfo; // @synthesize userInfo=_userInfo;
- (id)sortedValidHoleCounts;
- (BOOL)isValidHoleCount:(unsigned long long)arg1;
- (id)initWithValidHoleCounts:(id)arg1 sliceCount:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)initWithValidHoleCounts:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;

@end

