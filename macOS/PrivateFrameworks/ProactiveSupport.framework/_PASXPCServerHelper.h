//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASXPCServerHelper : NSObject
{
}

+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 shouldGenerateCrashReport:(BOOL)arg5;
+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4;
+ (BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 logHandle:(id)arg3;
+ (BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(CDUnknownBlockType)arg6 setupClientProxy:(CDUnknownBlockType)arg7 interruptionHandler:(CDUnknownBlockType)arg8 invalidationHandler:(CDUnknownBlockType)arg9 logHandle:(id)arg10;

@end

