//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSServicesMenuRequestor.h"
#import "NSTextInputClient.h"
#import "UINSKeyboardEventHandler.h"

@class NSEvent, NSMutableSet, NSString, NSTrackingArea, UINSMouseEventTranslator, UINSSceneView;

__attribute__((visibility("hidden")))
@interface UINSInputView : NSView <NSTextInputClient, NSServicesMenuRequestor, UINSKeyboardEventHandler>
{
    NSTrackingArea *_mouseTrackingArea;
    UINSMouseEventTranslator *_mouseEventTranslator;
    BOOL _trackingDragLocally;
    NSMutableSet *_currentlyHeldModifierKeyCodes;
    id _keyUpEventMonitor;
    NSEvent *_resentEvent;
}

- (void).cxx_destruct;
- (void)_searchWithGoogleFromMenu:(id)arg1;
- (BOOL)_isSpeaking;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)changeAttributes:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)convertToHalfWidth:(id)arg1;
- (void)convertToFullWidth:(id)arg1;
- (void)convertToTraditionalChinese:(id)arg1;
- (void)convertToSimplifiedChinese:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)replaceTextInSelection:(id)arg1;
- (void)addLinksInSelection:(id)arg1;
- (void)replaceDashesInSelection:(id)arg1;
- (void)replaceQuotesInSelection:(id)arg1;
- (void)toggleAutomaticTextReplacement:(id)arg1;
- (void)toggleAutomaticDashSubstitution:(id)arg1;
- (void)toggleAutomaticLinkDetection:(id)arg1;
- (void)toggleAutomaticQuoteSubstitution:(id)arg1;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)toggleAutomaticSpellingCorrection:(id)arg1;
- (void)toggleGrammarChecking:(id)arg1;
- (void)toggleContinuousSpellChecking:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (id)activityItemsConfigurationForSharing;
- (struct CGRect)accessibilityFocusRingMaskBounds;
- (unsigned long long)focusRingType;
- (BOOL)resignFirstResponder;
- (BOOL)acceptKeyViewHandoff:(BOOL)arg1;
- (void)_callFirstResponderHandler;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)performClick:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)selectPreviousKeyView:(id)arg1;
- (void)selectNextKeyView:(id)arg1;
- (void)_forwardKeyViewAction:(id)arg1 toView:(id)arg2;
- (void)_forwardKeyboardAction:(id)arg1 propagateUpHostResponderChain:(BOOL)arg2;
- (BOOL)_isValidKeyView:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)forwardUINSEventToAppKit:(id)arg1;
- (void)cancelOutstandingMouseButtons;
- (void)forwardDraggingEnded:(id)arg1;
- (BOOL)forwardPerformDragOperation:(id)arg1;
- (void)forwardPrepareForDragOperation:(id)arg1;
- (void)forwardDraggingExited:(id)arg1;
- (unsigned long long)forwardDraggingUpdated:(id)arg1;
- (unsigned long long)forwardDraggingEntered:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)translateWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)_shouldSendEventToUIKitFirst:(id)arg1;
- (void)keyUp:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_keyboardDelegateRequiresKeyEvents;
- (BOOL)_isResentEvent:(id)arg1;
- (BOOL)performDefaultBehaviorForEvent:(id)arg1;
- (BOOL)handleEventByInputContext:(id)arg1;
- (BOOL)_runHandleEventByInputMethod:(id)arg1;
- (BOOL)handleEventByInputMethod:(id)arg1;
- (BOOL)_sendKeyEvent:(id)arg1 isDown:(BOOL)arg2;
- (void)flagsChanged:(id)arg1;
- (struct CGRect)convertRectFromUnitCoordinates:(struct CGRect)arg1;
- (struct CGPoint)convertPointToUnitCoordinates:(struct CGPoint)arg1;
- (void)_consumeMouseEventsUntilMouseUp;
- (void)_installMouseTracking;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
@property(readonly, nonatomic) struct CGRect screenRect;
@property(nonatomic) __weak UINSSceneView *sceneView;
- (struct _NSRange)markedRange;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (struct _NSRange)selectedRange;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (double)_scaleFactor;
- (BOOL)_isNSTextInputContextiOSMacClient;
- (id)_prioritySupplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)_responderProxyForAction:(SEL)arg1 sender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

