//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAAnimation.h"

@interface CAAnimation (NSInternal)
- (id)NS_affectedKeyPaths;
- (void)NS_addAffectedKeyPaths:(id)arg1;
- (void)NS_renameKeyPath:(id)arg1 toKeyPath:(id)arg2;
- (void)NS_renameKeyPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)NS_transformValuesAtKeyPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)NS_takeImpliedValuesFromPresentationObject:(id)arg1 modelObject:(id)arg2;
- (double)NS_endTime;
- (void)_safari_ensureDelegateIsSafariCAAnimationDelegate;
@property(copy, nonatomic) CDUnknownBlockType _appkit_animationDidStopHandler;

// Remaining properties
@property(getter=NS_isActive, setter=NS_setActive:) BOOL NS_active; // @dynamic NS_active;
@property(getter=NS_animationOptions, setter=NS_setAnimationOptions:) long long NS_animationOptions; // @dynamic NS_animationOptions;
@property(retain, getter=NS_completionHandlerSuspension, setter=NS_setCompletionHandlerSuspension:) id NS_completionHandlerSuspension; // @dynamic NS_completionHandlerSuspension;
@property(copy, getter=NS_targetKeyPath, setter=NS_setTargetKeyPath:) id NS_targetKeyPath; // @dynamic NS_targetKeyPath;
@property(retain, getter=NS_targetObject, setter=NS_setTargetObject:) id NS_targetObject; // @dynamic NS_targetObject;
@property(retain, getter=NS_targetValue, setter=NS_setTargetValue:) id NS_targetValue; // @dynamic NS_targetValue;
@end

