//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCodableCoding.h"
#import "NSSecureCoding.h"

@class INIntentResponseCodableDescription, NSArray, NSString;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding>
{
    BOOL _success;
    long long _value;
    NSString *_name;
    NSString *_formatString;
    NSString *_formatStringLocID;
    NSString *_conciseFormatString;
    NSString *_conciseFormatStringLocID;
    INIntentResponseCodableDescription *__responseCodableDescription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setResponseCodableDescription:) __weak INIntentResponseCodableDescription *_responseCodableDescription; // @synthesize _responseCodableDescription=__responseCodableDescription;
@property(copy, nonatomic) NSString *conciseFormatStringLocID; // @synthesize conciseFormatStringLocID=_conciseFormatStringLocID;
@property(copy, nonatomic) NSString *conciseFormatString; // @synthesize conciseFormatString=_conciseFormatString;
@property(copy, nonatomic) NSString *formatStringLocID; // @synthesize formatStringLocID=_formatStringLocID;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(nonatomic, getter=isSuccess) BOOL success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long value; // @synthesize value=_value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyPrefix;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (id)_parameterNamesFromString:(id)arg1;
@property(readonly, nonatomic) NSArray *parameterNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

