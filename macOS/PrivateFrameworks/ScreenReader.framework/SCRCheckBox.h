//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRButton.h>

__attribute__((visibility("hidden")))
@interface SCRCheckBox : SCRButton
{
}

- (BOOL)isCheckbox;
- (BOOL)isControlElement;
- (BOOL)alwaysAllowDrag;
- (void)addActionDescription:(id)arg1 toRequest:(id)arg2;
- (void)addItemNameToRequest:(id)arg1;
- (id)statusDescription;
- (id)valueDescription;
- (id)_theCorrectDefaultActionDescription;
- (id)defaultActionDescription;
- (BOOL)ignoreValueChangeAfterAction;
- (id)roleDescription;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)isSelected;
- (void)echoValueChangeToRequest:(id)arg1;
- (BOOL)canHandleValueChange;

@end

