//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator
{
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
}

- (struct __C3DFXProgram *)_programWithHashCode:(struct __C3DRendererElementProgramHashCode *)arg1 introspectionDataPtr:(CDStruct_5d961f59 *)arg2;
- (void)dealloc;
- (id)init;
- (int)profile;

@end

