//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget
{
    EKUICalendarPopUpButton *_calendarPicker;
    EKUIGadget *_compositeParent;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property(nonatomic) __weak EKUIGadget *compositeParent; // @synthesize compositeParent=_compositeParent;
@property(retain) EKUICalendarPopUpButton *calendarPicker; // @synthesize calendarPicker=_calendarPicker;
- (double)horizontalPadding;
- (void)calendarSelected:(id)arg1;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)arg1;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (double)preferredWidth;
- (id)control;
- (id)initWithViewController:(id)arg1;

@end

