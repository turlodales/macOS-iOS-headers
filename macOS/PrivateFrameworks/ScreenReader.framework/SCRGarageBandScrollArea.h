//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRScrollArea.h>

@class SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRGarageBandScrollArea : SCRScrollArea
{
    SCRUIElement *_currentTimeLineGroup;
    struct {
        unsigned int containsTimeLineGroups:1;
    } _flags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCRUIElement *currentTimeLineGroup; // @synthesize currentTimeLineGroup=_currentTimeLineGroup;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (BOOL)moveToLinkedItemWithEvent:(id)arg1 andInteract:(BOOL)arg2 request:(id)arg3;
- (BOOL)handleNavigationEvent:(id)arg1 request:(id)arg2 commandKey:(id)arg3 selector:(SEL)arg4 canScroll:(BOOL)arg5 canWrap:(BOOL)arg6;
- (void)handleSelectionChange:(id)arg1;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)setFocusedChild:(id)arg1;
- (BOOL)isChildScrollable:(id)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;

@end

