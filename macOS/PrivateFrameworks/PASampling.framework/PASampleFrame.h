//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSMutableSet, NSSet, NSString;

@interface PASampleFrame : NSObject <PASerializable>
{
    PASampleFrame *_parentFrame;
    NSMutableSet *_childFrames;
    unsigned long long _address;
}

+ (id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2;
+ (id)newSampleFrameWithStackFrame:(struct pa_stack_frame *)arg1 andParent:(id)arg2;
+ (id)_newSampleFrameFromSerializedSampleFrame:(const CDStruct_a7511cde *)arg1;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(readonly) NSSet *childFrames; // @synthesize childFrames=_childFrames;
@property(readonly) __weak PASampleFrame *parentFrame; // @synthesize parentFrame=_parentFrame;
@property unsigned long long address; // @synthesize address=_address;
@property(readonly, copy) NSString *debugDescription;
- (void)querySymbolInformationForSelfAndChildrenUsingTask:(id)arg1 andKernelTask:(id)arg2 andSampleTimeSeriesDataStore:(id)arg3;
- (void)_addChildFrame:(id)arg1;
- (BOOL)correspondsToStackshotFrame:(struct pa_stack_frame *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isTruncatedBacktraceFrame;
@property(readonly) BOOL isRootFrame;
- (id)initWithSampleFrame:(id)arg1 andParent:(id)arg2;
- (id)initWithStackFrame:(struct pa_stack_frame *)arg1 andParent:(id)arg2;
- (id)initWithAddress:(unsigned long long)arg1;
- (id)copyWithNewParent:(id)arg1;
@property(readonly) BOOL isKernel;
@property(readonly) unsigned long long symbolicationAddress;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)_initWithSerializedSampleFrame:(const CDStruct_a7511cde *)arg1;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

