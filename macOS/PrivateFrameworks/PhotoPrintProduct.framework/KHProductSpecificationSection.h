//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface KHProductSpecificationSection : NSObject
{
    unsigned long long _previousIndex;
    unsigned long long _firstIndex;
    unsigned long long _nextIndex;
    long long _pageNumber;
    unsigned long long _placement;
    NSArray *_linkedSections;
}

- (void)dealloc;
- (id)description;
- (id)initWithPreviousIndex:(unsigned long long)arg1 firstIndex:(unsigned long long)arg2 nextIndex:(unsigned long long)arg3 pageNumber:(long long)arg4 placement:(unsigned long long)arg5;
- (void)setLinkedSections:(id)arg1;
- (id)linkedSections;
- (unsigned long long)placement;
- (id)pageName;
- (long long)pageNumber;
- (unsigned long long)nextIndex;
- (unsigned long long)previousIndex;
- (unsigned long long)firstIndex;

@end

