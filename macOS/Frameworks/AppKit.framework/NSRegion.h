//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSRegion : NSObject
{
    struct CGRect _bounds;
    void *_cgRegion;
}

- (void)stroke;
- (void)fill;
- (void)addClip;
- (void)translateBy:(struct CGPoint)arg1;
- (void)xorRegion:(id)arg1;
- (void)xorRect:(struct CGRect)arg1;
- (void)intersectRegion:(id)arg1;
- (void)intersectRect:(struct CGRect)arg1;
- (void)subtractRegion:(id)arg1;
- (void)subtractRect:(struct CGRect)arg1;
- (void)addRegion:(id)arg1;
- (void)addRect:(struct CGRect)arg1;
- (void)setRegion:(id)arg1;
- (void)setRect:(struct CGRect)arg1;
- (void)setEmpty;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (struct CGRect)largestRect;
- (BOOL)isRectangular;
- (void)getRects:(struct CGRect **)arg1 count:(unsigned long long *)arg2;
- (BOOL)intersectsRegion:(id)arg1;
- (BOOL)intersectsRect:(struct CGRect)arg1;
- (BOOL)containsRegion:(id)arg1;
- (BOOL)containsRect:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (BOOL)isEmpty;
- (void *)cgsRegionObj;
- (id)mutableCopy;
- (id)copy;
- (void)dealloc;
- (id)initWithBitmapImageRep:(id)arg1 atX:(long long)arg2 y:(long long)arg3 flip:(BOOL)arg4;
- (id)initWithCGSRegionObj:(struct CGSRegionObject *)arg1;
- (id)initWithRects:(const struct CGRect *)arg1 count:(unsigned long long)arg2;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;
- (id)description;

@end

