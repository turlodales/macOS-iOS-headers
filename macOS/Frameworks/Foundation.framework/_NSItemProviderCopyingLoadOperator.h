//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/_NSItemProviderLoading-Protocol.h>

@class NSDictionary, NSItemProvider, NSString;

__attribute__((visibility("hidden")))
@interface _NSItemProviderCopyingLoadOperator : NSObject <_NSItemProviderLoading>
{
    NSItemProvider *_itemProvider;
    NSDictionary *_loadedItems;
    CDStruct_4c969caf _destinationProcessAuditToken;
}

+ (BOOL)supportsSecureCoding;
@property CDStruct_4c969caf destinationProcessAuditToken; // @synthesize destinationProcessAuditToken=_destinationProcessAuditToken;
@property(retain) NSDictionary *loadedItems; // @synthesize loadedItems=_loadedItems;
@property NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 error:(id *)arg3;
- (id)_loadItemsForTypeIdentifiers:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 itemProvider:(id)arg3;
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(CDStruct_4c969caf)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

