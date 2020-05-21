//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class NSButton, NSString, NSTouchBar;

@interface CalUIGadgetViewTouchBar : NSObject <NSTouchBarDelegate, NSTouchBarProvider>
{
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _removeFieldBlock;
    NSTouchBar *_wrappedBar;
    NSTouchBar *_touchBar;
    NSButton *_removeButton;
}

- (void).cxx_destruct;
@property(retain) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(retain) NSTouchBar *wrappedBar; // @synthesize wrappedBar=_wrappedBar;
@property(copy, nonatomic) CDUnknownBlockType removeFieldBlock; // @synthesize removeFieldBlock=_removeFieldBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)removeFieldSelected;
- (void)closeButtonSelected;
- (void)_updateTouchBarIdentifiers;
- (void)updateTouchBar;
- (id)initWithWrappedBar:(id)arg1 doneBlock:(CDUnknownBlockType)arg2 removeFieldBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

