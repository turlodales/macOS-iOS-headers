//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

__attribute__((visibility("hidden")))
@interface NSVB_AnimationFencingSupport
{
}

+ (void)_animateWithAttributes:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_currentAnimationAttributes:(BOOL)arg1;
+ (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(CDUnknownBlockType)arg1;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (unsigned int)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 andPreCommitHandler:(CDUnknownBlockType)arg2;

@end

