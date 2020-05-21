//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSScrubberDataSource.h"
#import "NSScrubberDelegate.h"

@class NSFormatter, NSScrubber, NSString, _NSStepperModel;

__attribute__((visibility("hidden")))
@interface _NSStepperTouchBarItemView : NSView <NSScrubberDataSource, NSScrubberDelegate>
{
    long long _numberOfStepperItems;
    _NSStepperModel *_stepperModel;
    NSScrubber *_scrubber;
    long long _selectedIndexAtStartOfScroll;
    id _originalScrollViewTarget;
    SEL _originalScrollViewAction;
    id _target;
    SEL _action;
    double _increment;
    long long _mode;
    NSFormatter *_formatter;
    CDUnknownBlockType _drawingHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType drawingHandler; // @synthesize drawingHandler=_drawingHandler;
@property(retain) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property long long mode; // @synthesize mode=_mode;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void)_scrubberDidChangeSelectedIndex:(long long)arg1;
- (void)_didTriggerScrollGestureRecognizer:(id)arg1;
@property double increment; // @synthesize increment=_increment;
@property double value;
@property double minValue;
@property double maxValue;
- (double)_mapScrubberItemIndexToStepperValue:(long long)arg1;
- (void)_updateNumberOfStepperItems;
- (double)_actualMin;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)scrubber:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForScrubber:(id)arg1;
- (void)scrubber:(id)arg1 didSelectItemAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

