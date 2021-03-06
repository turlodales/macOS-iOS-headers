//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IFInstallPlan, IFSearchContext, NSMutableSet, NSString;

@interface IFPathActionController : NSObject
{
    IFInstallPlan *_plan;
    NSString *_destinationPath;
    IFSearchContext *_searchContext;
    NSMutableSet *_resolvedNodes;
}

- (BOOL)resolveActionsForNode:(id)arg1 resolvingParents:(BOOL)arg2 returningError:(id *)arg3;
- (id)plan;
- (id)installTarget;
- (void)dealloc;
- (id)initWithInstallPlan:(id)arg1 onTarget:(id)arg2 withSearchContext:(id)arg3;

@end

