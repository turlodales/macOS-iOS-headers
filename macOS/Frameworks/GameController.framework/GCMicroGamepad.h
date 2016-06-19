//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCMicroGamepad : NSObject
{
    BOOL _allowsRotation;
    BOOL _reportsAbsoluteDpadValues;
}

+ (BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1;
@property(nonatomic) BOOL reportsAbsoluteDpadValues; // @synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues;
@property(nonatomic) BOOL allowsRotation; // @synthesize allowsRotation=_allowsRotation;
- (void)setButton:(id)arg1 pressed:(BOOL)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (id)saveSnapshot;
@property(readonly, retain, nonatomic) GCControllerButtonInput *buttonX;
- (id)buttonB;
@property(readonly, retain, nonatomic) GCControllerButtonInput *buttonA;
- (id)button1;
- (id)button0;
@property(readonly, retain, nonatomic) GCControllerDirectionPad *dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property(readonly, nonatomic) __weak GCController *controller;
- (id)initWithController:(id)arg1;

@end

