//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class THAButton;

@interface THAButtonEvent : NSObject
{
    THAButton *_button;
    unsigned long long _state;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) THAButton *button; // @synthesize button=_button;
- (id)serialize;

@end

