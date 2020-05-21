//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTextField.h>

@class SCRTextMarkerRange;

__attribute__((visibility("hidden")))
@interface SCRSafariAddressSearchTextField : SCRTextField
{
    BOOL __selectionNotificationHandlerModifiedCachedNumberOfCharacters;
    BOOL __inputInProgressWhilePopupIsDisplayed;
    unsigned long long __numberOfCharactersBeforeSelectionNotificationHandler;
    SCRTextMarkerRange *__previousSelectionRangeBeforeSelectionNotificationHandler;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL _inputInProgressWhilePopupIsDisplayed; // @synthesize _inputInProgressWhilePopupIsDisplayed=__inputInProgressWhilePopupIsDisplayed;
@property(retain, nonatomic) SCRTextMarkerRange *_previousSelectionRangeBeforeSelectionNotificationHandler; // @synthesize _previousSelectionRangeBeforeSelectionNotificationHandler=__previousSelectionRangeBeforeSelectionNotificationHandler;
@property(nonatomic) unsigned long long _numberOfCharactersBeforeSelectionNotificationHandler; // @synthesize _numberOfCharactersBeforeSelectionNotificationHandler=__numberOfCharactersBeforeSelectionNotificationHandler;
@property(nonatomic) BOOL _selectionNotificationHandlerModifiedCachedNumberOfCharacters; // @synthesize _selectionNotificationHandlerModifiedCachedNumberOfCharacters=__selectionNotificationHandlerModifiedCachedNumberOfCharacters;
- (BOOL)shouldSuppressTextAttributesEcho;
- (void)_elementWasDestroyed:(id)arg1;
- (void)_handlePopupSelectionChange;
- (void)_popupSelectionDidChange:(id)arg1;
- (id)_selectionHandler;
- (BOOL)keyboardHandler:(id)arg1 request:(id)arg2;
- (void)_outputFullTextValue;
- (void)handleContentChangeWithUserInfo:(id)arg1;
@property(readonly, nonatomic) BOOL _isNoLongerPartiallySelected;
- (void)_outputSelection;
- (void)handleTextSelectionChange;

@end

