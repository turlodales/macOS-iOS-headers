//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKConfigurationSource.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL;

@interface CRKFileBackedConfigurationSource : NSObject <CRKConfigurationSource>
{
    NSURL *mFileURL;
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    NSOperationQueue *mFileOperationQueue;
    id <CRKFileBackedConfigurationSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <CRKFileBackedConfigurationSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)isReadErrorBenign:(id)arg1;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (BOOL)deleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2 error:(id *)arg3;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)delegateDidDeleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2;
- (void)invokeCompletionBlock:(CDUnknownBlockType)arg1 withConfiguration:(id)arg2 error:(id)arg3;
- (void)invokeCompletionBlock:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)executeIntents:(id)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (id)directoryURL;
- (id)initWithFileURL:(id)arg1 callbackQueue:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

