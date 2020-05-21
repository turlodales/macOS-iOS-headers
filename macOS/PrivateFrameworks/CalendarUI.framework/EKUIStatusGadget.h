//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUILabeledGadget.h>

@class EKUIPopUpButton;

@interface EKUIStatusGadget : EKUILabeledGadget
{
    EKUIPopUpButton *_statusPicker;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property(retain) EKUIPopUpButton *statusPicker; // @synthesize statusPicker=_statusPicker;
- (void)statusChanged:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (id)control;
- (double)pixelsBetweenLabelAndControl;
- (double)baselineOffset;
- (id)labelString;
- (void)addMenuItemForStatus:(long long)arg1 withTitle:(id)arg2;
- (BOOL)shouldDisplay;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (id)statusImageForStatus:(long long)arg1;
- (id)initWithViewController:(id)arg1;

@end

