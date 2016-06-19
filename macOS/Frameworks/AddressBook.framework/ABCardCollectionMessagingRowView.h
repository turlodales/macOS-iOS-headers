//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardCollectionRowView.h>

@class NSPopUpButton, NSTextField;

__attribute__((visibility("hidden")))
@interface ABCardCollectionMessagingRowView : ABCardCollectionRowView
{
    NSPopUpButton *_messagingServiceChooserPopup;
    NSTextField *_messagingServiceLabel;
}

@property(retain) NSPopUpButton *messagingServiceChooserPopup; // @synthesize messagingServiceChooserPopup=_messagingServiceChooserPopup;
@property(retain) NSTextField *messagingServiceLabel; // @synthesize messagingServiceLabel=_messagingServiceLabel;
- (void)updateValueFontWithFont:(id)arg1;
- (void)updateTextColors;
- (void)setServicePopUpEnabled:(BOOL)arg1;
- (void)setService:(id)arg1;
- (void)setServiceMenu:(id)arg1;
- (void)dealloc;

@end

