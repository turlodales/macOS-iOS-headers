//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSString;

@interface SVXStoreDemo : NSObject <NSCopying, NSSecureCoding>
{
    float _outputVolume;
    long long _transcriptID;
    NSString *_languageCode;
    long long _gender;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) float outputVolume; // @synthesize outputVolume=_outputVolume;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) long long transcriptID; // @synthesize transcriptID=_transcriptID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithTranscriptID:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 outputVolume:(float)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

