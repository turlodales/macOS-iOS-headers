//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JavaScriptAppleEvents/JSOCFunctionPointer.h>

@class NSInvocation, NSMutableDictionary;

@interface JSOCClosure : JSOCFunctionPointer
{
    NSMutableDictionary *_userInfo;
    NSInvocation *_invocation;
}

+ (void *)staticPointerValueWithType:(id)arg1 invocationBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(readonly, retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (id)initWithType:(id)arg1 invocationBlock:(CDUnknownBlockType)arg2;
- (id)initWithThunk:(CDUnknownFunctionPointerType)arg1 type:(id)arg2;

@end

