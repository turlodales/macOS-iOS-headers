//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCalibratedRGBColor.h>

__attribute__((visibility("hidden")))
@interface NSDeviceRGBColor : NSCalibratedRGBColor
{
}

+ (id)newWithCoder:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)colorSpace;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1;

@end

