//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPersistentStoreCoordinatorFactory : NSObject
{
    BOOL _readOnly;
}

- (id)builderWithStoreDescription:(id)arg1;
- (id)makeCoordinatorWithStoreAtURL:(id)arg1 storeDescription:(id)arg2;
- (id)addStoresForAccountCollection:(id)arg1 withStoreBuilder:(id)arg2;
- (id)pool_makeCoordinatorForAllSourcesWithAccountCollection:(id)arg1;
- (id)makeCoordinatorForSourcesWithAccountCollection:(id)arg1;
- (id)initReadOnly:(BOOL)arg1;

@end

