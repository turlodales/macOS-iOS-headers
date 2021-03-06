//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABOnBlueButton.h>

#import <ContactsUI/NSAccessibilityButton-Protocol.h>

@class NSString;
@protocol CNCancelable;

@interface CNQuickActionButton : ABOnBlueButton <NSAccessibilityButton>
{
    CDUnknownBlockType _mouseDownHandler;
    CDUnknownBlockType _secondaryMouseDownHandler;
    id <CNCancelable> _performDefaultActionToken;
    id <CNCancelable> _showDisambiguationUIToken;
}

- (void).cxx_destruct;
@property(retain) id <CNCancelable> showDisambiguationUIToken; // @synthesize showDisambiguationUIToken=_showDisambiguationUIToken;
@property(retain) id <CNCancelable> performDefaultActionToken; // @synthesize performDefaultActionToken=_performDefaultActionToken;
@property(copy, nonatomic) CDUnknownBlockType secondaryMouseDownHandler; // @synthesize secondaryMouseDownHandler=_secondaryMouseDownHandler;
@property(copy, nonatomic) CDUnknownBlockType mouseDownHandler; // @synthesize mouseDownHandler=_mouseDownHandler;
- (void)layout;
- (BOOL)allowsVibrancy;
- (BOOL)accessibilityPerformPress;
- (void)attachShowDisambiguationUIRecognizer;
- (void)attachPerformDefaultActionRecognizer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

