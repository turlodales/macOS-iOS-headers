//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCGSDisplay, NSColorSpace, NSDictionary, NSString, _NSScreenSharedInfo;

@interface NSScreen : NSObject
{
    struct CGRect _frame;
    int _depth;
    NSCGSDisplay *_display;
    _NSScreenSharedInfo *_sharedInfo;
    NSColorSpace *_colorSpace;
    NSString *_UUIDString;
    int _displayID;
    NSString *_cachedDisplayName;
}

+ (struct CGPoint)_cgScreenPointForPoint:(struct CGPoint)arg1;
+ (id)_screenAtPoint:(struct CGPoint)arg1;
+ (id)_screenForUUIDString:(id)arg1;
+ (BOOL)screensHaveSeparateSpaces;
+ (BOOL)_spacePerDisplay;
+ (double)_backingScaleFactorForScreen:(id)arg1;
+ (id)_screenForScreenNumber:(long long)arg1;
+ (id)deepestScreen;
+ (BOOL)_zeroScreenIsNew;
+ (double)_zeroScreenHeight;
+ (id)_zeroScreen;
+ (id)mainScreen;
+ (id)screens;
+ (int)_shieldingWindowLevel;
+ (BOOL)_releaseAllCapturedScreens:(id *)arg1;
+ (BOOL)_captureAllScreens:(id *)arg1;
@property(copy, setter=_setCachedDisplayName:) NSString *_cachedDisplayName; // @synthesize _cachedDisplayName;
- (id)_hwModel;
- (id)_localizedName;
@property(readonly, copy) NSString *localizedName;
- (BOOL)_isActiveScreen;
- (unsigned long long)_currentSpace;
- (id)imageInRect:(struct CGRect)arg1 underWindow:(id)arg2;
- (id)imageInRect:(struct CGRect)arg1;
- (struct CGRect)backingAlignedRect:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (struct CGRect)convertRectFromBacking:(struct CGRect)arg1;
- (struct CGRect)convertRectToBacking:(struct CGRect)arg1;
@property(readonly) const int *supportedWindowDepths;
- (BOOL)canRepresentDisplayGamut:(long long)arg1;
@property(readonly, copy) NSDictionary *deviceDescription;
- (struct CGRect)_safeVisibleFrame;
@property(readonly) struct CGRect visibleFrame;
- (struct CGRect)_layoutFrame;
- (double)_menuBarHeight;
- (struct CGRect)_dockRect;
- (BOOL)_dockHidden;
- (unsigned int)_dockOrientation;
- (id)_UUIDString;
- (struct CGSize)devicePixelCounts;
- (struct CGSize)_resolution;
@property(readonly) double maximumReferenceExtendedDynamicRangeColorComponentValue;
@property(readonly) double maximumPotentialExtendedDynamicRangeColorComponentValue;
@property(readonly) double maximumExtendedDynamicRangeColorComponentValue;
@property(readonly) double backingScaleFactor;
- (BOOL)_isZeroScreen;
@property(readonly) struct CGRect frame;
@property(readonly) NSColorSpace *colorSpace;
@property(readonly) int depth;
- (int)_displayID;
- (long long)_screenNumber;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_snapshot;
- (void)_updateWithDisplay:(id)arg1 sharedInfo:(id)arg2;
- (void)dealloc;
- (id)_initWithDisplay:(id)arg1 sharedInfo:(id)arg2;
- (double)userSpaceScaleFactor;
- (BOOL)_switchToSetting:(id)arg1 error:(id *)arg2;
- (id)_bestSettingSimilarToSetting:(id)arg1 exactMatch:(char *)arg2;
- (id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 refreshRate:(double)arg4 exactMatch:(char *)arg5;
- (id)_bestSettingWithBitsPerPixel:(int)arg1 width:(int)arg2 height:(int)arg3 exactMatch:(char *)arg4;
- (id)_availableSettings;
- (id)_currentSetting;
- (BOOL)_releaseCapture:(id *)arg1;
- (BOOL)_isCaptured;
- (BOOL)_capture:(id *)arg1;
- (id)displayLinkWithHandler:(CDUnknownBlockType)arg1;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

@end

