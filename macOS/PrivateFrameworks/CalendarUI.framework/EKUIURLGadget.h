//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUI/EKUISingleTextFieldGadget.h>

#import <CalendarUI/CalUIResizingTextFieldDelegate-Protocol.h>

@class NSString;

@interface EKUIURLGadget : EKUISingleTextFieldGadget <CalUIResizingTextFieldDelegate>
{
    BOOL _mouseEntered;
    BOOL _shouldScrollTextFieldToTop;
}

+ (id)interestedChangeKeys;
@property BOOL shouldScrollTextFieldToTop; // @synthesize shouldScrollTextFieldToTop=_shouldScrollTextFieldToTop;
@property BOOL mouseEntered; // @synthesize mouseEntered=_mouseEntered;
- (BOOL)performDragOperation:(id)arg1;
- (id)claimedPboardTypes;
- (void)mouseExitedGadgetView;
- (void)mouseEnteredGadgetView;
- (void)updateWithChanges:(id)arg1;
- (void)setObject:(id)arg1;
- (void)updateEvent;
- (id)url;
- (double)maxHeight;
- (BOOL)shouldDisplay;
- (BOOL)wantsToDisplay;
- (BOOL)hasData;
- (id)placeholderText;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

