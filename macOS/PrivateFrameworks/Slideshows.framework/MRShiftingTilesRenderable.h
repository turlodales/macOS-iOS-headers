//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRCroppingSprite, MRImage;

@interface MRShiftingTilesRenderable : NSObject
{
    MRImage *slide;
    MRCroppingSprite *sprite;
    struct CGPoint position;
    struct CGSize size;
    BOOL isBreak;
}

@property(retain, nonatomic) MRCroppingSprite *sprite; // @synthesize sprite;
@property(retain, nonatomic) MRImage *slide; // @synthesize slide;
- (void)dealloc;

@end

