//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

- (void).cxx_destruct;
- (id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)issueRequestForIdentifier:(id)arg1;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <SKProductsRequestDelegate> delegate; // @dynamic delegate;

@end

