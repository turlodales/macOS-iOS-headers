//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/GEOMapServiceProblemReportTicket-Protocol.h>

@class GEOMapServiceTraits, GEORPProblem, GEORPProblemRequest, GEORPUserCredentials, NSData, NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEORPSubmissionTicket : GEOAbstractTicket <GEOMapServiceProblemReportTicket>
{
    NSData *_resubmissionData;
    GEORPProblem *_problem;
    id <GEOMapItem> _place;
    GEORPProblemRequest *_problemRequest;
    GEORPUserCredentials *_userCredentials;
    NSData *_pushToken;
    NSString *_emailAddress;
    BOOL _started;
}

- (void).cxx_destruct;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)initWithResubmissionData:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

