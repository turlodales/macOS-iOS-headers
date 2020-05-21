//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSArray;

@interface PXGDebugHUDLayer : CALayer
{
    NSArray *_graphLayers;
    struct CGColor *_green;
    struct CGColor *_yellow;
    struct CGColor *_red;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGColor *red; // @synthesize red=_red;
@property(nonatomic) struct CGColor *yellow; // @synthesize yellow=_yellow;
@property(nonatomic) struct CGColor *green; // @synthesize green=_green;
@property(copy, nonatomic) NSArray *graphLayers; // @synthesize graphLayers=_graphLayers;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLayerAtIndex:(long long)arg1 time:(double)arg2 redZone:(double)arg3 yellowZone:(double)arg4;
- (void)updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg1;
- (id)init;

@end

