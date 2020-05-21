//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SAJSONSerialization.h"
#import "SASerializable.h"

@class NSString, SAInstruction;

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable>
{
    SAInstruction *_instruction;
    unsigned long long _address;
    SAFrame *_parentFrame;
    id _childFrameOrFrames;
}

+ (void)fixupInstructionsInFrameTree:(id)arg1 binaryLoadInfos:(id)arg2 libraryCache:(id)arg3;
+ (void)enumerateFrameTree:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2;
+ (id)frameWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(BOOL)arg4;
+ (id)frameWithPAStyleSerializedFrame:(const CDStruct_1a4856f2 *)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_f51ef38d *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(retain) id childFrameOrFrames; // @synthesize childFrameOrFrames=_childFrameOrFrames;
@property(retain) SAFrame *parentFrame; // @synthesize parentFrame=_parentFrame;
@property unsigned long long address; // @synthesize address=_address;
@property(readonly, copy) NSString *debugDescription;
- (void)_addChildFrame:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isTruncatedBacktraceFrame;
@property(readonly) BOOL isRootFrame;
@property(readonly) BOOL symbolicationOffByOne;
@property(readonly) BOOL isKernel;
- (id)copyWithNewParent:(id)arg1;
- (id)initWithFrame:(id)arg1 andParent:(id)arg2;
- (id)initWithAddress:(unsigned long long)arg1 binaryLoadInfo:(id)arg2 parent:(id)arg3 symbolicationOffByOne:(BOOL)arg4;
@property(retain) SAInstruction *instruction;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;
- (void)populateReferencesUsingPAStyleSerializedFrame:(const CDStruct_1a4856f2 *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)populateReferencesUsingBuffer:(CDStruct_f51ef38d *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(CDStruct_f51ef38d *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

