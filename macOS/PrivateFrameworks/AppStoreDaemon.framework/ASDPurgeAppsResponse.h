//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    long long _purgedSize;
    NSArray *_purgedApps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *purgedApps; // @synthesize purgedApps=_purgedApps;
@property(readonly, nonatomic) long long purgedSize; // @synthesize purgedSize=_purgedSize;
- (id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2;
- (id)init;

@end

