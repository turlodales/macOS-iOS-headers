//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TLayer.h>

__attribute__((visibility("hidden")))
@interface FI_TAirDropProgressLayer : FI_TLayer
{
    double _endAngle;
    _Bool _indeterminate;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property double endAngle; // @synthesize endAngle=_endAngle;
- (void)drawProgressRing:(double)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
- (void)setEndAngleAnimated:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

