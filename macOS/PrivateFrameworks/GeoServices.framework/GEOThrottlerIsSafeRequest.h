//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import "GEOXPCRequest.h"

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest>
{
    int _requestKindType;
    int _requestKindSubtype;
    BOOL _nextSafeRequestTime;
    BOOL _availableRequestCount;
    BOOL _includeToken;
    GEODataRequestThrottlerToken *_throttlerToken;
}

+ (Class)replyClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken; // @synthesize throttlerToken=_throttlerToken;
@property(nonatomic) BOOL includeToken; // @synthesize includeToken=_includeToken;
@property(nonatomic) BOOL availableRequestCount; // @synthesize availableRequestCount=_availableRequestCount;
@property(nonatomic) BOOL nextSafeRequestTime; // @synthesize nextSafeRequestTime=_nextSafeRequestTime;
@property(nonatomic) int requestKindSubtype; // @synthesize requestKindSubtype=_requestKindSubtype;
@property(nonatomic) int requestKindType; // @synthesize requestKindType=_requestKindType;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

