//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKStoreDAAPLibraryObserver.h"

@class CKStoreDAAPLibrary, NSMutableDictionary, NSString;

@interface CKDAAPPurchaseHistory : NSObject <CKStoreDAAPLibraryObserver>
{
    CKStoreDAAPLibrary *_library;
    NSMutableDictionary *_observers;
    id _token;
}

- (void).cxx_destruct;
@property(retain) id token; // @synthesize token=_token;
@property(retain) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(readonly) CKStoreDAAPLibrary *library; // @synthesize library=_library;
- (void)storeDAAPLibrary:(id)arg1 addedItems:(id)arg2 removedItems:(id)arg3;
- (id)_purchaseFromDAAPItem:(id)arg1;
- (void)pollForPurchasedItems:(BOOL)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(id)arg1;
- (id)purchasedItems;
- (id)initWithStoreClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

