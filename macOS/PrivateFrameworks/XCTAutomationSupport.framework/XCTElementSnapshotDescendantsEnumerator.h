//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface XCTElementSnapshotDescendantsEnumerator : NSEnumerator
{
    NSEnumerator *_innerEnumerator;
    NSMutableArray *_unenumeratedDescendantsQueue;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *unenumeratedDescendantsQueue; // @synthesize unenumeratedDescendantsQueue=_unenumeratedDescendantsQueue;
@property(retain) NSEnumerator *innerEnumerator; // @synthesize innerEnumerator=_innerEnumerator;
- (id)nextObject;
- (id)initWithElementSnapshot:(id)arg1;

@end

