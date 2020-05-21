//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PRMonogramColor;

@interface CNUILikenessRenderingScope : NSObject
{
    BOOL _rightToLeft;
    double _scale;
    double _strokeWidth;
    struct CGColor *_strokeColor;
    unsigned long long _style;
    PRMonogramColor *_color;
    struct CGSize _pointSize;
}

+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 rightToLeft:(BOOL)arg3 style:(unsigned long long)arg4 color:(id)arg5;
+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 color:(id)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) PRMonogramColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) BOOL rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(readonly, nonatomic) struct CGColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize pointSize; // @synthesize pointSize=_pointSize;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPointSize:(struct CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor *)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 color:(id)arg7;

@end

