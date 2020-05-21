//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSColorSpace;

@interface NSColorSpaceColor : NSColor
{
    NSColorSpace *colorSpace;
    struct CGColor *_cachedCGColor;
    long long numComponents;
    double components[0];
}

+ (id)newWithCoder:(id)arg1 zone:(struct _NSZone *)arg2;
+ (id)newWithColorSpace:(id)arg1 components:(const double *)arg2 count:(long long)arg3;
+ (void)load;
- (double)whiteComponent;
- (void)getWhite:(double *)arg1 alpha:(double *)arg2;
- (double)blackComponent;
- (double)yellowComponent;
- (double)magentaComponent;
- (double)cyanComponent;
- (void)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 black:(double *)arg4 alpha:(double *)arg5;
- (double)brightnessComponent;
- (double)saturationComponent;
- (double)hueComponent;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)isUniform;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorUsingType:(long long)arg1;
- (long long)type;
- (id)colorSpaceName;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)CGColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (double)alphaComponent;
- (void)getComponents:(double *)arg1;
- (long long)numberOfComponents;
- (id)colorSpace;
- (void)dealloc;
- (id)initWithColorSpace:(id)arg1 components:(const double *)arg2 count:(long long)arg3;
- (void)_release;

@end

