//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCThrottle.h>

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle
{
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (BOOL)_validateThrottleParams:(id)arg1;
- (BOOL)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long *)arg2 now:(unsigned long long)arg3;

@end

