//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVOutputDevice, NSArray;

@protocol AVFigRoutingContextOutputDeviceTranslator <NSObject>
- (void)removeOutputDevice:(AVOutputDevice *)arg1 withOptions:(const struct __CFDictionary *)arg2 fromRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg4;
- (void)addOutputDevice:(AVOutputDevice *)arg1 withOptions:(const struct __CFDictionary *)arg2 toRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg4;
- (void)setOutputDevices:(NSArray *)arg1 withOptions:(const struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg4;
- (void)setOutputDevice:(AVOutputDevice *)arg1 withOptions:(const struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg4;
- (NSArray *)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (AVOutputDevice *)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
@end

