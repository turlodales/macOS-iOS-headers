//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;
    BOOL _ignoreMerchantIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;
- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
@property(readonly, nonatomic) BOOL hasMerchantIdentifiers;
- (BOOL)hasMerchantIdentifier:(id)arg1;
- (id)initWithToken:(CDStruct_6ad76789)arg1;

@end

