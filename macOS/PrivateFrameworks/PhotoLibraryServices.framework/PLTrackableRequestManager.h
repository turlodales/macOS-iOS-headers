//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLTrackableRequestDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PLTrackableRequestManager : NSObject <PLTrackableRequestDelegate>
{
    struct os_unfair_lock_s _requestsLock;
    NSMutableDictionary *_requestsByIdentifier;
    BOOL _invalid;
}

- (void).cxx_destruct;
- (void)trackableVideoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)trackableDownloadRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)trackableResourceRepairRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)trackableRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4;
- (void)_availabilityRequestDidFinish:(id)arg1;
- (id)requestWithTaskIdentifier:(id)arg1;
- (void)_unregisterRequest:(id)arg1;
- (void)_unregisterRequestForTaskIdentifier:(id)arg1;
- (void)registerRequest:(id)arg1;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

