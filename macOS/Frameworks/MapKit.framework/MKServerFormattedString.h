//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class MKServerFormattedStringParameters;
@protocol GEOServerFormattedString;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding>
{
    id <GEOServerFormattedString> _geoServerString;
    MKServerFormattedStringParameters *_parameters;
}

+ (BOOL)supportsSecureCoding;
+ (id)attributesForServerFormatStyle:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MKServerFormattedStringParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) id <GEOServerFormattedString> geoServerString; // @synthesize geoServerString=_geoServerString;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqualToServerFormattedString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)_attributesByTokenForFormatStyles:(id)arg1;
- (id)multiPartAttributedStringWithAttributes:(id)arg1;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoServerString:(id)arg1 parameters:(id)arg2;

@end

