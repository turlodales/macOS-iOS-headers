//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface CNCDChangeHistoryClientHelper : NSObject
{
    NSManagedObjectContext *_context;
}

+ (BOOL)contextHasPersistentStores:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)save;
- (id)updateClientWithIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)insertNewClientWithIdentifier:(id)arg1;
- (id)clientWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithManagedObjectContext:(id)arg1;

@end

