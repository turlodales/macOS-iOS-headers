//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDInMemoryThreadQueryHandler, EDPrecomputedThreadQueryHandler, EDThreadMigrator, EMObjectID;

@interface _EDThreadQueryUnderlyingHandlers : NSObject
{
    EMObjectID *_inMemoryObservationID;
    EMObjectID *_precomputedObservationID;
    EDInMemoryThreadQueryHandler *_inMemoryQueryHandler;
    EDPrecomputedThreadQueryHandler *_precomputedQueryHandler;
    EDThreadMigrator *_threadMigrator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EDThreadMigrator *threadMigrator; // @synthesize threadMigrator=_threadMigrator;
@property(retain, nonatomic) EDPrecomputedThreadQueryHandler *precomputedQueryHandler; // @synthesize precomputedQueryHandler=_precomputedQueryHandler;
@property(retain, nonatomic) EDInMemoryThreadQueryHandler *inMemoryQueryHandler; // @synthesize inMemoryQueryHandler=_inMemoryQueryHandler;
@property(retain, nonatomic) EMObjectID *precomputedObservationID; // @synthesize precomputedObservationID=_precomputedObservationID;
@property(retain, nonatomic) EMObjectID *inMemoryObservationID; // @synthesize inMemoryObservationID=_inMemoryObservationID;
- (BOOL)_isCurrentObservationToken:(id)arg1;

@end

