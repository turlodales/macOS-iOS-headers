//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface LPVideoViewConfiguration : NSObject <NSCopying>
{
    BOOL _disablePlayback;
    BOOL _disablePlaybackControls;
    BOOL _disableAutoPlay;
    double _fullScreenTransitionCornerRadius;
}

@property(nonatomic) double fullScreenTransitionCornerRadius; // @synthesize fullScreenTransitionCornerRadius=_fullScreenTransitionCornerRadius;
@property(nonatomic) BOOL disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property(nonatomic) BOOL disablePlaybackControls; // @synthesize disablePlaybackControls=_disablePlaybackControls;
@property(nonatomic) BOOL disablePlayback; // @synthesize disablePlayback=_disablePlayback;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

