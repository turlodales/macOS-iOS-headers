//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>

@interface AVB17221AEMMemoryObject : AVB17221AEMNamedModelObject
{
    unsigned short memoryObjectType;
    unsigned short targetDescriptorType;
    unsigned short targetDescriptorIndex;
    unsigned long long startAddress;
    unsigned long long maximumLength;
    unsigned long long length;
    unsigned long long maximumSegmentLength;
}

@property unsigned long long maximumSegmentLength; // @synthesize maximumSegmentLength;
@property unsigned long long length; // @synthesize length;
@property unsigned long long maximumLength; // @synthesize maximumLength;
@property unsigned long long startAddress; // @synthesize startAddress;
@property unsigned short targetDescriptorIndex; // @synthesize targetDescriptorIndex;
@property unsigned short targetDescriptorType; // @synthesize targetDescriptorType;
@property unsigned short memoryObjectType; // @synthesize memoryObjectType;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)objectLogName;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

