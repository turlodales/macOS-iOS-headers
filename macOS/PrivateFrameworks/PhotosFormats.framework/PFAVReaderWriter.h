//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PFRWSampleBufferChannelDelegate.h"

@class AVAsset, AVAssetReader, AVAssetWriter, AVAssetWriterInput, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate>
{
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    AVAssetReader *assetReader;
    AVAssetWriter *assetWriter;
    NSArray *videoChannels;
    NSArray *passthroughChannels;
    BOOL cancelled;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    BOOL _writeInProgress;
    CDStruct_1b6d18a9 _stillImagetime;
    id <PFAVReaderWriterAdjustDelegate> _delegate;
    AVAsset *_asset;
    AVAssetWriterInput *_metadataInput;
    NSURL *_outputURL;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) AVAssetWriterInput *metadataInput; // @synthesize metadataInput=_metadataInput;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <PFAVReaderWriterAdjustDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg3;
- (void)sampleBufferChannel:(id)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)readingAndWritingDidFinishSuccessfully:(BOOL)arg1 withError:(id)arg2;
- (void)cancel;
- (BOOL)startReadingAndWritingReturningError:(id *)arg1;
- (BOOL)setUpReaderAndWriterReturningError:(id *)arg1;
- (void)_didLoadAVAssetValues;
- (void)writeToURL:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAsset:(id)arg1 stillImageTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithAsset:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

