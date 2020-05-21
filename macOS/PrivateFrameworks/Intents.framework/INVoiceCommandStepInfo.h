//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INJSONSerializable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface INVoiceCommandStepInfo : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_applicationIdentifier;
    long long _category;
    NSString *_name;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) long long category; // @synthesize category=_category;
@property(readonly, copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithApplicationIdentifier:(id)arg1 category:(long long)arg2 name:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

