//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/NSAccessibilityStaticText-Protocol.h>

@class NSString, STLockoutPinView;

__attribute__((visibility("hidden")))
@interface STPinBoxUIElement : NSObject <NSAccessibilityStaticText>
{
    unsigned long long _index;
    STLockoutPinView *_parent;
}

- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)isAccessibilitySelected;
- (BOOL)isAccessibilityEnabled;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (BOOL)isAccessibilityFocused;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityShouldUseUniqueId;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

