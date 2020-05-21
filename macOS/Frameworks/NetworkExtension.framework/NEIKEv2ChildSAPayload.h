//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload
{
    BOOL _includeDHGroup;
    NSArray *_proposals;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property BOOL includeDHGroup; // @synthesize includeDHGroup=_includeDHGroup;
@property(retain) NSArray *proposals; // @synthesize proposals=_proposals;
- (BOOL)parsePayloadData;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)type;

@end

