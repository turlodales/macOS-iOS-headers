//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IASUtilities/IASOutputStream.h>

@class IASStreamFIFOQueue, IASThreadSafeEvent, NSData, NSLock;

@interface IASParallelCompressionOutputStream : IASOutputStream
{
    CDStruct_02dd2c37 _filterIO;
    CDStruct_24cabc6e _filterParams;
    CDStruct_e37f3d4a _offsets;
    unsigned long long _streamStatus;
    int _compressionLevel;
    IASStreamFIFOQueue *_filteredDataQueue;
    IASThreadSafeEvent *_userSentZeroLengthDataToWrite;
    NSLock *_stateLock;
    NSLock *_partialDataLock;
    NSData *_partialData;
}

- (void).cxx_destruct;
@property(retain) NSData *partialData; // @synthesize partialData=_partialData;
@property(retain) NSLock *partialDataLock; // @synthesize partialDataLock=_partialDataLock;
@property(retain) NSLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain) IASThreadSafeEvent *userSentZeroLengthDataToWrite; // @synthesize userSentZeroLengthDataToWrite=_userSentZeroLengthDataToWrite;
@property(retain) IASStreamFIFOQueue *filteredDataQueue; // @synthesize filteredDataQueue=_filteredDataQueue;
@property(nonatomic) int compressionLevel; // @synthesize compressionLevel=_compressionLevel;
@property unsigned long long streamStatus; // @synthesize streamStatus=_streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2 shouldChangeCloseBehavior:(BOOL)arg3;
- (void)close;
- (void)open;
- (BOOL)hasSpaceAvailable;

@end

