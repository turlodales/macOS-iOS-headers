//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@interface _PKStrokeClipPlane : NSObject <NSCopying>
{
    struct CGPoint _origin;
    struct CGPoint _normal;
}

@property(readonly, nonatomic) struct CGPoint normal; // @synthesize normal=_normal;
@property(readonly, nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
- (BOOL)isEqualToClipPlane:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)distanceToPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrigin:(struct CGPoint)arg1 normal:(struct CGPoint)arg2;

@end

