//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _PASLock;

@interface PPPeopleSuggester : NSObject
{
    _PASLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sweepCache;
- (id)_rankedContactIdentifiersMatchingName:(id)arg1;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)rankedContactIdentifiersMatchingName:(id)arg1;
- (id)rankedContactIdentifiers;
- (id)init;

@end

