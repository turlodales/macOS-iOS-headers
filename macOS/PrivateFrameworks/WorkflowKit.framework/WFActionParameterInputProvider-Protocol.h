//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOrderedSet, WFAction, WFParameter;

@protocol WFActionParameterInputProvider <NSObject>
- (BOOL)action:(WFAction *)arg1 canProvideInputForParameter:(WFParameter *)arg2;
- (void)action:(WFAction *)arg1 provideInputForParameters:(NSOrderedSet *)arg2 withDefaultStates:(NSDictionary *)arg3 completionHandler:(void (^)(BOOL, NSDictionary *))arg4;
@end

