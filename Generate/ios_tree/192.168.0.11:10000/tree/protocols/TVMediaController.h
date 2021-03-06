/* Generated by RuntimeBrowser.
 */

@protocol TVMediaController

@required

- (UIImage *)coverImage;
- (<TVMediaControllerDelegate> *)delegate;
- (bool)isPlaybackEnabled;
- (TVMediaInfo *)mediaInfo;
- (void)pause;
- (void)play;
- (void)setDelegate:(id <TVMediaControllerDelegate>)arg1;
- (void)setMediaInfo:(TVMediaInfo *)arg1;
- (void)setPlaybackEnabled:(bool)arg1;
- (void)setShouldZoomWhenTransitioningToBackground:(bool)arg1;
- (void)setShowsVideoControls:(bool)arg1;
- (bool)shouldZoomWhenTransitioningToBackground;
- (bool)showsVideoControls;
- (long long)state;
- (void)stop;
- (void)transitionToForeground:(bool)arg1 animated:(bool)arg2;

@end
