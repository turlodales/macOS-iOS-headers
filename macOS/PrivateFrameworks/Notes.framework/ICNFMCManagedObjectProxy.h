//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICNFMCChanging-Protocol.h>

@class NSManagedObject, NSManagedObjectContext, NSManagedObjectID, NSString;

@interface ICNFMCManagedObjectProxy : NSObject <ICNFMCChanging>
{
    NSManagedObjectContext *_context;
    NSManagedObject *_managedObject;
    BOOL _isChanging;
}

- (void).cxx_destruct;
@property BOOL isChanging; // @synthesize isChanging=_isChanging;
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)beginChanging;
- (void)setProxiedValue:(id)arg1 forKey:(id)arg2;
- (id)proxiedValueForKey:(id)arg1;
- (void)_handleObjectDeletion:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSManagedObjectID *objectID;
- (void)dealloc;
- (id)init;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

