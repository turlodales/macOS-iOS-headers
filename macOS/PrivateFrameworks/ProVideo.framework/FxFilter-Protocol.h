//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FxBaseEffect.h"

@class FxImage;

@protocol FxFilter <FxBaseEffect>
- (BOOL)renderOutput:(FxImage *)arg1 withInput:(FxImage *)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_4a07eeda)arg3 withInfo:(CDStruct_f5b31fc1)arg4;

@optional
- (void)schedule:(unsigned long long)arg1 frames:(CDUnion_baaf6063 *)arg2 forRenderAtTime:(CDUnion_baaf6063)arg3;
- (unsigned long long)numberOfFramesToScheduleAtRenderTime:(CDUnion_baaf6063)arg1;
@end

