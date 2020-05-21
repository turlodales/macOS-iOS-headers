//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MiniSoftwareUpdate/MSUDataDownloader.h>

#import "NSURLSessionDelegate.h"

@class NSMutableDictionary, NSString, NSURLSession;

@interface MSUNSURLSessionDataDownloader : MSUDataDownloader <NSURLSessionDelegate>
{
    NSURLSession *_session;
    NSMutableDictionary *_challengeErrorsByHostname;
    NSMutableDictionary *_extendedValidationBooleansByHostname;
}

+ (BOOL)_extendedValidationCheckForServerTrust:(struct __SecTrust *)arg1 trustError:(id *)arg2;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *extendedValidationBooleansByHostname; // @synthesize extendedValidationBooleansByHostname=_extendedValidationBooleansByHostname;
@property(retain) NSMutableDictionary *challengeErrorsByHostname; // @synthesize challengeErrorsByHostname=_challengeErrorsByHostname;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sendSynchronousRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (void)sendAsynchronousRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCatalogOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

