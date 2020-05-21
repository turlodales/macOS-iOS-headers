//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/VisualTabPickerShadowTileView.h>

@class NSImageView, NSLayoutConstraint, NSStackView, NSTextField, NSView, RolloverImageButton, VisualTabPickerMuteButton;

__attribute__((visibility("hidden")))
@interface VisualTabPickerThumbnailView : VisualTabPickerShadowTileView
{
    NSTextField *_titleTextField;
    NSImageView *_siteIconImageView;
    NSStackView *_headerContentStackView;
    BOOL _reloadDataOnLayout;
    NSView *_thumbnailView;
    RolloverImageButton *_closeButton;
    VisualTabPickerMuteButton *_muteButton;
    NSLayoutConstraint *_muteButtonWidthConstraint;
    NSLayoutConstraint *_muteButtonHeightConstraint;
    BOOL _closeButtonVisible;
    BOOL _visibleToUser;
    BOOL _muteButtonVisible;
    id <VisualTabPickerThumbnailDataSource> _dataSource;
    id <VisualTabPickerThumbnailDelegate> _delegate;
    long long _muteButtonState;
}

- (void).cxx_destruct;
@property(nonatomic) long long muteButtonState; // @synthesize muteButtonState=_muteButtonState;
@property(nonatomic, getter=isMuteButtonVisible) BOOL muteButtonVisible; // @synthesize muteButtonVisible=_muteButtonVisible;
@property(nonatomic) BOOL visibleToUser; // @synthesize visibleToUser=_visibleToUser;
@property(nonatomic, getter=isCloseButtonVisible) BOOL closeButtonVisible; // @synthesize closeButtonVisible=_closeButtonVisible;
@property(nonatomic) __weak id <VisualTabPickerThumbnailDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VisualTabPickerThumbnailDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)_muteButtonPressed:(id)arg1;
- (void)_createMuteButtonIfNecessary;
- (void)_closeButtonPressed:(id)arg1;
- (void)_updateCloseButtonImages;
- (void)_createCloseButton;
- (void)updateIcon;
- (void)layout;
- (void)_reloadData;
- (void)reloadData;
- (id)_createTitleTextField;
- (void)_updateLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setUpSubviews;
- (void)_setUpShadows;
- (void)_selectThumbnail;
- (void)_setCloseButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateMuteButtonStateAndVisibility;
- (void)startTitleOpacityAnimation:(long long)arg1;
- (void)_getTitleOpacityAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)magnifyWithEvent:(id)arg1;
- (void)resetScaleFactor;
- (void)mouseUp:(id)arg1;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

