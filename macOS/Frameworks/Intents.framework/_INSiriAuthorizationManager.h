//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _INSiriAuthorizationManager : NSObject
{
}

+ (id)_tccAccessInfoForBundle:(id)arg1;
+ (BOOL)_siriEnabled;
+ (BOOL)_isSiriAuthorizationRestricted;
+ (long long)_siriAuthorizationStatusForAppID:(id)arg1;
+ (void)_requestSiriAuthorization:(CDUnknownBlockType)arg1 auditToken:(CDStruct_6ad76789)arg2;

@end

