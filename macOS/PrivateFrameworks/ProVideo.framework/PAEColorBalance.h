//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEColorBalance : PAEFilterDefaultBase
{
}

- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (void)convertColor:(double *)arg1 toUISpaceFromSpace:(struct CGColorSpace *)arg2;
- (BOOL)addParameters;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;

@end

