//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSArray, NSDictionary;

@interface _ICNFIMAPConnectionEnumerator : NSEnumerator
{
    NSDictionary *_connectionsByMailboxName;
    NSArray *_allMailboxNames;
    unsigned long long _allMailboxNamesCount;
    unsigned long long _positionInMailboxNames;
    NSEnumerator *_nullEnumerator;
    id _lastObjectKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id lastObjectKey; // @synthesize lastObjectKey=_lastObjectKey;
- (id)nextObject;
- (id)init;
- (id)initWithConnectionDictionary:(id)arg1;

@end

