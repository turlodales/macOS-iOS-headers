//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OZRigDropMenuTarget : NSObject
{
    struct OZRig *_pRig;
}

+ (id)rigDropMenuTargetForRig:(struct OZRig *)arg1;
- (void)pasteHelper:(unsigned int)arg1;
- (void)pasteToNewSlider;
- (void)pasteToNewList;
- (void)pasteToNewSwitch;
- (void)setRig:(struct OZRig *)arg1;

@end

