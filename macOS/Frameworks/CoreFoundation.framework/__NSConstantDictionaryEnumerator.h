//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSEnumerator.h>

@class NSConstantDictionary;

__attribute__((visibility("hidden")))
@interface __NSConstantDictionaryEnumerator : NSEnumerator
{
    NSConstantDictionary *_underlyingDictionary;
    unsigned long long _currentIndex;
    _Bool _isForKeys;
}

- (id)nextObject;
- (id)initWithConstantDictionary:(id)arg1 enumerateKeys:(_Bool)arg2;

@end

