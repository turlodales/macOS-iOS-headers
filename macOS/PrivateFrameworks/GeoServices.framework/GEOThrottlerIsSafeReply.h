//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOXPCReply.h>

#import "GEOXPCReply.h"

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply>
{
    double _nextSafeRequestTime;
    int _availableRequestCount;
    GEODataRequestThrottlerToken *_throttlerToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken; // @synthesize throttlerToken=_throttlerToken;
@property(nonatomic) int availableRequestCount; // @synthesize availableRequestCount=_availableRequestCount;
@property(nonatomic) double nextSafeRequestTime; // @synthesize nextSafeRequestTime=_nextSafeRequestTime;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

