//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage;

@interface CalDrawNinePartImage : NSObject
{
    NSImage *_topLeft;
    NSImage *_topCenter;
    NSImage *_topRight;
    NSImage *_middleLeft;
    NSImage *_middleCenter;
    NSImage *_middleRight;
    NSImage *_bottomLeft;
    NSImage *_bottomCenter;
    NSImage *_bottomRight;
}

+ (void)drawImage:(id)arg1 withCenterRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 withLeftEndCap:(BOOL)arg4 rightEndCap:(BOOL)arg5;
+ (id)ninePartImageBySlicingImage:(id)arg1 withCenterRect:(struct CGRect)arg2 withLeftEndCap:(BOOL)arg3 rightEndCap:(BOOL)arg4;
+ (id)_imageByCroppingImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void).cxx_destruct;
@property(retain) NSImage *bottomRight; // @synthesize bottomRight=_bottomRight;
@property(retain) NSImage *bottomCenter; // @synthesize bottomCenter=_bottomCenter;
@property(retain) NSImage *bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(retain) NSImage *middleRight; // @synthesize middleRight=_middleRight;
@property(retain) NSImage *middleCenter; // @synthesize middleCenter=_middleCenter;
@property(retain) NSImage *middleLeft; // @synthesize middleLeft=_middleLeft;
@property(retain) NSImage *topRight; // @synthesize topRight=_topRight;
@property(retain) NSImage *topCenter; // @synthesize topCenter=_topCenter;
@property(retain) NSImage *topLeft; // @synthesize topLeft=_topLeft;
- (void)drawInRect:(struct CGRect)arg1;

@end

