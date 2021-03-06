//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload
{
    unsigned long long _encoding;
    NSData *_certificateData;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property unsigned long long encoding; // @synthesize encoding=_encoding;
- (BOOL)parsePayloadData;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

