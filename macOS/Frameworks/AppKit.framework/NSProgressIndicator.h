//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibilityProgressIndicator.h"

@class NSColor, NSString;

@interface NSProgressIndicator : NSView <NSAccessibilityProgressIndicator>
{
    BOOL _isBezeled;
    BOOL _isIndeterminate;
    BOOL _threadedAnimation;
    double _minimum;
    double _maximum;
    double _value;
    unsigned int _animationIndex;
    double _animationDelay;
    id <NSObject> _windowOcclusionChangedNotificationToken;
    double _drawingWidth;
    id _roundColor;
    id <NSObject> _systemColorsChangedNotificationToken;
    struct {
        unsigned int isSpinning:1;
        unsigned int isVector:1;
        unsigned int controlTint:3;
        unsigned int spinningTint:2;
        unsigned int controlSize:2;
        unsigned int style:1;
        unsigned int delayedStartup:1;
        unsigned int hideWhenStopped:1;
        unsigned int isHidden:1;
        unsigned int isHeartBeatInstalled:1;
        unsigned int customRenderer:1;
        unsigned int RESERVED:17;
    } _progressIndicatorFlags;
    id _NSProgressIndicatorReserved1;
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;
- (Class)_animatorClass;
- (id)accessibilityValue;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (void)_setWindow:(id)arg1;
- (void)geometryInWindowDidChange;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSColor *roundDeterminateColor;
@property unsigned long long controlSize;
@property long long spinningTint;
@property unsigned long long controlTint;
@property(getter=isBezeled) BOOL bezeled;
- (void)heartBeat:(CDStruct_fadd2e06 *)arg1;
- (void)_updateHeartBeat;
- (id)makeBackingLayer;
- (double)firstBaselineOffsetFromTop;
- (struct NSEdgeInsets)alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
@property(getter=isIndeterminate) BOOL indeterminate;
@property double maxValue;
@property double minValue;
@property(getter=isDisplayedWhenStopped) BOOL displayedWhenStopped;
- (void)stopAnimation:(id)arg1;
- (void)_stopAnimationAndRedisplay:(BOOL)arg1;
- (void)startAnimation:(id)arg1;
@property BOOL usesThreadedAnimation;
- (void)incrementBy:(double)arg1;
@property double doubleValue;
- (void)setUsesVectorMovement:(BOOL)arg1;
- (BOOL)usesVectorMovement;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (void)_drawThemeProgressArea:(BOOL)arg1;
- (void)_drawThemeBackground;
- (int)_vibrancyBlendMode;
- (BOOL)allowsVibrancy;
- (BOOL)_allowsCoreUI;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)_commonInit;
@property unsigned long long style;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setProDrawingWidth:(double)arg1;
- (double)_proDrawingWidth;
- (void)_setProDelayedStartup:(BOOL)arg1;
- (BOOL)_proDelayedStartup;
- (void)_setProRevive:(BOOL)arg1;
- (BOOL)_proIsSpinning;
- (void)_setProAnimationIndex:(unsigned long long)arg1;
- (unsigned long long)_proAnimationIndex;
- (void)animate:(id)arg1;
- (void)setAnimationDelay:(double)arg1;
- (double)animationDelay;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (id)accessibilityMinValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

