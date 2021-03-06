//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSExtension, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface _MDIndexExtension : NSObject
{
    BOOL _entitlementVerified;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_containerID;
    NSSet *_identifiers;
    NSExtension *_extension;
    NSString *_containerPath;
    NSString *_extensionID;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL entitlementVerified; // @synthesize entitlementVerified=_entitlementVerified;
@property(retain, nonatomic) NSString *extensionID; // @synthesize extensionID=_extensionID;
@property(retain, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy) NSSet *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performJob:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_verifyIntegrityWithHostContext:(id)arg1;
@property(readonly) BOOL dontRunDuringMigration;
@property(readonly) BOOL isInternal;
@property(readonly) NSDictionary *infoDictionary;
@property(readonly) BOOL isEnabled;
- (id)description;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4;

@end

