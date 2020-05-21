//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface PAWSUpdateDataStore : NSObject <PASerializable>
{
    NSMutableArray *_wsUpdateArray;
    CDUnknownBlockType _wsUpdateCallbackBlock;
    NSObject<OS_dispatch_queue> *_wsUpdateCallbackQueue;
}

+ (void)_printFrameReportExplanationToStream:(id)arg1;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 andEndIndex:(unsigned long long)arg2 andStartDisplayIndex:(unsigned long long)arg3 withSampleDataStore:(id)arg4 toStream:(id)arg5;
- (id)init;
- (id)_getWSUpdateArraySnapshot;
- (void)stopGatheringWSUpdateInformation;
- (void)startingGatheringWSUpdateInformation;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

