//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (SPCAppearance)
- (void)stopObservingChangesToVariableNamed:(id)arg1;
- (void)startObservingChangesToVariableNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)startObservingChangesToVariableNamed:(id)arg1 block:(CDUnknownBlockType)arg2 setInitalValue:(BOOL)arg3;
- (void)dissociateVariableForKeyPath:(id)arg1;
- (void)associateVariableNamed:(id)arg1 withKeyPath:(id)arg2;
- (void)associateVariableNamed:(id)arg1 withKeyPath:(id)arg2 applyInitialValue:(BOOL)arg3;
- (id)_bindingRegistry;
@end

