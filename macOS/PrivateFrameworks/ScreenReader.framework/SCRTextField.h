//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRStandardText.h>

@class NSMutableString, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRTextField : SCRStandardText
{
    NSMutableString *_content;
    SCRElement *_suggestionsMenuElement;
    long long _cachedInvalidStatus;
    struct {
        unsigned int isSearchField:1;
        unsigned int isStatic:1;
        unsigned int registeredSuggestionsMenuDestroyedNotification:1;
        unsigned int isPasscodeDisplayBox:1;
    } _flags;
    BOOL _isSecureTextField;
    unsigned char __isTextFieldWithIncrementor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char _isTextFieldWithIncrementor; // @synthesize _isTextFieldWithIncrementor=__isTextFieldWithIncrementor;
@property(nonatomic) BOOL isSecureTextField; // @synthesize isSecureTextField=_isSecureTextField;
- (void)addValueToRequest:(id)arg1;
- (id)getIncrementorChild;
- (BOOL)isTextFieldWithIncrementor;
- (BOOL)_shouldIgnoreEvent:(id)arg1;
- (BOOL)isTextField;
- (void)addTextBoundryToRequest:(id)arg1 edge:(long long)arg2;
- (BOOL)_isDescendantOfWebArea;
- (struct __AXTextMarker *)axTextMarkerRefForIndex:(unsigned long long)arg1;
- (void)readCurrentStyleInfo:(id)arg1;
- (BOOL)isControlElement;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)sendBrailleLineForEchoRange:(id)arg1 selectionRange:(id)arg2;
- (id)stringForRange:(id)arg1;
- (void)echoContentChange;
- (unsigned long long)cachedNumberOfCharacters;
- (unsigned long long)_numberOfCharactersForSecureText;
- (unsigned long long)numberOfCharacters;
- (BOOL)readContentUsingCallback;
- (id)shortInstruction;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (void)addElementSummaryToRequest:(id)arg1;
- (id)titleDescription;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (void)addItemNameToRequest:(id)arg1;
- (void)addItemDescriptionForFallbackToRequest:(id)arg1;
- (id)helpDescription;
- (id)typeDescription;
- (id)statusDescription;
- (id)valueDescription;
- (id)attributedValueDescription;
- (void)clearCachedValue;
- (id)value;
- (BOOL)shouldRemoveSpecialChild:(id)arg1;
- (id)_interactableChildrenToTheLeft;
- (id)_interactableChildrenToTheRight;
- (id)interactableChildren;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)isDisabled;
- (BOOL)isStaticText;
- (BOOL)isEditable;
- (BOOL)shouldOutputClickableState;
- (BOOL)isClickable;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)_suggestionMenuWasDestroyed:(id)arg1;
- (void)_elementWasCreated:(id)arg1;
- (void)_invalidInputChanged:(id)arg1;
- (void)handleTextChangeWithUserInfo:(id)arg1;
- (BOOL)keyboardHandler:(id)arg1 request:(id)arg2;
- (BOOL)forceValueDescriptionForStaticTextChanges;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

