//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FxBaseEffect.h"

@class FxImage;

@protocol FxTransition <FxBaseEffect>
- (BOOL)renderOutput:(FxImage *)arg1 withInputA:(FxImage *)arg2 withInputB:(FxImage *)arg3 withTimeFraction:(float)arg4 withInfo:(CDStruct_f5b31fc1)arg5;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfoA:(CDStruct_4a07eeda)arg2 inputInfoB:(CDStruct_4a07eeda)arg3 timeFraction:(float)arg4 hardware:(char *)arg5 software:(char *)arg6;
- (BOOL)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInputA:(CDStruct_4a07eeda)arg3 withInputB:(CDStruct_4a07eeda)arg4 withTimeFraction:(float)arg5 withInfo:(CDStruct_f5b31fc1)arg6;
@end

