//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEiOSLightTunnel : PAEFilterDefaultBase
{
}

- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (void)handleUIEventWithPosition:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 scale:(double)arg3 scaleVelocity:(double)arg4 rotation:(double)arg5 rotationVelocity:(double)arg6;
- (BOOL)addParameters;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;

@end

