//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary : CEMPayloadBase
{
    NSDictionary *_statusANY;
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *statusANY; // @synthesize statusANY=_statusANY;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

