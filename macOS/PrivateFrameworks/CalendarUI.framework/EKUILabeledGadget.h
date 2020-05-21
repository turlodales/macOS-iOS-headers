//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIGadget.h>

@class NSTextField, NSView;

@interface EKUILabeledGadget : EKUIGadget
{
    NSView *_controlView;
    BOOL _hasAddedControlViewConstraints;
    NSTextField *_label;
}

- (void).cxx_destruct;
@property BOOL hasAddedControlViewConstraints; // @synthesize hasAddedControlViewConstraints=_hasAddedControlViewConstraints;
@property(retain) NSTextField *label; // @synthesize label=_label;
- (void)addSubviewsIfNeeded;
- (id)getAlignmentLabelAndAddToSubviewsIfNeeded;
- (id)controlView;
- (double)rightLabelAlignmentOffset;
- (double)preferredWidth;
- (BOOL)shouldDisplay;
- (double)preferredControlWidth;
- (double)centerlineOffset;
- (double)baselineOffset;
- (double)pixelsBetweenLabelAndControl;
- (id)viewForBaselineAlignment;
- (void)updateConstraints;
- (BOOL)shouldDisplayWhenNotEditable;
- (id)control;
- (id)labelString;
- (id)initWithViewController:(id)arg1;

@end

