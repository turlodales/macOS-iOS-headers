//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureOperationDescriptor.h"

@class AVWeakReference, NSArray, NSError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVCaptureFileOutputRecordingOperationDescriptor : NSObject <AVCaptureOperationDescriptor>
{
    NSURL *_outputFileURL;
    NSError *_stopError;
    BOOL _didStartWriting;
    BOOL _paused;
    AVWeakReference *_weakReferenceDelegate;
    NSArray *_connections;
}

+ (id)recordingOperationDescriptorWithOutputFileURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
@property(getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(copy) NSError *stopError; // @synthesize stopError=_stopError;
@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
- (id)operationDescriptorCoalescedWithExistingOperationDescriptor:(id)arg1;
- (BOOL)setDidStartWritingIfNotAlreadyStarted;
@property(readonly, nonatomic) id <AVCaptureFileOutputRecordingDelegate> delegate;
- (void)dealloc;
- (id)initWithOutputFileURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

