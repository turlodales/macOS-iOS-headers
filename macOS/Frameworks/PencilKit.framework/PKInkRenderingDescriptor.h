//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject
{
    NSString *_identifier;
    unsigned long long _version;
    unsigned long long _type;
    unsigned long long _blendMode;
    PKInkParticleDescriptor *_particleDescriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKInkParticleDescriptor *particleDescriptor; // @synthesize particleDescriptor=_particleDescriptor;
@property(nonatomic) unsigned long long blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

