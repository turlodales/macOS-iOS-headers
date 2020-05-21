//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestDeclaration_Status : CEMPayloadBase
{
    NSString *_statusEcho;
}

+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *statusEcho; // @synthesize statusEcho=_statusEcho;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

