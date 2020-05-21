//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, PAEditSupport, PAItem, PHAdjustmentData, PHAsset, PHContentEditingInput;

@interface PAItemController : NSObject
{
    PAItem *_item;
    NSObject<OS_dispatch_queue> *_editQueue;
    unsigned long long _pendingEdits;
    NSObject<OS_dispatch_group> *_editGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    PHContentEditingInput *_originalContentEditingInput;
    PHContentEditingInput *_currentContentEditingInput;
    unsigned long long _currentContentEditingInputRequestID;
    PAEditSupport *_editSupport;
    PHContentEditingInput *_assetContentEditingInput;
    PHAdjustmentData *_assetAdjustmentData;
}

+ (Class)itemClass;
+ (id)existingItemControllerForAsset:(id)arg1;
+ (id)itemControllerForAsset:(id)arg1;
+ (Class)itemControllerClassForAsset:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *editQueue; // @synthesize editQueue=_editQueue;
@property(retain) PHAdjustmentData *assetAdjustmentData; // @synthesize assetAdjustmentData=_assetAdjustmentData;
@property(retain) PHContentEditingInput *assetContentEditingInput; // @synthesize assetContentEditingInput=_assetContentEditingInput;
@property(retain, nonatomic) PAEditSupport *editSupport; // @synthesize editSupport=_editSupport;
- (void)didEndEditing:(BOOL)arg1 discard:(BOOL)arg2;
- (void)resetEditingWithContentEditingInput:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditingToAsset:(id)arg1 contentEditingInput:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginEditingWithContentEditingInput:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, getter=isAvailableForEditing) BOOL availableForEditing;
- (BOOL)isEditing;
- (BOOL)_isEditing;
- (void)resetEditingMainThread:(CDUnknownBlockType)arg1;
- (void)resetEditing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetEditing;
- (void)_didResetEditing;
- (void)flushEditing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushEditingMainThread:(CDUnknownBlockType)arg1;
- (BOOL)flushEditing:(id *)arg1;
- (void)_endEditing:(BOOL)arg1 discard:(BOOL)arg2;
- (void)_resetEditing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)discardEditing;
- (void)commitEditing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commitEditingMainThread:(CDUnknownBlockType)arg1;
- (BOOL)commitEditing:(id *)arg1;
- (void)cancelBeginEditing;
- (void)whenContentEditingInputReady:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_beginEditing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginEditing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginEditingMainThread:(CDUnknownBlockType)arg1;
- (BOOL)beginEditing;
- (id)compositionIfEditing;
- (void)originalContentEditingInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_originalContentEditingInput;
@property(retain) PHContentEditingInput *currentContentEditingInput;
- (void)_internalSetCurrentContentEditingInput:(id)arg1;
- (void)_setCurrentContentEditingInput:(id)arg1;
- (id)_currentContentEditingInput;
- (BOOL)shouldUseDeferredRender;
- (void)assetDidChange:(id)arg1;
@property(readonly) PHAsset *asset;
@property(readonly, nonatomic) PAItem *item;
- (Class)_itemClass;
- (id)_newItemForAsset:(id)arg1;
- (id)_initWithItem:(id)arg1;
- (id)initWithAsset:(id)arg1;

@end

