//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface LPFetcherResponse : NSObject
{
    long long _state;
    id _userData;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)initWithState:(long long)arg1 fetcher:(id)arg2;

@end

