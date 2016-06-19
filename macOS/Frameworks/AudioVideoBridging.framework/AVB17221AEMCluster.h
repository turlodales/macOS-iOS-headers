//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMNamedModelObject.h>

#import "NSCopying.h"

@interface AVB17221AEMCluster : AVB17221AEMNamedModelObject <NSCopying>
{
    unsigned short signalType;
    unsigned short signalIndex;
    unsigned short signalOutput;
    unsigned int pathLatency;
    unsigned int blockLatency;
}

@property unsigned int blockLatency; // @synthesize blockLatency;
@property unsigned int pathLatency; // @synthesize pathLatency;
@property unsigned short signalOutput; // @synthesize signalOutput;
@property unsigned short signalIndex; // @synthesize signalIndex;
@property unsigned short signalType; // @synthesize signalType;
- (id)_allSourceObjects;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;

@end

