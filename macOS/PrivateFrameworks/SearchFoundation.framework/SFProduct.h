//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFProduct.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int buyable:1;
    } _has;
    BOOL _buyable;
    NSString *_identifier;
    NSString *_productIdentifier;
    NSURL *_availabilityURL;
    NSString *_displayName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL buyable; // @synthesize buyable=_buyable;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSURL *availabilityURL; // @synthesize availabilityURL=_availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasBuyable;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

