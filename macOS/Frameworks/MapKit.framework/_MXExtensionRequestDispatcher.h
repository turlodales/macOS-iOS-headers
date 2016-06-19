//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSExtensionRequestHandling.h"

@class NSString;

@interface _MXExtensionRequestDispatcher : NSObject <NSExtensionRequestHandling>
{
    id <_MXExtensionServiceVendor> _vendor;
}

@property(nonatomic) __weak id <_MXExtensionServiceVendor> vendor; // @synthesize vendor=_vendor;
- (void).cxx_destruct;
- (void)_handleRequestObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRequestWithExtensionItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)initWithServiceVendor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

