//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColor.h>

__attribute__((visibility("hidden")))
@interface NSDeviceCMYKColor : NSColor
{
    double cyanComponent;
    double magentaComponent;
    double yellowComponent;
    double blackComponent;
    double alphaComponent;
    struct CGColor *_cachedCGColor;
}

+ (id)newWithCoder:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)isUniform;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorSpace;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingType:(long long)arg1;
- (long long)type;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)CGColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)getComponents:(double *)arg1;
- (long long)numberOfComponents;
- (void)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 black:(double *)arg4 alpha:(double *)arg5;
- (double)alphaComponent;
- (double)blackComponent;
- (double)yellowComponent;
- (double)magentaComponent;
- (double)cyanComponent;
- (void)dealloc;
- (id)initWithCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5;

@end

