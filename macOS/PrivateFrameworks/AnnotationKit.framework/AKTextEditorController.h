//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextStorageDelegate.h"
#import "NSTextViewDelegate.h"

@class AKAnnotation<AKTextAnnotationProtocol>, AKController, AKPageController, CALayer, NSString, NSTextStorage, NSTextView, NSUndoManager, NSView;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, NSTextViewDelegate>
{
    BOOL _isInEndEditing;
    BOOL _isInAdjustAnnotationFrameToFitText;
    NSTextView *_textView;
    AKAnnotation<AKTextAnnotationProtocol> *_annotation;
    AKController *_controller;
    AKPageController *_pageController;
    CALayer *_textViewMaskLayer;
    NSView *_textViewContainer;
    NSTextStorage *_textStorage;
    double _renderingTextStorageScaleFactor;
    double _modelToEditorScaleFactor;
    double _handleCompensatingScaleFactor;
    NSUndoManager *_textViewUndoManager;
}

- (void).cxx_destruct;
@property BOOL isInAdjustAnnotationFrameToFitText; // @synthesize isInAdjustAnnotationFrameToFitText=_isInAdjustAnnotationFrameToFitText;
@property BOOL isInEndEditing; // @synthesize isInEndEditing=_isInEndEditing;
@property(retain) NSUndoManager *textViewUndoManager; // @synthesize textViewUndoManager=_textViewUndoManager;
@property double handleCompensatingScaleFactor; // @synthesize handleCompensatingScaleFactor=_handleCompensatingScaleFactor;
@property double modelToEditorScaleFactor; // @synthesize modelToEditorScaleFactor=_modelToEditorScaleFactor;
@property double renderingTextStorageScaleFactor; // @synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor;
@property(retain) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain) NSView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain) CALayer *textViewMaskLayer; // @synthesize textViewMaskLayer=_textViewMaskLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property __weak AKAnnotation<AKTextAnnotationProtocol> *annotation; // @synthesize annotation=_annotation;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;
- (struct CGRect)_editorFrameForTextBoundsInModel:(struct CGRect)arg1;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_adjustAnnotationFrameToFitText;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(struct CGPoint)arg3;
- (void)_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (void)textDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL isEditing;
- (void)updateForTextAttributeChange;
- (void)_endEditing;
- (void)_commitToModelWithoutEndingEditing;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)endEditing;
- (void)commitToModelWithoutEndingEditing;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

