//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ConfigPayload : NEIKEv2Payload
{
    NEIKEv2ConfigurationMessage *_configuration;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NEIKEv2ConfigurationMessage *configuration; // @synthesize configuration=_configuration;
- (BOOL)parsePayloadData;
- (id)createConfigAttributeFromData:(id)arg1 attributeName:(id)arg2 attributeLen:(unsigned short)arg3 attributeType:(unsigned long long)arg4 customType:(unsigned long long)arg5;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

