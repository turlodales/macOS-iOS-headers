//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

__attribute__((visibility("hidden")))
@interface SCRMailApplication : SCRApplication
{
}

- (BOOL)_isDeepKeyboardChildSynchronizedWithVoiceOver:(id)arg1;
- (BOOL)isMailApplication;
- (BOOL)handleRotorContentChooserMoveInDirection:(long long)arg1 request:(id)arg2;
- (id)axIdentifierForSectionType:(id)arg1;
- (void)_keyboardFocusDidChange:(id)arg1;
- (void)moveVOFocusToNewWindow;

@end

