//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RunningBoard/RBConcreteTarget.h>

@class RBProcess;

__attribute__((visibility("hidden")))
@interface RBBasicProcessConcreteTarget : RBConcreteTarget
{
    RBProcess *_process;
}

- (void).cxx_destruct;
- (id)process;
- (id)description;
- (id)_initWithProcess:(id)arg1;
- (id)createRBSTarget;
- (BOOL)isSystem;
- (id)identity;

@end

