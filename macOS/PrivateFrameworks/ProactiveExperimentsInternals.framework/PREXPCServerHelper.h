//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PREXPCServerHelper : NSObject
{
}

+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3;
+ (BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2;
+ (BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(CDUnknownBlockType)arg5 setupClientProxy:(CDUnknownBlockType)arg6 interruptionHandler:(CDUnknownBlockType)arg7 invalidationHandler:(CDUnknownBlockType)arg8;

@end

