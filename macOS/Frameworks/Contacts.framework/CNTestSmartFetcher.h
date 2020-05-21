//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNKeyDescriptor_Private.h"

@class NSArray, NSString;

@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private>
{
    NSArray *_requiredKeys;
    NSArray *_optionalKeys;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *optionalKeys; // @synthesize optionalKeys=_optionalKeys;
@property(readonly, nonatomic) NSArray *requiredKeys; // @synthesize requiredKeys=_requiredKeys;
- (id)_cn_ignorableKeys;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

