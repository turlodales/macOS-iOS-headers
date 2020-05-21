//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingConcurrentVBLPreprocessFilter.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentAutomatedTestVBLPreprocessFilter : _NSScrollingConcurrentVBLPreprocessFilter
{
    long long _scrollLaps;
    long long _currentLeg;
    double _scrollStepSize;
    long long _scrollAxis;
    double _minScrollValue;
    double _maxScrollValue;
}

@property double maxScrollValue; // @synthesize maxScrollValue=_maxScrollValue;
@property double minScrollValue; // @synthesize minScrollValue=_minScrollValue;
@property long long scrollAxis; // @synthesize scrollAxis=_scrollAxis;
@property double scrollStepSize; // @synthesize scrollStepSize=_scrollStepSize;
@property long long scrollLaps; // @synthesize scrollLaps=_scrollLaps;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForTimestamp:(double)arg2;
- (id)initWithConstantData:(id)arg1;

@end

