//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

@class NSFormatter, NSString, _NSStepperTouchBarItemView;

@interface NSStepperTouchBarItem : NSTouchBarItem
{
    _NSStepperTouchBarItemView *_stepperView;
    id target;
    SEL action;
    NSString *_customizationLabel;
}

+ (id)stepperTouchBarItemWithIdentifier:(id)arg1 drawingHandler:(CDUnknownBlockType)arg2;
+ (id)stepperTouchBarItemWithIdentifier:(id)arg1 formatter:(id)arg2;
- (void).cxx_destruct;
@property SEL action; // @synthesize action;
@property __weak id target; // @synthesize target;
- (void)_configureAsGraphicalStepperWithDrawingHandler:(CDUnknownBlockType)arg1;
- (void)_configureAsTextualStepperWithFormatter:(id)arg1;
- (void)_stepperValueDidChange:(id)arg1;
@property(copy) NSString *customizationLabel; // @synthesize customizationLabel=_customizationLabel;
@property double value;
@property double increment;
@property double minValue;
@property double maxValue;
- (id)view;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonStepperViewSetUp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
@property(readonly) NSFormatter *formatter;

@end

