//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKShapeDetectionControllerDelegate.h"
#import "AKSmoothPathViewDelegate.h"

@class AKAnnotation, AKController, AKShapeDetectionController, AKSmoothPathView, NSMutableArray, NSString;

@interface AKLegacyDoodleController : NSObject <AKSmoothPathViewDelegate, AKShapeDetectionControllerDelegate>
{
    BOOL _preferDoodle;
    BOOL _coalescesDoodles;
    BOOL _shapeDetectionEnabled;
    BOOL _selectNewlyCreatedAnnotations;
    BOOL _pressureSensitiveDoodleMode;
    BOOL _ignoreAnnotationAndSelectionKVO;
    BOOL _isShowingOverlay;
    BOOL _isWaitingToCoalesceStrokes;
    AKShapeDetectionController *_shapeDetectionController;
    AKController *_controller;
    AKSmoothPathView *_intelligentSketchOverlayView;
    CDUnknownBlockType _performRecognitionBlock;
    AKAnnotation *_coalescedAnnotation;
    NSMutableArray *_recentDoodlesAnnotations;
    NSMutableArray *_recentDoodlePaths;
    struct CGRect _recentDrawingBoundsInInputView;
}

- (void).cxx_destruct;
@property BOOL isWaitingToCoalesceStrokes; // @synthesize isWaitingToCoalesceStrokes=_isWaitingToCoalesceStrokes;
@property BOOL isShowingOverlay; // @synthesize isShowingOverlay=_isShowingOverlay;
@property BOOL ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property struct CGRect recentDrawingBoundsInInputView; // @synthesize recentDrawingBoundsInInputView=_recentDrawingBoundsInInputView;
@property(retain) NSMutableArray *recentDoodlePaths; // @synthesize recentDoodlePaths=_recentDoodlePaths;
@property(retain) NSMutableArray *recentDoodlesAnnotations; // @synthesize recentDoodlesAnnotations=_recentDoodlesAnnotations;
@property(retain) AKAnnotation *coalescedAnnotation; // @synthesize coalescedAnnotation=_coalescedAnnotation;
@property(copy, nonatomic) CDUnknownBlockType performRecognitionBlock; // @synthesize performRecognitionBlock=_performRecognitionBlock;
@property(retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView; // @synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) AKShapeDetectionController *shapeDetectionController; // @synthesize shapeDetectionController=_shapeDetectionController;
@property BOOL pressureSensitiveDoodleMode; // @synthesize pressureSensitiveDoodleMode=_pressureSensitiveDoodleMode;
@property(nonatomic) BOOL selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property(nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) BOOL coalescesDoodles; // @synthesize coalescesDoodles=_coalescesDoodles;
@property(nonatomic) BOOL preferDoodle; // @synthesize preferDoodle=_preferDoodle;
- (void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2;
- (void)_beginOrExtendCoalescingTimer;
- (void)_coalesceDrawingsCancelled;
- (void)_clearCoalescingState;
- (void)_coalesceRecentDrawings;
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(BOOL)arg2;
- (BOOL)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (id)overlayView:(id)arg1;
- (id)createDoodleAnnotationWithPath:(struct CGPath *)arg1 drawingBoundsInView:(struct CGRect)arg2 drawingCenter:(struct CGPoint)arg3 pathIsPrestroked:(BOOL)arg4 shouldGoToPageController:(id *)arg5;
- (void)_addAnnotationImmediatelyFor:(struct CGPath *)arg1 withDrawingCenter:(struct CGPoint)arg2 drawingBoundsInView:(struct CGRect)arg3 pathIsPrestroked:(BOOL)arg4 isSingelDot:(BOOL)arg5 fromInputView:(id)arg6;
- (void)_executeDeferredRecognition;
- (void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(struct CGPath *)arg2 boundsInView:(struct CGRect)arg3 center:(struct CGPoint)arg4 isPrestroked:(BOOL)arg5;
- (void)_inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2 isPrestroked:(BOOL)arg3;
- (void)inputView:(id)arg1 didCollectPrestrokedPath:(struct CGPath *)arg2;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (void)dismissCandidatePicker;
- (BOOL)isShowingCandidatePicker;
- (void)updateStrokeAttributes;
- (void)handleDragAction:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)removeOverlay;
- (void)showOverlay;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

