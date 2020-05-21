//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

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

