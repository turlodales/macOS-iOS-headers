//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKStoreManager-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VTKFileStoreManager : NSObject <VTKStoreManager>
{
    NSString *_itemsDirectory;
    NSURL *_saveItemsRootURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *saveItemsRootURL; // @synthesize saveItemsRootURL=_saveItemsRootURL;
@property(copy, nonatomic) NSString *itemsDirectory; // @synthesize itemsDirectory=_itemsDirectory;
- (id)saveItems:(id)arg1 withID:(id)arg2 testCase:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

