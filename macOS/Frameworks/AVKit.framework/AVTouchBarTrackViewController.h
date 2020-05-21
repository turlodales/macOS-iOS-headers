//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AVTouchBarTrackView;

__attribute__((visibility("hidden")))
@interface AVTouchBarTrackViewController : NSViewController
{
    BOOL _hasRoundedCorners;
    id <AVTouchBarTrackControlling><AVTimeControlling> _playerController;
}

+ (id)keyPathsForValuesAffectingTouchBarTrackView;
- (void).cxx_destruct;
@property(retain) id <AVTouchBarTrackControlling><AVTimeControlling> playerController; // @synthesize playerController=_playerController;
- (Class)_trackViewClass;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (id)thumbnailForTime:(double)arg1;
@property BOOL hasRoundedCorners;
@property(readonly) AVTouchBarTrackView *touchBarTrackView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

