//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOXPCReply.h>

#import "GEOXPCReply.h"

@class GEOETATrafficUpdateRequest, NSString;

@interface GEOETAUpdateableWillSendReply : GEOXPCReply <GEOXPCReply>
{
    GEOETATrafficUpdateRequest *_updatedRequest;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) GEOETATrafficUpdateRequest *updatedRequest; // @synthesize updatedRequest=_updatedRequest;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

