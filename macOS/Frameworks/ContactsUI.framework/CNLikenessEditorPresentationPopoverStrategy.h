//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNLikenessEditorPresentationStrategy-Protocol.h>

@class NSPopover, NSString;

@interface CNLikenessEditorPresentationPopoverStrategy : NSObject <CNLikenessEditorPresentationStrategy>
{
    NSPopover *_popover;
}

+ (id)strategy;
- (void).cxx_destruct;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void)close;
- (void)presentController:(id)arg1 onView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

