//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>

#import "NSCopying.h"

@interface AVB17221AEMBaseControl : AVB17221AEMNamedModelObject <NSCopying>
{
    unsigned short controlDomain;
    unsigned int blockLatency;
    unsigned int controlLatency;
}

@property unsigned int controlLatency; // @synthesize controlLatency;
@property unsigned int blockLatency; // @synthesize blockLatency;
@property unsigned short controlDomain; // @synthesize controlDomain;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_allSourceObjects;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;

@end

