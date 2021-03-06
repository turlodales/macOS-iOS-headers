//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSArray, NSString, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface SVXDeviceSetupFlowScene : NSObject <NSCopying, NSSecureCoding>
{
    long long _sceneID;
    NSString *_speakableText;
    NSArray *_displayKeyFrames;
    SVXDeviceSetupFlowSiriCapabilitiesHint *_siriCapabilitiesHint;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SVXDeviceSetupFlowSiriCapabilitiesHint *siriCapabilitiesHint; // @synthesize siriCapabilitiesHint=_siriCapabilitiesHint;
@property(readonly, copy, nonatomic) NSArray *displayKeyFrames; // @synthesize displayKeyFrames=_displayKeyFrames;
@property(readonly, copy, nonatomic) NSString *speakableText; // @synthesize speakableText=_speakableText;
@property(readonly, nonatomic) long long sceneID; // @synthesize sceneID=_sceneID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithSceneID:(long long)arg1 speakableText:(id)arg2 displayKeyFrames:(id)arg3 siriCapabilitiesHint:(id)arg4;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

