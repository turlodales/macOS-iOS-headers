//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURule.h>

@interface _NUBlockRule : NURule
{
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
- (void)performActionWithSystem:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;

@end

