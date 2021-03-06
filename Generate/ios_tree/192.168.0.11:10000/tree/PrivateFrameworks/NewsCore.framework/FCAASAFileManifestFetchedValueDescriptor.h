/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAASAFileManifestFetchedValueDescriptor : FCFetchedValueDescriptor {
    FCFetchedValueManager * _heldLinksResourceManager;
    FCFetchedValueManager * _purchaseIDsManager;
}

@property (nonatomic, readonly) FCFetchedValueManager *heldLinksResourceManager;
@property (nonatomic, readonly) FCFetchedValueManager *purchaseIDsManager;

- (void).cxx_destruct;
- (id)_computedValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)heldLinksResourceManager;
- (id)init;
- (id)initWithPurchaseIDsManager:(id)arg1 heldLinksResourceManager:(id)arg2;
- (id)inputManagers;
- (bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)purchaseIDsManager;

@end
