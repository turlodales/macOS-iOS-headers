//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface LPShadowStyle : NSObject
{
    double _radius;
    double _opacity;
    NSColor *_color;
}

+ (id)cardHeadingIconShadow;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)init;

@end

