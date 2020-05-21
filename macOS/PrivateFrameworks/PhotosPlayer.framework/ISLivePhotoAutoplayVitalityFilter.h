//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosPlayer/ISLivePhotoVitalityFilter.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter
{
    BOOL _isVisible;
    BOOL _hasTargetVisibilityOffset;
    BOOL _isScrolling;
    BOOL _isDecelerating;
    double _visibilityOffset;
    double _targetVisibilityOffset;
    NSDate *_estimatedScrollEndDate;
    long long __state;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(nonatomic, setter=setDecelerating:) BOOL isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(nonatomic, setter=setScrolling:) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSDate *estimatedScrollEndDate; // @synthesize estimatedScrollEndDate=_estimatedScrollEndDate;
@property(nonatomic) double targetVisibilityOffset; // @synthesize targetVisibilityOffset=_targetVisibilityOffset;
@property(nonatomic) BOOL hasTargetVisibilityOffset; // @synthesize hasTargetVisibilityOffset=_hasTargetVisibilityOffset;
@property(nonatomic) double visibilityOffset; // @synthesize visibilityOffset=_visibilityOffset;
@property(nonatomic, setter=setVisible:) BOOL isVisible; // @synthesize isVisible=_isVisible;
- (void)_startAutoplay;
- (void)updateOutput;

@end

