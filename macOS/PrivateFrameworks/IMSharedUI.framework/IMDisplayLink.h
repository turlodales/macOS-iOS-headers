//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IMDisplayLink : NSObject
{
    id _target;
    SEL _selector;
    NSArray *_displays;
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (Class)_displayLinkClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *displays; // @synthesize displays=_displays;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void)_displayLinkCallback;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)schedule;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

