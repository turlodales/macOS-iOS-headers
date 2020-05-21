//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFUberProduct : MTLModel <NSSecureCoding, MTLJSONSerializing>
{
    BOOL _shared;
    NSString *_productId;
    NSString *_productDescription;
    unsigned long long _productGroup;
    NSString *_displayName;
    NSNumber *_capacity;
    NSURL *_pictureURL;
}

+ (id)productWithProductId:(id)arg1;
+ (id)productGroupJSONTransformer;
+ (id)pictureURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shared; // @synthesize shared=_shared;
@property(readonly, nonatomic) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(readonly, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned long long productGroup; // @synthesize productGroup=_productGroup;
@property(readonly, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (id)initWithProductId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

