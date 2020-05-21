//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PKPayloadCopier : NSObject
{
    void *_bomCopier;
    void *_bomSys;
    NSMutableDictionary *_bomCopierOptions;
    NSString *_sourcePath;
    unsigned long long _offset;
    NSString *_destinationPath;
    BOOL _isDestinationArchive;
    unsigned long long _payloadFormat;
    unsigned long long _payloadSize;
    NSArray *_maskPaths;
    NSArray *_allowPaths;
    CDUnknownBlockType _itemWillCopyHandler;
    NSObject<OS_dispatch_queue> *_itemWillCopyQueue;
    CDUnknownBlockType _itemCopiedHandler;
    NSObject<OS_dispatch_queue> *_itemCopiedQueue;
    unsigned long long _fullCompleteBytes;
    unsigned long long _fullCompleteCount;
    long long _partialFileLength;
    NSObject<OS_dispatch_queue> *_updateQueue;
    BOOL _isExecuting;
    BOOL _didCancel;
    NSError *_error;
}

+ (unsigned long long)payloadFormatForName:(id)arg1;
+ (id)_defaultBomCopierOptionsForArchiving;
+ (id)_defaultBomCopierOptionsForExtraction;
+ (id)_defaultBomCopierOptions;
- (void)run;
- (id)_startLZMABlockCompressorAndSignalWhenDone:(id)arg1;
- (void)cancel;
- (void)_setError:(id)arg1;
- (id)error;
- (unsigned long long)itemsComplete;
- (unsigned long long)writtenBytesComplete;
- (BOOL)isExecuting;
- (void)_extractMain:(id)arg1;
- (void)start;
- (void)setPayloadSize:(unsigned long long)arg1;
- (void)setPayloadFormat:(unsigned long long)arg1;
- (void)setItemWillCopyHandlerWithBlock:(CDUnknownBlockType)arg1;
- (void)setItemWillCopyHandlerOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setItemCopiedHandlerOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setCopiesQuarantine:(BOOL)arg1;
- (void)setPreservesACLs:(BOOL)arg1;
- (void)setPreservesExtAttrs:(BOOL)arg1;
- (void)setCopiesOwnershipFromIndexBom:(BOOL)arg1;
- (void)setPreservesSourceParentName:(BOOL)arg1;
- (void)setHFSPlusCompressionEnabled:(BOOL)arg1 withBackwardsIncompatibleFormat:(BOOL)arg2;
- (void)setIndexBomPath:(id)arg1;
- (void)setAllowPaths:(id)arg1;
- (void)setMaskPaths:(id)arg1;
- (void)dealloc;
- (id)initWithRootPath:(id)arg1 destinationArchive:(id)arg2;
- (id)initWithRootPath:(id)arg1 destination:(id)arg2;
- (id)initWithArchivePath:(id)arg1 offset:(unsigned long long)arg2 destination:(id)arg3;
- (id)_initWithSourcePath:(id)arg1 offset:(unsigned long long)arg2 destination:(id)arg3;
- (BOOL)_hasLZMABlockCompressedCPIOArchiveWithError:(id *)arg1;

@end

