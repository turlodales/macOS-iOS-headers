//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CCWController : NSObject
{
    struct __CCWObject *_ccwObject;
    BOOL centerTextFlag;
}

@property BOOL centerTextFlag; // @synthesize centerTextFlag;
- (void)stepperClicked:(id)arg1;
- (void)goRight:(id)arg1;
- (void)goLeft:(id)arg1;
- (void)scrollerClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (struct __CCWObject *)ccwObject;
- (id)initWithCCWObject:(struct __CCWObject *)arg1;

@end

