//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface _MFMailboxEnumerator : NSEnumerator
{
    struct __CFTree *_startTree;
    struct __CFTree *_lastTree;
}

- (id)nextObject;
- (void)dealloc;
- (id)init;
- (id)initWithTree:(struct __CFTree *)arg1;

@end

