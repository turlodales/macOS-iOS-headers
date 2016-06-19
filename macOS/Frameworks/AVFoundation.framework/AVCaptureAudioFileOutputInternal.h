//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureFileOutputRecordingOperationDescriptor, AVCaptureOperationDescriptorQueue, MediaIOGraphNodeDescription, NSArray, NSError, NSLock, NSMutableArray, NSString, NSTimer, NSURL;

@interface AVCaptureAudioFileOutputInternal : NSObject
{
    struct __CFDictionary *splitterUnits;
    struct __CFDictionary *mixerUnits;
    struct __CFDictionary *compressorUnits;
    struct __CFDictionary *compressorRenderCallbackContextTokens;
    struct __CFDictionary *fileControlCallbackContextTokens;
    MediaIOGraphNodeDescription *fileWriterOutputUnit;
    unsigned int activeConnectionCount;
    AVCaptureOperationDescriptorQueue *operationDescriptorQueue;
    NSLock *operationDescriptorQueueLock;
    AVCaptureFileOutputRecordingOperationDescriptor *runningRecordingOperationDescriptor;
    struct os_unfair_lock_s runningRecordingOperationDescriptorLock;
    CDStruct_1b6d18a9 syncTime;
    void *syncTimeConnection;
    struct os_unfair_lock_s syncTimeLock;
    unsigned long long curAudioBuffer;
    CDStruct_1b6d18a9 timeWritten;
    long long sizeWritten;
    struct os_unfair_lock_s statsLock;
    struct os_unfair_lock_s metadataLock;
    BOOL wasForcedToPause;
    NSString *fileUTI;
    unsigned int fileType;
    NSError *stopError;
    struct os_unfair_lock_s stopErrorLock;
    NSMutableArray *activeConnections;
    NSArray *noDataConnections;
    struct os_unfair_lock_s connectionsLock;
    BOOL fileControlCallbackRanSinceLastCheck;
    BOOL fileControlCallbackTimedOut;
    struct os_unfair_lock_s fileControlCallbackTimeoutLock;
    NSTimer *fileControlCallbackTimeoutTimer;
    NSURL *outputFileURL;
    BOOL recordingPaused;
    struct os_unfair_lock_s recordingStateLock;
    NSArray *metadata;
}

@end

