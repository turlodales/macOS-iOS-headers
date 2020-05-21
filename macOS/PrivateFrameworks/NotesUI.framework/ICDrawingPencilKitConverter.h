//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface ICDrawingPencilKitConverter : NSObject
{
    BOOL _isThrowaway;
    NSOperationQueue *_converterQueue;
    NSMapTable *_lastOperationForAttachmentID;
    NSObject<OS_dispatch_queue> *_convertDispatchQueue;
    NSMutableDictionary *_accountIDCanBeUpdated;
    NSMutableDictionary *_accountIDDeviceCheckDate;
    NSMutableArray *_mutableFailedSketches;
}

+ (unsigned long long)countOfUpdatableDrawingsInNote:(id)arg1;
+ (BOOL)canUpdateInlineDrawingAttachment:(id)arg1;
+ (BOOL)canUpdateFullscreenSketchAttachment:(id)arg1;
+ (id)newThrowawayConverter;
+ (id)sharedConverter;
- (void).cxx_destruct;
@property(nonatomic) BOOL isThrowaway; // @synthesize isThrowaway=_isThrowaway;
@property(retain, nonatomic) NSMutableArray *mutableFailedSketches; // @synthesize mutableFailedSketches=_mutableFailedSketches;
@property(retain, nonatomic) NSMutableDictionary *accountIDDeviceCheckDate; // @synthesize accountIDDeviceCheckDate=_accountIDDeviceCheckDate;
@property(retain, nonatomic) NSMutableDictionary *accountIDCanBeUpdated; // @synthesize accountIDCanBeUpdated=_accountIDCanBeUpdated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *convertDispatchQueue; // @synthesize convertDispatchQueue=_convertDispatchQueue;
@property(retain, nonatomic) NSMapTable *lastOperationForAttachmentID; // @synthesize lastOperationForAttachmentID=_lastOperationForAttachmentID;
@property(retain, nonatomic) NSOperationQueue *converterQueue; // @synthesize converterQueue=_converterQueue;
- (void)operationComplete:(id)arg1;
- (unsigned long long)countOfDrawingsNeedingConversionInNote:(id)arg1;
- (void)convertDrawingsInNoteIfNeeded:(id)arg1;
- (void)convertDrawingsInNote:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)convertAllDrawingsIfNeeded;
- (id)addOperationForAttachment:(id)arg1 automatic:(BOOL)arg2;
- (BOOL)shouldAutoConvertNote:(id)arg1;
- (BOOL)shouldConvertAllDrawingsIfNeeded;
- (void)performThrowawayConversionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)convertDrawingsInNote:(id)arg1 inWindow:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)compareDrawingAttachment:(id)arg1 withConvertedDrawing:(id)arg2;
- (id)updateInlineDrawingAttachment:(id)arg1;
- (id)convertSketch:(id)arg1;
- (id)convertSketchAttachment:(id)arg1 toInlineDrawingAtRange:(struct _NSRange)arg2 inNote:(id)arg3;
- (unsigned long long)convertAllSketchesInNote:(id)arg1;
- (void)convertAllSketchesWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)convertAllSketchesWithProgress:(id)arg1;
@property(readonly, nonatomic) NSArray *failedSketches;
- (void)canAutoUpdateDrawingsInAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

