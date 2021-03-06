//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenSharing/SSInputEvent.h>

@interface SSKeyboardEvent : SSInputEvent
{
    unsigned long long mKeyCode;
    int mKeyState;
}

+ (id)keyboardEventWithKeyCode:(unsigned long long)arg1 withState:(int)arg2;
@property(readonly) int keyState; // @synthesize keyState=mKeyState;
@property(readonly) unsigned long long keyCode; // @synthesize keyCode=mKeyCode;
- (id)description;
- (id)initWithKeyCode:(unsigned long long)arg1 withState:(int)arg2;

@end

