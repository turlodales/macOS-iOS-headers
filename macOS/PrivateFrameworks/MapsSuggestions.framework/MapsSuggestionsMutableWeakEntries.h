//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject
{
    NSPointerArray *_array;
    BOOL _dirty;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *strongArray;
@property(readonly, nonatomic) unsigned long long count;
- (id)weakObjectAtIndex:(unsigned long long)arg1;
- (void)addWeakObject:(id)arg1;
- (id)initWithEntries:(id)arg1;
- (id)init;

@end

