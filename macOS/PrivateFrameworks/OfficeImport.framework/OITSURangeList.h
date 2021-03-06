//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURangeList : NSObject
{
    struct vector<_NSRange, std::__1::allocator<_NSRange>> mRangeList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)stringValue;
- (void)consolidate;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (void)reverse;
- (void)replaceWithRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)addRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithString:(id)arg1;
- (id)initWithRangeList:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;

@end

